#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5BE580A3D9E37E37;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5BE580A3D9E37E37___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B96AB0)
#define CLASS_1_5BE580A3D9E37E37___C__DISPLAYCLASS3_0__SHOWDATAINFODIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x16B98840)

inline static constexpr unsigned int Class_1_5BE580A3D9E37E37___c__DisplayClass3_0_TypeDefinitionIndex = 75020;

class Class_1_5BE580A3D9E37E37___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_5BE580A3D9E37E37* __4__this; // 0x10
	::System::UInt32 starNum; // 0x18
	::System::UInt32 starNumOnBattleBegin; // 0x1C
	::System::Boolean isAutoShownByChapterClear; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowDataInfoDialog_b__0(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_5BE580A3D9E37E37___C__DISPLAYCLASS3_0__SHOWDATAINFODIALOG_B__0_OFFSET))(this, a1);
	}
};
