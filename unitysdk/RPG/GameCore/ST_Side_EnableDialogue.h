#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE_METHOD_4_A2B80F9F16B7FDCD_OFFSET UNITYSDK_OFFSET(0x1DB41F40)
#define RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE_METHOD_4_A8AC9FFC61C5F58E_OFFSET UNITYSDK_OFFSET(0x1DB41F80)
#define RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_EnableDialogue_TypeDefinitionIndex = 19909;

	class ST_Side_EnableDialogue : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean Inverse; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A2B80F9F16B7FDCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_EnableDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_EnableDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE_METHOD_4_A2B80F9F16B7FDCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8AC9FFC61C5F58E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_EnableDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_EnableDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ENABLEDIALOGUE_METHOD_4_A8AC9FFC61C5F58E_OFFSET))(a1, a2);
		}
	};
}
