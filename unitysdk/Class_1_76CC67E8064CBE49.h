#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_82756AEBBC3FB8F2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_76CC67E8064CBE49_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xBD2F210)
#define CLASS_1_76CC67E8064CBE49_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBD2F260)
#define CLASS_1_76CC67E8064CBE49_GET_EFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xBD2F250)
#define CLASS_1_76CC67E8064CBE49_GET_ID_OFFSET UNITYSDK_OFFSET(0xBD2F220)
#define CLASS_1_76CC67E8064CBE49_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xBD2F240)
#define CLASS_1_76CC67E8064CBE49_GET_REQUIREDWORKSHOPLEVEL_OFFSET UNITYSDK_OFFSET(0xBD2F230)
#define CLASS_1_76CC67E8064CBE49_GET_ROUNDICON_OFFSET UNITYSDK_OFFSET(0xBD2F270)
#define CLASS_1_76CC67E8064CBE49__CTOR_OFFSET UNITYSDK_OFFSET(0xBD2F280)

inline static constexpr unsigned int Class_1_76CC67E8064CBE49_TypeDefinitionIndex = 80154;

class Class_1_76CC67E8064CBE49 : public ::System::Object
{
public:
	::System::String* _RoundIcon_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _EffectIDList_k__BackingField; // 0x18
	::System::Int32 _CacheKey_k__BackingField; // 0x20
	::System::UInt32 _RequiredWorkshopLevel_k__BackingField; // 0x24
	::System::UInt32 _Price_k__BackingField; // 0x28
	::System::UInt32 _ID_k__BackingField; // 0x2C
	::RPG::Client::TextID _Desc_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_82756AEBBC3FB8F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_82756AEBBC3FB8F2*))((::PBYTE)hIl2Cpp + CLASS_1_76CC67E8064CBE49__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76CC67E8064CBE49_GET_CACHEKEY_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76CC67E8064CBE49_GET_ID_OFFSET))(this);
	}

	::System::UInt32 get_RequiredWorkshopLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76CC67E8064CBE49_GET_REQUIREDWORKSHOPLEVEL_OFFSET))(this);
	}

	::System::UInt32 get_Price()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76CC67E8064CBE49_GET_PRICE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_EffectIDList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76CC67E8064CBE49_GET_EFFECTIDLIST_OFFSET))(this);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76CC67E8064CBE49_GET_DESC_OFFSET))(this);
	}

	::System::String* get_RoundIcon()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76CC67E8064CBE49_GET_ROUNDICON_OFFSET))(this);
	}
};
