#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicAlbumItemData; }

#define CLASS_1_FCFCC4B97F2390FE_GET_RELATEDMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xB958C10)
#define CLASS_1_FCFCC4B97F2390FE_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0xB958C30)
#define CLASS_1_FCFCC4B97F2390FE_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xB958BB0)
#define CLASS_1_FCFCC4B97F2390FE_SET_RELATEDMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xB958C20)
#define CLASS_1_FCFCC4B97F2390FE_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0xB958C40)
#define CLASS_1_FCFCC4B97F2390FE__CTOR_OFFSET UNITYSDK_OFFSET(0xB958C50)

inline static constexpr unsigned int Class_1_FCFCC4B97F2390FE_TypeDefinitionIndex = 66363;

class Class_1_FCFCC4B97F2390FE : public ::System::Object
{
public:
	::RPG::Client::MusicAlbumItemData* _RelatedMusicItemData_k__BackingField; // 0x10
	::System::UInt32 _Volume_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCFCC4B97F2390FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_FCFCC4B97F2390FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FCFCC4B97F2390FE*))((::PBYTE)hIl2Cpp + CLASS_1_FCFCC4B97F2390FE_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::RPG::Client::MusicAlbumItemData* get_RelatedMusicItemData()
	{
		return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCFCC4B97F2390FE_GET_RELATEDMUSICITEMDATA_OFFSET))(this);
	}

	::System::Void set_RelatedMusicItemData(::RPG::Client::MusicAlbumItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + CLASS_1_FCFCC4B97F2390FE_SET_RELATEDMUSICITEMDATA_OFFSET))(this, a1);
	}

	::System::UInt32 get_Volume()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCFCC4B97F2390FE_GET_VOLUME_OFFSET))(this);
	}

	::System::Void set_Volume(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FCFCC4B97F2390FE_SET_VOLUME_OFFSET))(this, a1);
	}
};
