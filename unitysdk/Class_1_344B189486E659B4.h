#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicAlbumItemData; }

#define CLASS_1_344B189486E659B4_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xE47BB90)
#define CLASS_1_344B189486E659B4_GET_RELATEDMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xE47BB70)
#define CLASS_1_344B189486E659B4_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xE47BB10)
#define CLASS_1_344B189486E659B4_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xE47BBA0)
#define CLASS_1_344B189486E659B4_SET_RELATEDMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xE47BB80)
#define CLASS_1_344B189486E659B4__CTOR_OFFSET UNITYSDK_OFFSET(0xE47BBB0)

inline static constexpr unsigned int Class_1_344B189486E659B4_TypeDefinitionIndex = 53983;

class Class_1_344B189486E659B4 : public ::System::Object
{
public:
	::RPG::Client::MusicAlbumItemData* _RelatedMusicItemData_k__BackingField; // 0x10
	::System::Boolean _IsPaused_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344B189486E659B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_344B189486E659B4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_344B189486E659B4*))((::PBYTE)hIl2Cpp + CLASS_1_344B189486E659B4_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::RPG::Client::MusicAlbumItemData* get_RelatedMusicItemData()
	{
		return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344B189486E659B4_GET_RELATEDMUSICITEMDATA_OFFSET))(this);
	}

	::System::Void set_RelatedMusicItemData(::RPG::Client::MusicAlbumItemData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + CLASS_1_344B189486E659B4_SET_RELATEDMUSICITEMDATA_OFFSET))(this, value);
	}

	::System::Boolean get_IsPaused()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344B189486E659B4_GET_ISPAUSED_OFFSET))(this);
	}

	::System::Void set_IsPaused(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_344B189486E659B4_SET_ISPAUSED_OFFSET))(this, value);
	}
};
