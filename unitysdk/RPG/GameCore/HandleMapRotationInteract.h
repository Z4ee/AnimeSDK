#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HANDLEMAPROTATIONINTERACT_METHOD_3_6F54998CF4068A30_OFFSET UNITYSDK_OFFSET(0x1B66F310)
#define RPG_GAMECORE_HANDLEMAPROTATIONINTERACT_METHOD_3_F4B8DD1DCC051547_OFFSET UNITYSDK_OFFSET(0x1B66F350)
#define RPG_GAMECORE_HANDLEMAPROTATIONINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66F340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HandleMapRotationInteract_TypeDefinitionIndex = 21493;

	class HandleMapRotationInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* StartInteract; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EndInteract; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANDLEMAPROTATIONINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F54998CF4068A30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HandleMapRotationInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HandleMapRotationInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANDLEMAPROTATIONINTERACT_METHOD_3_6F54998CF4068A30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4B8DD1DCC051547(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HandleMapRotationInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HandleMapRotationInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANDLEMAPROTATIONINTERACT_METHOD_3_F4B8DD1DCC051547_OFFSET))(a1, a2);
		}
	};
}
