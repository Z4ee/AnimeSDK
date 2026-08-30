#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_6572C39582A151B4_METHOD_1_0CCD933A8DCA850F_1_OFFSET UNITYSDK_OFFSET(0x198666C0)
#define CLASS_1_6572C39582A151B4_METHOD_1_0CCD933A8DCA850F_OFFSET UNITYSDK_OFFSET(0x19866650)
#define CLASS_1_6572C39582A151B4_METHOD_1_CD446F92F19B02D9_OFFSET UNITYSDK_OFFSET(0x198663E0)
#define CLASS_1_6572C39582A151B4_METHOD_1_E7955EC696E7ED3A_OFFSET UNITYSDK_OFFSET(0x19866460)
#define CLASS_1_6572C39582A151B4_METHOD_1_F25D2DE7181D2805_1_OFFSET UNITYSDK_OFFSET(0x198665C0)
#define CLASS_1_6572C39582A151B4_METHOD_1_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0x19866530)
#define CLASS_1_6572C39582A151B4__CTOR_OFFSET UNITYSDK_OFFSET(0x19866450)

inline static constexpr unsigned int Class_1_6572C39582A151B4_TypeDefinitionIndex = 71950;

class Class_1_6572C39582A151B4 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6572C39582A151B4__CTOR_OFFSET))(this);
	}

	static ::Class_1_6572C39582A151B4* Method_1_CD446F92F19B02D9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_6572C39582A151B4*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6572C39582A151B4_METHOD_1_CD446F92F19B02D9_OFFSET))(a1);
	}

	::System::Void Method_1_E7955EC696E7ED3A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6572C39582A151B4_METHOD_1_E7955EC696E7ED3A_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6572C39582A151B4_METHOD_1_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_F25D2DE7181D2805_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6572C39582A151B4_METHOD_1_F25D2DE7181D2805_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_0CCD933A8DCA850F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6572C39582A151B4_METHOD_1_0CCD933A8DCA850F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_0CCD933A8DCA850F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6572C39582A151B4_METHOD_1_0CCD933A8DCA850F_1_OFFSET))(this);
	}
};
