#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class AnimatorButton; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_A1F2D7D9DD4AE626_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x191B7EF0)
#define CLASS_2_A1F2D7D9DD4AE626_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x191B7E80)
#define CLASS_2_A1F2D7D9DD4AE626__CTOR_OFFSET UNITYSDK_OFFSET(0x191B8070)

inline static constexpr unsigned int Class_2_A1F2D7D9DD4AE626_TypeDefinitionIndex = 72845;

class Class_2_A1F2D7D9DD4AE626 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::Transform* KEIJDLAJACI; // 0x18
	::UnityEngine::Transform* DPNJJEGDNLH; // 0x20
	::UnityEngine::UI::Text* BBIONBFBBHJ; // 0x28
	::UnityEngine::Transform* KFJIBBNMHPO; // 0x30
	::RPG::Client::AnimatorButton* CGAFCBJFCNJ; // 0x38
	::UnityEngine::UI::Button* IIIAIOOCLJP; // 0x40
	::UnityEngine::UI::Button* KJHBCOIMIFE; // 0x48
	::UnityEngine::UI::Text* LKCIAKNBFHI; // 0x50
	::UnityEngine::UI::Text* FOEMNCNIHON; // 0x58
	::UnityEngine::UI::Button* IGBPFIMJACI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1F2D7D9DD4AE626__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1F2D7D9DD4AE626_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1F2D7D9DD4AE626_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
