#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERSTACKCOUNT_METHOD_3_CDB4C8FFB185E50A_OFFSET UNITYSDK_OFFSET(0x1C11C120)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERSTACKCOUNT_METHOD_3_DF5FA45AA09D9B61_OFFSET UNITYSDK_OFFSET(0x1C11C180)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERSTACKCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11C170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount_TypeDefinitionIndex = 15459;

	class DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::UInt32 ModifierID; // 0x14
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERSTACKCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDB4C8FFB185E50A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERSTACKCOUNT_METHOD_3_CDB4C8FFB185E50A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF5FA45AA09D9B61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_WRITECUSTOMVALUE_MODIFIERSTACKCOUNT_METHOD_3_DF5FA45AA09D9B61_OFFSET))(a1, a2);
		}
	};
}
