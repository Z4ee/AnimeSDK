#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC394C80)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS2_0__GETBLURREDCURFRAMETEXTUREWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xC3A39D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass2_0_TypeDefinitionIndex = 64942;

	class PhotoGraphUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetBlurredCurFrameTextureWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS2_0__GETBLURREDCURFRAMETEXTUREWITHPROMISE_B__0_OFFSET))(this);
		}
	};
}
