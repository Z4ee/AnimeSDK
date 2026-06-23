#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInputFieldEx; }
namespace MoleMole { class UIInputFieldEx_Class_1_640B090AA43C41B2; }
namespace System { class String; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_525758733621A18D_METHOD_1_E014EDA66963472B_OFFSET UNITYSDK_OFFSET(0x14390C30)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_525758733621A18D__CTOR_OFFSET UNITYSDK_OFFSET(0x14390C20)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_525758733621A18D_TypeDefinitionIndex = 70745;

class Class_1_F29C68BEB3C6B152_Class_1_525758733621A18D : public ::System::Object
{
public:
	::MoleMole::UIInputFieldEx_Class_1_640B090AA43C41B2* Field_1_1; // 0x10
	::MoleMole::UIInputFieldEx* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_525758733621A18D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E014EDA66963472B(::MoleMole::UIInputFieldEx* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_525758733621A18D_METHOD_1_E014EDA66963472B_OFFSET))(this, a1, a2);
	}
};
