#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleShopState; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xADD4440)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__DISPLAYCLASS27_0__PLAYPERFORMANCEANDGETCANCELHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0xADD4A40)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__DISPLAYCLASS27_0__PLAYPERFORMANCEANDGETCANCELHANDLER_G__CANCEL_1_OFFSET UNITYSDK_OFFSET(0xADD4C60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleShopState___c__DisplayClass27_0_TypeDefinitionIndex = 71884;

	class ChimeraDuelMainPuzzleShopState___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* onComplete; // 0x10
		::RPG::Client::Prop::ChimeraDuelMainPuzzleShopState* __4__this; // 0x18
		::System::Boolean isFinished; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayPerformanceAndGetCancelHandler_b__0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__DISPLAYCLASS27_0__PLAYPERFORMANCEANDGETCANCELHANDLER_B__0_OFFSET))(this, success);
		}

		::System::Void _PlayPerformanceAndGetCancelHandler_g__Cancel_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___C__DISPLAYCLASS27_0__PLAYPERFORMANCEANDGETCANCELHANDLER_G__CANCEL_1_OFFSET))(this);
		}
	};
}
