#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF_METHOD_3_708B091D96508639_OFFSET UNITYSDK_OFFSET(0x1B2CC0E0)
#define RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF_METHOD_3_C6C4729E892CE4F1_OFFSET UNITYSDK_OFFSET(0x1B2CC080)
#define RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CC0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionRemoveBuff_TypeDefinitionIndex = 17602;

	class CakeRaceActionRemoveBuff : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>* RemoveBuffs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6C4729E892CE4F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionRemoveBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionRemoveBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF_METHOD_3_C6C4729E892CE4F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_708B091D96508639(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionRemoveBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionRemoveBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF_METHOD_3_708B091D96508639_OFFSET))(a1, a2);
		}
	};
}
