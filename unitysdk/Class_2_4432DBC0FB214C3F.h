#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"

namespace RPG::Client { class UIMeta; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_4432DBC0FB214C3F_METHOD_2_647D54B8817C986E_OFFSET UNITYSDK_OFFSET(0x137956A0)
#define CLASS_2_4432DBC0FB214C3F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x137955C0)
#define CLASS_2_4432DBC0FB214C3F_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x13795560)
#define CLASS_2_4432DBC0FB214C3F__CTOR_OFFSET UNITYSDK_OFFSET(0x137955B0)

inline static constexpr unsigned int Class_2_4432DBC0FB214C3F_TypeDefinitionIndex = 67999;

class Class_2_4432DBC0FB214C3F : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::UI::RawImage* Field_2_0; // 0x18
	::RPG::Client::UIValueChangeAnimation* Field_2_1; // 0x20
	::RPG::Client::UIMeta* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::RPG::Client::UIValueChangeAnimation* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4432DBC0FB214C3F__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4432DBC0FB214C3F_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4432DBC0FB214C3F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::UIValueChangeAnimation* Method_2_647D54B8817C986E(::RPG::GameCore::FrameCaptureFadeoutType a1)
	{
		return ((::RPG::Client::UIValueChangeAnimation*(*)(::PVOID, ::RPG::GameCore::FrameCaptureFadeoutType))((::PBYTE)hIl2Cpp + CLASS_2_4432DBC0FB214C3F_METHOD_2_647D54B8817C986E_OFFSET))(this, a1);
	}
};
