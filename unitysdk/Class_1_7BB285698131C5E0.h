#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralSmallTipsWidgetController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_7BB285698131C5E0_METHOD_1_83E0D6D650A9A8FB_OFFSET UNITYSDK_OFFSET(0x1886AF90)
#define CLASS_1_7BB285698131C5E0_METHOD_1_C3D33394915E8979_OFFSET UNITYSDK_OFFSET(0x1886AF40)
#define CLASS_1_7BB285698131C5E0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1886AF00)
#define CLASS_1_7BB285698131C5E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1886AEF0)

inline static constexpr unsigned int Class_1_7BB285698131C5E0_TypeDefinitionIndex = 39577;

class Class_1_7BB285698131C5E0 : public ::System::Object
{
public:
	::MoleMole::UIGeneralSmallTipsWidgetController* Field_1_0; // 0x10
	::MoleMole::UIBaseController* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BB285698131C5E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BB285698131C5E0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C3D33394915E8979(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_7BB285698131C5E0_METHOD_1_C3D33394915E8979_OFFSET))(this, a1);
	}

	::System::Void Method_1_83E0D6D650A9A8FB(::System::String* a1, ::Foundation::AssetPath a2, ::UnityEngine::RectTransform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_7BB285698131C5E0_METHOD_1_83E0D6D650A9A8FB_OFFSET))(this, a1, a2, a3);
	}
};
