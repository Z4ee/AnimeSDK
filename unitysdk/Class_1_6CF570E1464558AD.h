#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EFF6ABE3B36522D9_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6CF570E1464558AD_GET_BATTLEPOWER_OFFSET UNITYSDK_OFFSET(0x98ACED0)
#define CLASS_1_6CF570E1464558AD_GET_CAPTAINNUM_OFFSET UNITYSDK_OFFSET(0x98ACEE0)
#define CLASS_1_6CF570E1464558AD_GET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x98ACEF0)
#define CLASS_1_6CF570E1464558AD_GET_ISFINALACTFINISHED_OFFSET UNITYSDK_OFFSET(0x98ACF00)
#define CLASS_1_6CF570E1464558AD_GET_METCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x98ACF20)
#define CLASS_1_6CF570E1464558AD_GET_TOPPARTICIPATEDAVATARS_OFFSET UNITYSDK_OFFSET(0x98ACF30)
#define CLASS_1_6CF570E1464558AD_SET_ISFINALACTFINISHED_OFFSET UNITYSDK_OFFSET(0x98ACF10)
#define CLASS_1_6CF570E1464558AD__CTOR_OFFSET UNITYSDK_OFFSET(0x98ACF40)

inline static constexpr unsigned int Class_1_6CF570E1464558AD_TypeDefinitionIndex = 69196;

class Class_1_6CF570E1464558AD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* _TopParticipatedAvatars_k__BackingField; // 0x10
	::System::Boolean _IsFinalActFinished_k__BackingField; // 0x18
	::System::UInt32 _MetCharacterCount_k__BackingField; // 0x1C
	::System::UInt32 _CaptainNum_k__BackingField; // 0x20
	::System::UInt32 _ChapterIndex_k__BackingField; // 0x24
	::System::UInt64 _BattlePower_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_EFF6ABE3B36522D9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9_2*))((::PBYTE)hIl2Cpp + CLASS_1_6CF570E1464558AD__CTOR_OFFSET))(this, a1);
	}

	::System::UInt64 get_BattlePower()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF570E1464558AD_GET_BATTLEPOWER_OFFSET))(this);
	}

	::System::UInt32 get_CaptainNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF570E1464558AD_GET_CAPTAINNUM_OFFSET))(this);
	}

	::System::UInt32 get_ChapterIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF570E1464558AD_GET_CHAPTERINDEX_OFFSET))(this);
	}

	::System::Boolean get_IsFinalActFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF570E1464558AD_GET_ISFINALACTFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinalActFinished(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CF570E1464558AD_SET_ISFINALACTFINISHED_OFFSET))(this, value);
	}

	::System::UInt32 get_MetCharacterCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF570E1464558AD_GET_METCHARACTERCOUNT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_TopParticipatedAvatars()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF570E1464558AD_GET_TOPPARTICIPATEDAVATARS_OFFSET))(this);
	}
};
