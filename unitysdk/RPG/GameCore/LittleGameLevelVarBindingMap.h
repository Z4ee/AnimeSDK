#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameLevelVarBinding; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGMAP_METHOD_2_37B472C4731F0FFD_OFFSET UNITYSDK_OFFSET(0x198A0110)
#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x198A01D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVarBindingMap_TypeDefinitionIndex = 17965;

	class LittleGameLevelVarBindingMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameLevelVarBinding*>* Bindings; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_37B472C4731F0FFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVarBindingMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGMAP_METHOD_2_37B472C4731F0FFD_OFFSET))(a1, a2);
		}
	};
}
