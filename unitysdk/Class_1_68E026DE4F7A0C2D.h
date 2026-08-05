#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }

#define CLASS_1_68E026DE4F7A0C2D_METHOD_1_0BFB73B824E4EDA0_OFFSET UNITYSDK_OFFSET(0x11BBEDB0)
#define CLASS_1_68E026DE4F7A0C2D_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x11BBED10)
#define CLASS_1_68E026DE4F7A0C2D_METHOD_1_646082044D294F7B_OFFSET UNITYSDK_OFFSET(0x11BBED80)
#define CLASS_1_68E026DE4F7A0C2D_METHOD_1_7934DD1AFA77F36F_OFFSET UNITYSDK_OFFSET(0x11BBED20)
#define CLASS_1_68E026DE4F7A0C2D_METHOD_1_7DFEC0519D0C0CC0_OFFSET UNITYSDK_OFFSET(0x11BBEDA0)
#define CLASS_1_68E026DE4F7A0C2D_METHOD_1_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x11BBED30)
#define CLASS_1_68E026DE4F7A0C2D_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x11BBED90)
#define CLASS_1_68E026DE4F7A0C2D__CTOR_OFFSET UNITYSDK_OFFSET(0x11BBEC50)

inline static constexpr unsigned int Class_1_68E026DE4F7A0C2D_TypeDefinitionIndex = 49180;

class Class_1_68E026DE4F7A0C2D : public ::System::Object
{
public:
	::MoleMole::UIWindowController* Field_1_2; // 0x10
	::MoleMole::UIControllerContextBase* Field_1_0; // 0x18
	::System::UInt64 Field_1_1; // 0x20

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::MoleMole::UIControllerContextBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_68E026DE4F7A0C2D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_68E026DE4F7A0C2D_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::MoleMole::UIWindowController* Method_1_7934DD1AFA77F36F()
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68E026DE4F7A0C2D_METHOD_1_7934DD1AFA77F36F_OFFSET))(this);
	}

	::System::Void Method_1_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_68E026DE4F7A0C2D_METHOD_1_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_646082044D294F7B(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_68E026DE4F7A0C2D_METHOD_1_646082044D294F7B_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68E026DE4F7A0C2D_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_1_7DFEC0519D0C0CC0()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68E026DE4F7A0C2D_METHOD_1_7DFEC0519D0C0CC0_OFFSET))(this);
	}

	::System::Void Method_1_0BFB73B824E4EDA0(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_68E026DE4F7A0C2D_METHOD_1_0BFB73B824E4EDA0_OFFSET))(this, a1);
	}
};
