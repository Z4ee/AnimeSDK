#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsPostData; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD4885D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS27_0___GETPOSTDATA_B__0_OFFSET UNITYSDK_OFFSET(0xD4885E0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostService___c__DisplayClass27_0_TypeDefinitionIndex = 79014;

	class LimaoNewsPostService___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::UInt32 postID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetPostData_b__0(::RPG::Client::LimaoNews::LimaoNewsPostData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS27_0___GETPOSTDATA_B__0_OFFSET))(this, a1);
		}
	};
}
