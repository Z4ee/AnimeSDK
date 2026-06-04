#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLECONVERTBUFF_METHOD_3_6119D693D1F853EA_OFFSET UNITYSDK_OFFSET(0x198CDEF0)
#define RPG_GAMECORE_MARBLECONVERTBUFF_METHOD_3_E275F49EEBB31610_OFFSET UNITYSDK_OFFSET(0x198CDE10)
#define RPG_GAMECORE_MARBLECONVERTBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x198CDEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleConvertBuff_TypeDefinitionIndex = 15989;

	class MarbleConvertBuff : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::UInt32 SourceBuff; // 0x10
		::System::UInt32 TargetBuff; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECONVERTBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E275F49EEBB31610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleConvertBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleConvertBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECONVERTBUFF_METHOD_3_E275F49EEBB31610_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6119D693D1F853EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleConvertBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleConvertBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECONVERTBUFF_METHOD_3_6119D693D1F853EA_OFFSET))(a1, a2);
		}
	};
}
