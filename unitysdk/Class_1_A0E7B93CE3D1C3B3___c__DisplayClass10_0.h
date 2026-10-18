#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1613;
class Class_0_16E4307DCC419505_1615;
namespace RPG::Client::B51Racing { class B51RacingInitCarPreviewPageViewModel; }

#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14513E90)
#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS10_0__SHOWINITCARPREVIEWPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14515D50)

inline static constexpr unsigned int Class_1_A0E7B93CE3D1C3B3___c__DisplayClass10_0_TypeDefinitionIndex = 81744;

class Class_1_A0E7B93CE3D1C3B3___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1613* sceneService; // 0x10
	::Class_0_16E4307DCC419505_1615* transient; // 0x18
	::RPG::Client::B51Racing::B51RacingInitCarPreviewPageViewModel* vm; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowInitCarPreviewPageAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS10_0__SHOWINITCARPREVIEWPAGEASYNC_B__0_OFFSET))(this);
	}
};
