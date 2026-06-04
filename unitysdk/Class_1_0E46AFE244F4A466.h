#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0E46AFE244F4A466_GET_BATTLEPOWER_OFFSET UNITYSDK_OFFSET(0xAC99A10)
#define CLASS_1_0E46AFE244F4A466_GET_CAPTAINNUM_OFFSET UNITYSDK_OFFSET(0xAC99A20)
#define CLASS_1_0E46AFE244F4A466_GET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xAC99A30)
#define CLASS_1_0E46AFE244F4A466_GET_ISFINALACTFINISHED_OFFSET UNITYSDK_OFFSET(0xAC99A40)
#define CLASS_1_0E46AFE244F4A466_GET_METCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xAC99A60)
#define CLASS_1_0E46AFE244F4A466_GET_TOPPARTICIPATEDAVATARS_OFFSET UNITYSDK_OFFSET(0xAC99A70)
#define CLASS_1_0E46AFE244F4A466_SET_ISFINALACTFINISHED_OFFSET UNITYSDK_OFFSET(0xAC99A50)
#define CLASS_1_0E46AFE244F4A466__CTOR_OFFSET UNITYSDK_OFFSET(0xAC99A80)

inline static constexpr unsigned int Class_1_0E46AFE244F4A466_TypeDefinitionIndex = 70008;

class Class_1_0E46AFE244F4A466 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* _TopParticipatedAvatars_k__BackingField; // 0x10
	::System::UInt32 _MetCharacterCount_k__BackingField; // 0x18
	::System::Boolean _IsFinalActFinished_k__BackingField; // 0x1C
	::System::UInt64 _BattlePower_k__BackingField; // 0x20
	::System::UInt32 _CaptainNum_k__BackingField; // 0x28
	::System::UInt32 _ChapterIndex_k__BackingField; // 0x2C

	::System::Void _ctor(::Class_1_BB4B99DE4C2501EC_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_4*))((::PBYTE)hIl2Cpp + CLASS_1_0E46AFE244F4A466__CTOR_OFFSET))(this, a1);
	}

	::System::UInt64 get_BattlePower()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E46AFE244F4A466_GET_BATTLEPOWER_OFFSET))(this);
	}

	::System::UInt32 get_CaptainNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E46AFE244F4A466_GET_CAPTAINNUM_OFFSET))(this);
	}

	::System::UInt32 get_ChapterIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E46AFE244F4A466_GET_CHAPTERINDEX_OFFSET))(this);
	}

	::System::Boolean get_IsFinalActFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E46AFE244F4A466_GET_ISFINALACTFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinalActFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0E46AFE244F4A466_SET_ISFINALACTFINISHED_OFFSET))(this, a1);
	}

	::System::UInt32 get_MetCharacterCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E46AFE244F4A466_GET_METCHARACTERCOUNT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_TopParticipatedAvatars()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E46AFE244F4A466_GET_TOPPARTICIPATEDAVATARS_OFFSET))(this);
	}
};
