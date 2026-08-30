#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_79680B430C9CDCFF_METHOD_2_22B55F034EF0B3E2_1_OFFSET UNITYSDK_OFFSET(0x1AF4EA40)
#define CLASS_2_79680B430C9CDCFF_METHOD_2_22B55F034EF0B3E2_OFFSET UNITYSDK_OFFSET(0x1AF4E920)
#define CLASS_2_79680B430C9CDCFF_METHOD_2_B643C4C6095EC5F2_OFFSET UNITYSDK_OFFSET(0x1AF4EB60)
#define CLASS_2_79680B430C9CDCFF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AF4E8E0)
#define CLASS_2_79680B430C9CDCFF_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1AF4EC70)
#define CLASS_2_79680B430C9CDCFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4ED10)
#define CLASS_2_79680B430C9CDCFF__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AF4E850)

inline static constexpr unsigned int Class_2_79680B430C9CDCFF_TypeDefinitionIndex = 71348;

class Class_2_79680B430C9CDCFF : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DALEEBHJNKD; // 0x0
	// static const ::System::String* GEJMBLLCMFN; // 0x0
	// static const ::System::String* AHGEGMMHOCA; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::UnityEngine::UI::Image* NNPNDDIAGKJ; // 0x68
	::UnityEngine::UI::Image* IMBIAJFLJNB; // 0x70

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
};
