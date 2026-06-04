#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLENPCLISTENER_METHOD_3_A204AF95216B965A_OFFSET UNITYSDK_OFFSET(0x198D4270)
#define RPG_GAMECORE_MARBLENPCLISTENER_METHOD_3_C0161FB08F369E10_OFFSET UNITYSDK_OFFSET(0x198D42F0)
#define RPG_GAMECORE_MARBLENPCLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x198D42C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleNpcListener_TypeDefinitionIndex = 20820;

	class MarbleNpcListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSpecialKillA; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNormalKillA; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMassDamageA; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSpecialKillB; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNormalKillB; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMassDamageB; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLENPCLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A204AF95216B965A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleNpcListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleNpcListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLENPCLISTENER_METHOD_3_A204AF95216B965A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C0161FB08F369E10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleNpcListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleNpcListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLENPCLISTENER_METHOD_3_C0161FB08F369E10_OFFSET))(a1, a2);
		}
	};
}
