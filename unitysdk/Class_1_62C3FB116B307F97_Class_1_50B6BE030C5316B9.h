#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_62C3FB116B307F97_Enum_3_6A4AA45531569675.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageContext; }
namespace MoleMole { class UIComicPageController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_62C3FB116B307F97_CLASS_1_50B6BE030C5316B9_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD580EF0)
#define CLASS_1_62C3FB116B307F97_CLASS_1_50B6BE030C5316B9__CTOR_OFFSET UNITYSDK_OFFSET(0xD580E50)

inline static constexpr unsigned int Class_1_62C3FB116B307F97_Class_1_50B6BE030C5316B9_TypeDefinitionIndex = 48471;

class Class_1_62C3FB116B307F97_Class_1_50B6BE030C5316B9 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_10; // 0x10
	::System::Action* Field_1_9; // 0x30
	::System::Action* Field_1_7; // 0x38
	::System::String* Field_1_3; // 0x40
	::MoleMole::UIComicPageController* Field_1_6; // 0x48
	::MoleMole::UIComicPageContext* Field_1_5; // 0x50
	::System::Action* Field_1_8; // 0x58
	::Class_1_62C3FB116B307F97_Enum_3_6A4AA45531569675 Field_1_2; // 0x60
	::System::Boolean Field_1_4; // 0x61
	::System::Int32 Field_1_0; // 0x64
	::System::Int64 Field_1_1; // 0x68

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62C3FB116B307F97_CLASS_1_50B6BE030C5316B9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62C3FB116B307F97_CLASS_1_50B6BE030C5316B9_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
