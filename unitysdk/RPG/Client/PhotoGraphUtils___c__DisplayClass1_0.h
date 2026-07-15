#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB2C10)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS1_0__GETCURFRAMETEXTUREWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x19EB2C20)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass1_0_TypeDefinitionIndex = 66343;

	class PhotoGraphUtils___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::UnityEngine::Texture* texture; // 0x10
		::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>* promise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetCurFrameTextureWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS1_0__GETCURFRAMETEXTUREWITHPROMISE_B__0_OFFSET))(this);
		}
	};
}
