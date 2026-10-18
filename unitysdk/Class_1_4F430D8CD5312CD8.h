#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4F430D8CD5312CD8_GET_BASESTATMAP_OFFSET UNITYSDK_OFFSET(0x15E17FB0)
#define CLASS_1_4F430D8CD5312CD8_GET_CARID_OFFSET UNITYSDK_OFFSET(0x15E17F50)
#define CLASS_1_4F430D8CD5312CD8_GET_CARNUMBER_OFFSET UNITYSDK_OFFSET(0x15E17F70)
#define CLASS_1_4F430D8CD5312CD8_GET_INITHEXCOLOR_OFFSET UNITYSDK_OFFSET(0x15E17FF0)
#define CLASS_1_4F430D8CD5312CD8_GET_PARTIDLIST_OFFSET UNITYSDK_OFFSET(0x15E17F90)
#define CLASS_1_4F430D8CD5312CD8_GET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x15E17FD0)
#define CLASS_1_4F430D8CD5312CD8_SET_BASESTATMAP_OFFSET UNITYSDK_OFFSET(0x15E17FC0)
#define CLASS_1_4F430D8CD5312CD8_SET_CARID_OFFSET UNITYSDK_OFFSET(0x15E17F60)
#define CLASS_1_4F430D8CD5312CD8_SET_CARNUMBER_OFFSET UNITYSDK_OFFSET(0x15E17F80)
#define CLASS_1_4F430D8CD5312CD8_SET_INITHEXCOLOR_OFFSET UNITYSDK_OFFSET(0x15E18000)
#define CLASS_1_4F430D8CD5312CD8_SET_PARTIDLIST_OFFSET UNITYSDK_OFFSET(0x15E17FA0)
#define CLASS_1_4F430D8CD5312CD8_SET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x15E17FE0)
#define CLASS_1_4F430D8CD5312CD8__CTOR_OFFSET UNITYSDK_OFFSET(0x15E18010)

inline static constexpr unsigned int Class_1_4F430D8CD5312CD8_TypeDefinitionIndex = 81689;

class Class_1_4F430D8CD5312CD8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _SkillIDList_k__BackingField; // 0x10
	::System::String* _InitHexColor_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* _PartIDList_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _BaseStatMap_k__BackingField; // 0x28
	::System::UInt32 _CarID_k__BackingField; // 0x30
	::System::UInt32 _CarNumber_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_CarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_GET_CARID_OFFSET))(this);
	}

	::System::Void set_CarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_SET_CARID_OFFSET))(this, a1);
	}

	::System::UInt32 get_CarNumber()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_GET_CARNUMBER_OFFSET))(this);
	}

	::System::Void set_CarNumber(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_SET_CARNUMBER_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_PartIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_GET_PARTIDLIST_OFFSET))(this);
	}

	::System::Void set_PartIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_SET_PARTIDLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_BaseStatMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_GET_BASESTATMAP_OFFSET))(this);
	}

	::System::Void set_BaseStatMap(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_SET_BASESTATMAP_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_SkillIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_GET_SKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_SkillIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_SET_SKILLIDLIST_OFFSET))(this, a1);
	}

	::System::String* get_InitHexColor()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_GET_INITHEXCOLOR_OFFSET))(this);
	}

	::System::Void set_InitHexColor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4F430D8CD5312CD8_SET_INITHEXCOLOR_OFFSET))(this, a1);
	}
};
