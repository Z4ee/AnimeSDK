#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPRELOADPUZZLE_METHOD_3_0D96D846EE06921F_OFFSET UNITYSDK_OFFSET(0x19A94F80)
#define RPG_GAMECORE_PROPRELOADPUZZLE_METHOD_3_3CF63CB5C734CAAB_OFFSET UNITYSDK_OFFSET(0x19A94E70)
#define RPG_GAMECORE_PROPRELOADPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A94F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropReloadPuzzle_TypeDefinitionIndex = 19229;

	class PropReloadPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRELOADPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3CF63CB5C734CAAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropReloadPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropReloadPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRELOADPUZZLE_METHOD_3_3CF63CB5C734CAAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D96D846EE06921F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropReloadPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropReloadPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRELOADPUZZLE_METHOD_3_0D96D846EE06921F_OFFSET))(a1, a2);
		}
	};
}
