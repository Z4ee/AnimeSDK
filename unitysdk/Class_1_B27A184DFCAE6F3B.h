#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralSmallTipsWidgetController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_B27A184DFCAE6F3B_METHOD_1_C3D33394915E8979_OFFSET UNITYSDK_OFFSET(0x123ED690)
#define CLASS_1_B27A184DFCAE6F3B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123ED650)
#define CLASS_1_B27A184DFCAE6F3B_METHOD_1_F8C912A80EAEE869_OFFSET UNITYSDK_OFFSET(0x123ED6E0)
#define CLASS_1_B27A184DFCAE6F3B__CTOR_OFFSET UNITYSDK_OFFSET(0x123ED640)

inline static constexpr unsigned int Class_1_B27A184DFCAE6F3B_TypeDefinitionIndex = 59007;

class Class_1_B27A184DFCAE6F3B : public ::System::Object
{
public:
	::MoleMole::UIBaseController* Field_1_1; // 0x10
	::MoleMole::UIGeneralSmallTipsWidgetController* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B27A184DFCAE6F3B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B27A184DFCAE6F3B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C3D33394915E8979(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_B27A184DFCAE6F3B_METHOD_1_C3D33394915E8979_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8C912A80EAEE869(::System::String* a1, ::Foundation::AssetPath a2, ::UnityEngine::RectTransform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_B27A184DFCAE6F3B_METHOD_1_F8C912A80EAEE869_OFFSET))(this, a1, a2, a3);
	}
};
