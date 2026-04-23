#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEventType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELEVENTLISTENER_METHOD_2_99ECEE995E3E7D28_OFFSET UNITYSDK_OFFSET(0x187FADA0)
#define RPG_GAMECORE_CHIMERADUELEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x187FAF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEventListener_TypeDefinitionIndex = 15187;

	class ChimeraDuelEventListener : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelEventType EventType; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* ValueGetters; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* SourceSelector; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_99ECEE995E3E7D28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTLISTENER_METHOD_2_99ECEE995E3E7D28_OFFSET))(a1, a2);
		}
	};
}
