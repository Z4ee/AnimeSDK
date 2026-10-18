#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class Action; }

#define CLASS_1_D7003CCDED916330___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC28B0)
#define CLASS_1_D7003CCDED916330___C__DISPLAYCLASS67_0___LOADMOTIONCLIPASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xBFC4380)

inline static constexpr unsigned int Class_1_D7003CCDED916330___c__DisplayClass67_0_TypeDefinitionIndex = 57289;

class Class_1_D7003CCDED916330___c__DisplayClass67_0 : public ::System::Object
{
public:
	::System::Action* handler; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __LoadMotionClipAsync_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330___C__DISPLAYCLASS67_0___LOADMOTIONCLIPASYNC_B__0_OFFSET))(this, a1);
	}
};
