#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM_METHOD_4_20F5E34A9700904F_OFFSET UNITYSDK_OFFSET(0x1B7835C0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM_METHOD_4_BFBB43F91C763274_OFFSET UNITYSDK_OFFSET(0x1B783600)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7835F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterTimeOverPerform_TypeDefinitionIndex = 20723;

	class ST_Main_ElfWaiterTimeOverPerform : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_20F5E34A9700904F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM_METHOD_4_20F5E34A9700904F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFBB43F91C763274(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM_METHOD_4_BFBB43F91C763274_OFFSET))(a1, a2);
		}
	};
}
