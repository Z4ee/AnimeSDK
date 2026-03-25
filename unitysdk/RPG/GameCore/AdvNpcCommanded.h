#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCCOMMANDED_METHOD_3_010B5B676E6E862B_OFFSET UNITYSDK_OFFSET(0x16F35F90)
#define RPG_GAMECORE_ADVNPCCOMMANDED_METHOD_3_6501437387659502_OFFSET UNITYSDK_OFFSET(0x16F36010)
#define RPG_GAMECORE_ADVNPCCOMMANDED__CTOR_OFFSET UNITYSDK_OFFSET(0x16F35FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcCommanded_TypeDefinitionIndex = 18267;

	class AdvNpcCommanded : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCommandToSearchProp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCOMMANDED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_010B5B676E6E862B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcCommanded*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcCommanded*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCOMMANDED_METHOD_3_010B5B676E6E862B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6501437387659502(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcCommanded* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcCommanded*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCOMMANDED_METHOD_3_6501437387659502_OFFSET))(a1, a2);
		}
	};
}
