#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_62C3FB116B307F97_Enum_3_6A4AA45531569675.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageContext; }
namespace MoleMole { class UIComicPageController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_62C3FB116B307F97_CLASS_1_50B6BE030C5316B9_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x122B8AD0)
#define CLASS_1_62C3FB116B307F97_CLASS_1_50B6BE030C5316B9__CTOR_OFFSET UNITYSDK_OFFSET(0x122B8A30)

inline static constexpr unsigned int Class_1_62C3FB116B307F97_Class_1_50B6BE030C5316B9_TypeDefinitionIndex = 74164;

class Class_1_62C3FB116B307F97_Class_1_50B6BE030C5316B9 : public ::System::Object
{
public:
	::System::Action* Field_1_9; // 0x10
	::Foundation::AssetRequestHandle Field_1_8; // 0x18
	::System::Action* Field_1_10; // 0x38
	::MoleMole::UIComicPageController* Field_1_4; // 0x40
	::System::String* Field_1_7; // 0x48
	::System::Action* Field_1_11; // 0x50
	::MoleMole::UIComicPageContext* Field_1_5; // 0x58
	::System::Int64 Field_1_1; // 0x60
	::System::Int32 Field_1_2; // 0x68
	::System::Boolean Field_1_6; // 0x6C
	::Class_1_62C3FB116B307F97_Enum_3_6A4AA45531569675 Field_1_0; // 0x6D

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62C3FB116B307F97_CLASS_1_50B6BE030C5316B9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62C3FB116B307F97_CLASS_1_50B6BE030C5316B9_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
