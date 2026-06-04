#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_METHOD_3_2B10276F44B290CC_OFFSET UNITYSDK_OFFSET(0x19E68DA0)
#define RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_METHOD_3_988CC2B393AF8E14_OFFSET UNITYSDK_OFFSET(0x19E68D20)
#define RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E68D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroPuzzleGameDataListener_TypeDefinitionIndex = 19999;

	class WolfBroPuzzleGameDataListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBulletCntValid; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBulletCntInvalid; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_988CC2B393AF8E14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPuzzleGameDataListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPuzzleGameDataListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_METHOD_3_988CC2B393AF8E14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B10276F44B290CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPuzzleGameDataListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPuzzleGameDataListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_METHOD_3_2B10276F44B290CC_OFFSET))(a1, a2);
		}
	};
}
