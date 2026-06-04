#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerOp.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }

#define CLASS_1_B6839500C1F7BE75_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1400F280)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1400F1E0)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x1400EF60)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x1400EE10)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_BABD89A60095C109_OFFSET UNITYSDK_OFFSET(0x1400EDC0)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x1400F260)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1400F240)
#define CLASS_1_B6839500C1F7BE75__CTOR_OFFSET UNITYSDK_OFFSET(0x1400EDB0)

inline static constexpr unsigned int Class_1_B6839500C1F7BE75_TypeDefinitionIndex = 60162;

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

	::System::Boolean Method_1_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
