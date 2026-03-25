#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HANDLEMAPROTATIONINTERACT_METHOD_3_1564A95E1A89D723_OFFSET UNITYSDK_OFFSET(0x172946F0)
#define RPG_GAMECORE_HANDLEMAPROTATIONINTERACT_METHOD_3_17CE552B4A8A2B25_OFFSET UNITYSDK_OFFSET(0x17294770)
#define RPG_GAMECORE_HANDLEMAPROTATIONINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x17294740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HandleMapRotationInteract_TypeDefinitionIndex = 20498;

	class HandleMapRotationInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* StartInteract; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EndInteract; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANDLEMAPROTATIONINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1564A95E1A89D723(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HandleMapRotationInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HandleMapRotationInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANDLEMAPROTATIONINTERACT_METHOD_3_1564A95E1A89D723_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17CE552B4A8A2B25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HandleMapRotationInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HandleMapRotationInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANDLEMAPROTATIONINTERACT_METHOD_3_17CE552B4A8A2B25_OFFSET))(a1, a2);
		}
	};
}
