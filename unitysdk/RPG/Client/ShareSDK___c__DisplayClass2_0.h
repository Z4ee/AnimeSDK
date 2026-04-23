#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ShareSource.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace RPG::Client { class ShareSDK; }

#define RPG_CLIENT_SHARESDK___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB167640)
#define RPG_CLIENT_SHARESDK___C__DISPLAYCLASS2_0__SHAREPHOTO_B__0_OFFSET UNITYSDK_OFFSET(0xB168770)

namespace RPG::Client
{
	inline static constexpr unsigned int ShareSDK___c__DisplayClass2_0_TypeDefinitionIndex = 56344;

	class ShareSDK___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::ShareSDK* __4__this; // 0x10
		::System::UInt32 shareChannelID; // 0x18
		::RPG::Client::ShareSource shareSource; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _SharePhoto_b__0(::Unity::Collections::NativeArray_1<::System::Byte> bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHARESDK___C__DISPLAYCLASS2_0__SHAREPHOTO_B__0_OFFSET))(this, bytes);
		}
	};
}
