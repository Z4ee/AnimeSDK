#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_79680B430C9CDCFF_METHOD_2_22B55F034EF0B3E2_1_OFFSET UNITYSDK_OFFSET(0x11A46620)
#define CLASS_2_79680B430C9CDCFF_METHOD_2_22B55F034EF0B3E2_OFFSET UNITYSDK_OFFSET(0x11A46560)
#define CLASS_2_79680B430C9CDCFF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11A46920)
#define CLASS_2_79680B430C9CDCFF_METHOD_2_B643C4C6095EC5F2_OFFSET UNITYSDK_OFFSET(0x11A466E0)
#define CLASS_2_79680B430C9CDCFF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11A46520)
#define CLASS_2_79680B430C9CDCFF_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x11A467F0)
#define CLASS_2_79680B430C9CDCFF__CTOR_OFFSET UNITYSDK_OFFSET(0x11A46890)
#define CLASS_2_79680B430C9CDCFF__ONBIND_OFFSET UNITYSDK_OFFSET(0x11A46490)
#define CLASS_2_79680B430C9CDCFF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11A468C0)

inline static constexpr unsigned int Class_2_79680B430C9CDCFF_TypeDefinitionIndex = 65799;

class Class_2_79680B430C9CDCFF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::UnityEngine::UI::Image* Field_2_2; // 0x68
	::UnityEngine::Animation* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79680B430C9CDCFF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79680B430C9CDCFF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79680B430C9CDCFF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_22B55F034EF0B3E2(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_79680B430C9CDCFF_METHOD_2_22B55F034EF0B3E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_22B55F034EF0B3E2_1(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_79680B430C9CDCFF_METHOD_2_22B55F034EF0B3E2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B643C4C6095EC5F2(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_79680B430C9CDCFF_METHOD_2_B643C4C6095EC5F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_79680B430C9CDCFF_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79680B430C9CDCFF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79680B430C9CDCFF_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
