#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CRPOpaqueTextureRequirePlugin_CaptureType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CRPOPAQUETEXTUREREQUIREPLUGIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A863890)
#define CRPOPAQUETEXTUREREQUIREPLUGIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A8635F0)
#define CRPOPAQUETEXTUREREQUIREPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A863A50)
#define CRPOPAQUETEXTUREREQUIREPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A863A40)

inline static constexpr unsigned int CRPOpaqueTextureRequirePlugin_TypeDefinitionIndex = 47784;

class CRPOpaqueTextureRequirePlugin : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_GCOHFDBEJMP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPOpaqueTextureRequirePlugin_TypeDefinitionIndex)->GetStaticField(0x15270);
	}
	::System::Boolean CaptureAfterOpaque; // 0x18
	::CRPOpaqueTextureRequirePlugin_CaptureType CapType; // 0x1C
	::System::Boolean FallBackToOpaque; // 0x20
	::System::Boolean MobileDisable; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPOPAQUETEXTUREREQUIREPLUGIN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRPOPAQUETEXTUREREQUIREPLUGIN__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPOPAQUETEXTUREREQUIREPLUGIN_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPOPAQUETEXTUREREQUIREPLUGIN_ONDISABLE_OFFSET))(this);
	}
};
