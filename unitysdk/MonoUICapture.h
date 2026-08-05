#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define MONOUICAPTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14DB58C0)
#define MONOUICAPTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14DB5110)
#define MONOUICAPTURE_ONUICAPTURE_OFFSET UNITYSDK_OFFSET(0x14DB5160)
#define MONOUICAPTURE_UICAPTUREFINISHED_OFFSET UNITYSDK_OFFSET(0x14DB54D0)
#define MONOUICAPTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DB5B60)
#define MONOUICAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB5B00)

inline static constexpr unsigned int MonoUICapture_TypeDefinitionIndex = 89195;

class MonoUICapture : public ::UnityEngine::MonoBehaviour
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_properties()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUICapture_TypeDefinitionIndex)->GetStaticField(0x33560);
	}
	static ::System::UInt32* StaticGet__UICaptureIndex()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoUICapture_TypeDefinitionIndex)->GetStaticField(0xB4E0);
	}
	::System::Int32 downSample; // 0x18
	::System::Single blurRadius; // 0x1C
	::UnityEngine::RenderTexture* rt; // 0x20
	::System::Int32 propertyID; // 0x28
	::UnityEngine::UI::RawImage* image; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICAPTURE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUICAPTURE__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICAPTURE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnUICapture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICAPTURE_ONUICAPTURE_OFFSET))(this);
	}

	::System::Void UICaptureFinished()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICAPTURE_UICAPTUREFINISHED_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICAPTURE_ONDISABLE_OFFSET))(this);
	}
};
