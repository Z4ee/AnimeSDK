#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::CN { class PayManagerCX; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05D7F0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS9_0__GETUSERCOLLECTIONSID_B__0_OFFSET UNITYSDK_OFFSET(0x1A05D800)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerCX___c__DisplayClass9_0_TypeDefinitionIndex = 19707;

	class PayManagerCX___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::CN::PayManagerCX* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetUserCollectionsId_b__0(::System::Int32 result, ::System::String* newCollectionsId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS9_0__GETUSERCOLLECTIONSID_B__0_OFFSET))(this, result, newCollectionsId);
		}
	};
}
