#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_4B697906E3FFE90D_OFFSET UNITYSDK_OFFSET(0x170220D0)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_B5CB0B4D13D4509F_OFFSET UNITYSDK_OFFSET(0x17022000)
#define RPG_GAMECORE_BYFUNCUNLOCKCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x17022080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByFuncUnlockCheck_TypeDefinitionIndex = 19112;

	class ByFuncUnlockCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 UnlockID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B5CB0B4D13D4509F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByFuncUnlockCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByFuncUnlockCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_B5CB0B4D13D4509F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B697906E3FFE90D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYFUNCUNLOCKCHECK_METHOD_4_4B697906E3FFE90D_OFFSET))(a1, a2);
		}
	};
}
