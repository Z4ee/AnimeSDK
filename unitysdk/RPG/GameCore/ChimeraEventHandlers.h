#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleWaitEvent; }

#define RPG_GAMECORE_CHIMERAEVENTHANDLERS_METHOD_2_4B4A4E35DEF82F6A_OFFSET UNITYSDK_OFFSET(0x1CFBE980)
#define RPG_GAMECORE_CHIMERAEVENTHANDLERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD1900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEventHandlers_TypeDefinitionIndex = 15674;

	class ChimeraEventHandlers : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraBattleWaitEvent*>* Handlers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVENTHANDLERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4B4A4E35DEF82F6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraEventHandlers*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraEventHandlers*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVENTHANDLERS_METHOD_2_4B4A4E35DEF82F6A_OFFSET))(a1, a2);
		}
	};
}
