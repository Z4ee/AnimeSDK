#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_UIFRAMECAPTURE___C__DISPLAYCLASS1_0__CAPTUREFRAMEWITHPOSTPROCESS_B__0_OFFSET UNITYSDK_OFFSET(0xCB4CC70)
#define RPG_CLIENT_UIFRAMECAPTURE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCB4CB90)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFrameCapture___c__DisplayClass1_0_TypeDefinitionIndex = 68232;

	class UIFrameCapture___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _CaptureFrameWithPostProcess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE___C__DISPLAYCLASS1_0__CAPTUREFRAMEWITHPOSTPROCESS_B__0_OFFSET))(this);
		}
	};
}
