#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Text; }

#define DEBUGINFORENDERINGDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xC721880)

inline static constexpr unsigned int DebugInfoRenderingDetail_TypeDefinitionIndex = 44327;

class DebugInfoRenderingDetail : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_showMode()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DebugInfoRenderingDetail_TypeDefinitionIndex)->GetStaticField(0x13EB0);
	}
	::System::Boolean Field_5_1; // 0x18
	::System::Boolean Field_5_2; // 0x19
	::System::Boolean Field_5_3; // 0x1A
	::System::Single Field_5_4; // 0x1C
	::System::Single Field_5_5; // 0x20
	::System::Single Field_5_6; // 0x24
	::UnityEngine::UI::Text* Field_5_7; // 0x28
	::UnityEngine::UI::Text* Field_5_8; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGINFORENDERINGDETAIL__CTOR_OFFSET))(this);
	}
};
