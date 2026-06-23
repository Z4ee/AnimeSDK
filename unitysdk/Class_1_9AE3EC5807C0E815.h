#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/Object.h"

class Class_2_DE63F91C3C802C47;
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class FlowControlNode; }
namespace System { class String; }

#define CLASS_1_9AE3EC5807C0E815_METHOD_1_1A4E0FFCF3F7E082_OFFSET UNITYSDK_OFFSET(0x14DC8100)
#define CLASS_1_9AE3EC5807C0E815_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x14DC85A0)
#define CLASS_1_9AE3EC5807C0E815_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x14DC82A0)
#define CLASS_1_9AE3EC5807C0E815_METHOD_1_A3A75093075464DC_OFFSET UNITYSDK_OFFSET(0x14DC8420)
#define CLASS_1_9AE3EC5807C0E815_METHOD_1_E03D4451E6D18478_OFFSET UNITYSDK_OFFSET(0x14DC8A40)
#define CLASS_1_9AE3EC5807C0E815__CTOR_OFFSET UNITYSDK_OFFSET(0x14DC80F0)

inline static constexpr unsigned int Class_1_9AE3EC5807C0E815_TypeDefinitionIndex = 53463;

class Class_1_9AE3EC5807C0E815 : public ::System::Object
{
public:
	::FlowCanvas::ValueInput_1<::System::String*>* Field_1_5; // 0x10
	::FlowCanvas::ValueInput_1<::System::Boolean>* Field_1_2; // 0x18
	::FlowCanvas::ValueInput_1<::MoleMole::Config::TimePeriodType>* Field_1_3; // 0x20
	::FlowCanvas::ValueInput_1<::System::Int32>* Field_1_7; // 0x28
	::FlowCanvas::ValueInput_1<::System::String*>* Field_1_0; // 0x30
	::FlowCanvas::ValueInput_1<::System::String*>* Field_1_1; // 0x38
	::FlowCanvas::ValueInput_1<::MoleMole::Config::WeatherType>* Field_1_4; // 0x40
	::System::Int32 Field_1_8; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AE3EC5807C0E815__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1A4E0FFCF3F7E082(::Class_2_DE63F91C3C802C47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DE63F91C3C802C47*))((::PBYTE)hIl2Cpp + CLASS_1_9AE3EC5807C0E815_METHOD_1_1A4E0FFCF3F7E082_OFFSET))(this, a1);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AE3EC5807C0E815_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_A3A75093075464DC(::FlowCanvas::Nodes::FlowControlNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::FlowControlNode*))((::PBYTE)hIl2Cpp + CLASS_1_9AE3EC5807C0E815_METHOD_1_A3A75093075464DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AE3EC5807C0E815_METHOD_1_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_1_E03D4451E6D18478(::FlowCanvas::Nodes::FlowControlNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::FlowControlNode*))((::PBYTE)hIl2Cpp + CLASS_1_9AE3EC5807C0E815_METHOD_1_E03D4451E6D18478_OFFSET))(this, a1);
	}
};
