#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_METHOD_3_374AD3868C269B6C_OFFSET UNITYSDK_OFFSET(0x19736DE0)
#define RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_METHOD_3_67A51B8823B20AFB_OFFSET UNITYSDK_OFFSET(0x1972D230)
#define RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972D210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCrystalChangeHPAction_TypeDefinitionIndex = 17870;

	class FiveDimCrystalChangeHPAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Int32 Value; // 0x10
		::System::Boolean DelayDisableCollider; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_374AD3868C269B6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_METHOD_3_374AD3868C269B6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67A51B8823B20AFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCRYSTALCHANGEHPACTION_METHOD_3_67A51B8823B20AFB_OFFSET))(a1, a2);
		}
	};
}
