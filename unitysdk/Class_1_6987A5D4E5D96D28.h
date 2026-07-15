#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageTypeRow; }
namespace System { class String; }

#define CLASS_1_6987A5D4E5D96D28_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x18C83240)
#define CLASS_1_6987A5D4E5D96D28_METHOD_1_19E8AA768E2DA1EE_OFFSET UNITYSDK_OFFSET(0x18C83320)
#define CLASS_1_6987A5D4E5D96D28_METHOD_1_5E56D540C935C2B2_OFFSET UNITYSDK_OFFSET(0x18C831F0)
#define CLASS_1_6987A5D4E5D96D28_METHOD_1_6929C20FCC70C1A3_1_OFFSET UNITYSDK_OFFSET(0x18C83380)
#define CLASS_1_6987A5D4E5D96D28_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x18C83280)
#define CLASS_1_6987A5D4E5D96D28_METHOD_1_7CA8CDF582E45AEF_OFFSET UNITYSDK_OFFSET(0x18C83150)
#define CLASS_1_6987A5D4E5D96D28__CTOR_OFFSET UNITYSDK_OFFSET(0x18C831E0)

inline static constexpr unsigned int Class_1_6987A5D4E5D96D28_TypeDefinitionIndex = 68827;

class Class_1_6987A5D4E5D96D28 : public ::System::Object
{
public:
	::RPG::GameCore::AttackDamageType Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6987A5D4E5D96D28__CTOR_OFFSET))(this);
	}

	static ::Class_1_6987A5D4E5D96D28* Method_1_7CA8CDF582E45AEF(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::Class_1_6987A5D4E5D96D28*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_6987A5D4E5D96D28_METHOD_1_7CA8CDF582E45AEF_OFFSET))(a1);
	}

	::System::Void Method_1_5E56D540C935C2B2(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_6987A5D4E5D96D28_METHOD_1_5E56D540C935C2B2_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6987A5D4E5D96D28_GET_DAMAGETYPE_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6987A5D4E5D96D28_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6987A5D4E5D96D28_METHOD_1_6929C20FCC70C1A3_1_OFFSET))(this);
	}

	::RPG::GameCore::DamageTypeRow* Method_1_19E8AA768E2DA1EE()
	{
		return ((::RPG::GameCore::DamageTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6987A5D4E5D96D28_METHOD_1_19E8AA768E2DA1EE_OFFSET))(this);
	}
};
