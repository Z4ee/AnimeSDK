#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_51E717F5803619DA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_51E717F5803619DA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A3F820)
#define CLASS_1_51E717F5803619DA___C__DISPLAYCLASS3_0__SHOWDATAINFODIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x11A41210)

inline static constexpr unsigned int Class_1_51E717F5803619DA___c__DisplayClass3_0_TypeDefinitionIndex = 69379;

class Class_1_51E717F5803619DA___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_51E717F5803619DA* __4__this; // 0x10
	::System::UInt32 starNumOnBattleBegin; // 0x18
	::System::Boolean isAutoShownByChapterClear; // 0x1C
	::System::UInt32 starNum; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowDataInfoDialog_b__0(::System::Collections::Generic::List_1<::System::UInt32>* mostParticipatedAvatars)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_51E717F5803619DA___C__DISPLAYCLASS3_0__SHOWDATAINFODIALOG_B__0_OFFSET))(this, mostParticipatedAvatars);
	}
};
