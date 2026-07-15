#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTDATA_METHOD_2_A35EA56B133CF7BD_OFFSET UNITYSDK_OFFSET(0x1A3F47B0)
#define RPG_GAMECORE_BATTLEPAUSEENVIRONMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F4A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePauseEnvironmentData_TypeDefinitionIndex = 21980;

	class BattlePauseEnvironmentData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Title; // 0x18
		::RPG::Client::TextID Desc; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* Params; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A35EA56B133CF7BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePauseEnvironmentData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePauseEnvironmentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPAUSEENVIRONMENTDATA_METHOD_2_A35EA56B133CF7BD_OFFSET))(a1, a2);
		}
	};
}
