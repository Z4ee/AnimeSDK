#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_9788BF934C00DE98_2;
namespace System { class String; }

#define CLASS_1_29562E9B6816A208_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB19FD60)
#define CLASS_1_29562E9B6816A208_GET_HEADIMAGE_OFFSET UNITYSDK_OFFSET(0xB19FD90)
#define CLASS_1_29562E9B6816A208_GET_ID_OFFSET UNITYSDK_OFFSET(0xB19FD70)
#define CLASS_1_29562E9B6816A208_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB19FD80)
#define CLASS_1_29562E9B6816A208_GET_PORTRAITIMAGE_OFFSET UNITYSDK_OFFSET(0xB19FDA0)
#define CLASS_1_29562E9B6816A208__CTOR_OFFSET UNITYSDK_OFFSET(0xB19FDB0)

inline static constexpr unsigned int Class_1_29562E9B6816A208_TypeDefinitionIndex = 80082;

class Class_1_29562E9B6816A208 : public ::System::Object
{
public:
	::System::String* _HeadImage_k__BackingField; // 0x10
	::System::String* _PortraitImage_k__BackingField; // 0x18
	::System::UInt32 _ID_k__BackingField; // 0x20
	::System::Int32 _CacheKey_k__BackingField; // 0x24
	::RPG::Client::TextID _Name_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_9788BF934C00DE98_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9788BF934C00DE98_2*))((::PBYTE)hIl2Cpp + CLASS_1_29562E9B6816A208__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29562E9B6816A208_GET_CACHEKEY_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29562E9B6816A208_GET_ID_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29562E9B6816A208_GET_NAME_OFFSET))(this);
	}

	::System::String* get_HeadImage()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29562E9B6816A208_GET_HEADIMAGE_OFFSET))(this);
	}

	::System::String* get_PortraitImage()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29562E9B6816A208_GET_PORTRAITIMAGE_OFFSET))(this);
	}
};
