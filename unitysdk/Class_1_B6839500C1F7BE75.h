#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerOp.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }

#define CLASS_1_B6839500C1F7BE75_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x15F2B360)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15F2B260)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x15F2ADF0)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x15F2AFB0)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x15F2B310)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15F2B2C0)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_BABD89A60095C109_OFFSET UNITYSDK_OFFSET(0x15F2ADA0)
#define CLASS_1_B6839500C1F7BE75__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2AD90)

inline static constexpr unsigned int Class_1_B6839500C1F7BE75_TypeDefinitionIndex = 61448;

class Class_1_B6839500C1F7BE75 : public ::System::Object
{
public:
	::RPG::GameCore::GridFightAssistantMessageConfigRow* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BABD89A60095C109(::RPG::Client::GridFightPlayerOp a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPlayerOp))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_BABD89A60095C109_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
