#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_B472E603E751534B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_7D6E04D3AC01AE3A_GET_ARTPREFABPATH_OFFSET UNITYSDK_OFFSET(0xFEB2150)
#define CLASS_1_7D6E04D3AC01AE3A_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xFEB2120)
#define CLASS_1_7D6E04D3AC01AE3A_GET_EFFECTCOLORLIST_OFFSET UNITYSDK_OFFSET(0xFEB21B0)
#define CLASS_1_7D6E04D3AC01AE3A_GET_ID_OFFSET UNITYSDK_OFFSET(0xFEB2130)
#define CLASS_1_7D6E04D3AC01AE3A_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xFEB21C0)
#define CLASS_1_7D6E04D3AC01AE3A_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xFEB2160)
#define CLASS_1_7D6E04D3AC01AE3A_GET_NAME_OFFSET UNITYSDK_OFFSET(0xFEB2180)
#define CLASS_1_7D6E04D3AC01AE3A_GET_PAINTCOLORLIST_OFFSET UNITYSDK_OFFSET(0xFEB21A0)
#define CLASS_1_7D6E04D3AC01AE3A_GET_POSELIST_OFFSET UNITYSDK_OFFSET(0xFEB2190)
#define CLASS_1_7D6E04D3AC01AE3A_GET_PREVIEWIMAGE_OFFSET UNITYSDK_OFFSET(0xFEB2170)
#define CLASS_1_7D6E04D3AC01AE3A_GET_UNLOCKCONDITIONID_OFFSET UNITYSDK_OFFSET(0xFEB2140)
#define CLASS_1_7D6E04D3AC01AE3A__CTOR_OFFSET UNITYSDK_OFFSET(0xFEB21D0)

inline static constexpr unsigned int Class_1_7D6E04D3AC01AE3A_TypeDefinitionIndex = 80119;

class Class_1_7D6E04D3AC01AE3A : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _EffectColorList_k__BackingField; // 0x10
	::System::String* _PreviewImage_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _PaintColorList_k__BackingField; // 0x20
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _PoseList_k__BackingField; // 0x28
	::System::String* _ArtPrefabPath_k__BackingField; // 0x30
	::RPG::Client::TextID _Name_k__BackingField; // 0x38
	::System::UInt32 _InstanceID_k__BackingField; // 0x48
	::System::Boolean _IsSpecial_k__BackingField; // 0x4C
	::System::UInt32 _UnlockConditionID_k__BackingField; // 0x50
	::System::Int32 _CacheKey_k__BackingField; // 0x54
	::System::UInt32 _ID_k__BackingField; // 0x58

	::System::Void _ctor(::Class_1_B472E603E751534B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B472E603E751534B*))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_CACHEKEY_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_ID_OFFSET))(this);
	}

	::System::UInt32 get_UnlockConditionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_UNLOCKCONDITIONID_OFFSET))(this);
	}

	::System::String* get_ArtPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_ARTPREFABPATH_OFFSET))(this);
	}

	::System::Boolean get_IsSpecial()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_ISSPECIAL_OFFSET))(this);
	}

	::System::String* get_PreviewImage()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_PREVIEWIMAGE_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_NAME_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_PoseList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_POSELIST_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_PaintColorList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_PAINTCOLORLIST_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_EffectColorList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_EFFECTCOLORLIST_OFFSET))(this);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6E04D3AC01AE3A_GET_INSTANCEID_OFFSET))(this);
	}
};
