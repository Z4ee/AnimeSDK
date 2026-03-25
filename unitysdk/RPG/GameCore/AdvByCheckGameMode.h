#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_67A33D487B9EA0D7_OFFSET UNITYSDK_OFFSET(0x16F24920)
#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_A8312EC6C9139A99_OFFSET UNITYSDK_OFFSET(0x16F24850)
#define RPG_GAMECORE_ADVBYCHECKGAMEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F248D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckGameMode_TypeDefinitionIndex = 19099;

	class AdvByCheckGameMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameModeType>* GameModes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A8312EC6C9139A99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckGameMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckGameMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_A8312EC6C9139A99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67A33D487B9EA0D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_67A33D487B9EA0D7_OFFSET))(a1, a2);
		}
	};
}
