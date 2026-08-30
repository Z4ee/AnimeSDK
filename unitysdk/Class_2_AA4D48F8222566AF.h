#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_DC9C477547B15CC2;
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_AA4D48F8222566AF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x178BABD0)
#define CLASS_2_AA4D48F8222566AF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x178BAD10)
#define CLASS_2_AA4D48F8222566AF_METHOD_2_224A80FE439C5E7E_OFFSET UNITYSDK_OFFSET(0x178BA620)
#define CLASS_2_AA4D48F8222566AF_METHOD_2_3F7AB21DB7260DCD_OFFSET UNITYSDK_OFFSET(0x178BA870)
#define CLASS_2_AA4D48F8222566AF_METHOD_2_68484F1EFA5F5699_OFFSET UNITYSDK_OFFSET(0x178BA220)
#define CLASS_2_AA4D48F8222566AF_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x178BA760)
#define CLASS_2_AA4D48F8222566AF_METHOD_2_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x178BA7C0)
#define CLASS_2_AA4D48F8222566AF_METHOD_2_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0x178BA820)
#define CLASS_2_AA4D48F8222566AF_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x178BAB10)
#define CLASS_2_AA4D48F8222566AF_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x178BAA50)
#define CLASS_2_AA4D48F8222566AF_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x178BA360)
#define CLASS_2_AA4D48F8222566AF__CTOR_OFFSET UNITYSDK_OFFSET(0x178BAE30)
#define CLASS_2_AA4D48F8222566AF__ONBIND_OFFSET UNITYSDK_OFFSET(0x178BA100)

inline static constexpr unsigned int Class_2_AA4D48F8222566AF_TypeDefinitionIndex = 72177;

class Class_2_AA4D48F8222566AF : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
	::Class_2_DC9C477547B15CC2* NHNHKBJJKPP; // 0x68
	::RPG::GameCore::AvatarEnergyBarState* CLANFJEMFCP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_68484F1EFA5F5699(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_METHOD_2_68484F1EFA5F5699_OFFSET))(this, a1);
	}

	::System::Void Method_2_224A80FE439C5E7E(::RPG::GameCore::AbilityMaxSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_METHOD_2_224A80FE439C5E7E_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_METHOD_2_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_BADDA70ED68283AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_METHOD_2_BADDA70ED68283AE_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::String* Method_2_3F7AB21DB7260DCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_METHOD_2_3F7AB21DB7260DCD_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA4D48F8222566AF_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
