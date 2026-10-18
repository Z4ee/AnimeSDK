#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_F75F1E7EF80C3D40_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB8B8B20)
#define CLASS_2_F75F1E7EF80C3D40_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB8B8AB0)
#define CLASS_2_F75F1E7EF80C3D40__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B8CB0)

inline static constexpr unsigned int Class_2_F75F1E7EF80C3D40_TypeDefinitionIndex = 72927;

class Class_2_F75F1E7EF80C3D40 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Button* ILJAPGEMAEC; // 0x18
	::UnityEngine::UI::Button* JEOIHFIIPDJ; // 0x20
	::UnityEngine::UI::Image* AJMIIBNLHNO; // 0x28
	::UnityEngine::Transform* LMHMPGIKBEB; // 0x30
	::UnityEngine::Transform* LMFBMGNCAPI; // 0x38
	::UnityEngine::UI::RawImage* GBODBEHAPCN; // 0x40
	::UnityEngine::UI::AspectRatioFitter* AFMOKBNCLKK; // 0x48
	::UnityEngine::UI::Text* OAOPDOFHOKO; // 0x50
	::UnityEngine::UI::AspectRatioFitter* BBGGMKDMDNG; // 0x58
	::UnityEngine::UI::Button* DEIHEPPPHGA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F75F1E7EF80C3D40__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F75F1E7EF80C3D40_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F75F1E7EF80C3D40_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
