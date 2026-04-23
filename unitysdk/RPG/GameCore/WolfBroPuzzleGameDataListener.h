#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_METHOD_3_88C650B42A3EE326_OFFSET UNITYSDK_OFFSET(0x19110750)
#define RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_METHOD_3_E47D00FBC1CAC7DA_OFFSET UNITYSDK_OFFSET(0x191106D0)
#define RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19110720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroPuzzleGameDataListener_TypeDefinitionIndex = 20142;

	class WolfBroPuzzleGameDataListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBulletCntValid; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBulletCntInvalid; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E47D00FBC1CAC7DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPuzzleGameDataListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPuzzleGameDataListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_METHOD_3_E47D00FBC1CAC7DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88C650B42A3EE326(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroPuzzleGameDataListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroPuzzleGameDataListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_METHOD_3_88C650B42A3EE326_OFFSET))(a1, a2);
		}
	};
}
