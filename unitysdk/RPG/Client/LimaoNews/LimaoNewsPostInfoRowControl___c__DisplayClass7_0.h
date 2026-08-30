#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A2DD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C__DISPLAYCLASS7_0___PLAYANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1C4A2E60)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostInfoRowControl___c__DisplayClass7_0_TypeDefinitionIndex = 79072;

	class LimaoNewsPostInfoRowControl___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::String* animationName; // 0x10
		::RPG::Client::RPGAnimationEvent* animationEvent; // 0x18
		::RPG::Client::Promises::Promise* promise; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C__DISPLAYCLASS7_0___PLAYANIMATION_B__0_OFFSET))(this);
		}
	};
}
