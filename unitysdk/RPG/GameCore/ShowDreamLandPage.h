#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWDREAMLANDPAGE_GET_PUZZLEITEMRESULT_OFFSET UNITYSDK_OFFSET(0x1BE3CFA0)
#define RPG_GAMECORE_SHOWDREAMLANDPAGE_METHOD_3_4D2EA0A1DE8C9502_OFFSET UNITYSDK_OFFSET(0x1BE3CDC0)
#define RPG_GAMECORE_SHOWDREAMLANDPAGE_METHOD_3_83AF0C06493B76DF_OFFSET UNITYSDK_OFFSET(0x1BE3CD80)
#define RPG_GAMECORE_SHOWDREAMLANDPAGE_SET_PUZZLEITEMRESULT_OFFSET UNITYSDK_OFFSET(0x1BE3CFB0)
#define RPG_GAMECORE_SHOWDREAMLANDPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3CDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowDreamLandPage_TypeDefinitionIndex = 20341;

	class ShowDreamLandPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PuzzleID; // 0x18
		::System::Boolean IsShowRewardPage; // 0x1C
		::System::Boolean CloseAfterCheck; // 0x1D
		::System::UInt32 _PuzzleItemResult_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDREAMLANDPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83AF0C06493B76DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowDreamLandPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowDreamLandPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDREAMLANDPAGE_METHOD_3_83AF0C06493B76DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D2EA0A1DE8C9502(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowDreamLandPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowDreamLandPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDREAMLANDPAGE_METHOD_3_4D2EA0A1DE8C9502_OFFSET))(a1, a2);
		}

		::System::UInt32 get_PuzzleItemResult()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDREAMLANDPAGE_GET_PUZZLEITEMRESULT_OFFSET))(this);
		}

		::System::Void set_PuzzleItemResult(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDREAMLANDPAGE_SET_PUZZLEITEMRESULT_OFFSET))(this, a1);
		}
	};
}
