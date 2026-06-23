#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class OverlayOutlineCollectionConfig; }
namespace System { class Action; }

#define CLASS_1_81FB91D9D28075B2_CLASS_1_ED1DE41AE9B4A6FB_METHOD_1_F7461B878E70A783_OFFSET UNITYSDK_OFFSET(0x11D332D0)
#define CLASS_1_81FB91D9D28075B2_CLASS_1_ED1DE41AE9B4A6FB__CTOR_OFFSET UNITYSDK_OFFSET(0x11D332C0)

inline static constexpr unsigned int Class_1_81FB91D9D28075B2_Class_1_ED1DE41AE9B4A6FB_TypeDefinitionIndex = 44218;

class Class_1_81FB91D9D28075B2_Class_1_ED1DE41AE9B4A6FB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81FB91D9D28075B2_CLASS_1_ED1DE41AE9B4A6FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F7461B878E70A783(::MoleMole::Config::OverlayOutlineCollectionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::OverlayOutlineCollectionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_81FB91D9D28075B2_CLASS_1_ED1DE41AE9B4A6FB_METHOD_1_F7461B878E70A783_OFFSET))(this, a1);
	}
};
