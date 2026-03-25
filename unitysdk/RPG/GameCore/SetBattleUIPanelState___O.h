#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleUIPanelState___O_TypeDefinitionIndex = 21011;

	class SetBattleUIPanelState___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleUIPanelType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::BattleUIPanelType>**)Il2CppClass::FromTypeDefinitionIndex(SetBattleUIPanelState___O_TypeDefinitionIndex)->GetStaticField(0x86B0);
		}
	};
}
