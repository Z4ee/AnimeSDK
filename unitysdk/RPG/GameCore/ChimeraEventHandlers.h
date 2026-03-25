#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleWaitEvent; }

#define RPG_GAMECORE_CHIMERAEVENTHANDLERS_METHOD_2_7BB55F882C8C131F_OFFSET UNITYSDK_OFFSET(0x170A9090)
#define RPG_GAMECORE_CHIMERAEVENTHANDLERS__CTOR_OFFSET UNITYSDK_OFFSET(0x170A9190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEventHandlers_TypeDefinitionIndex = 14540;

	class ChimeraEventHandlers : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraBattleWaitEvent*>* Handlers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVENTHANDLERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7BB55F882C8C131F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraEventHandlers*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraEventHandlers*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVENTHANDLERS_METHOD_2_7BB55F882C8C131F_OFFSET))(a1, a2);
		}
	};
}
