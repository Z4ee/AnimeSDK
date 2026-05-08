#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define ETHEREYEBREAKMATERIAL_CLOSEVISION_OFFSET UNITYSDK_OFFSET(0x11978AC0)
#define ETHEREYEBREAKMATERIAL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11978D10)
#define ETHEREYEBREAKMATERIAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11978660)
#define ETHEREYEBREAKMATERIAL_OPENVISION_OFFSET UNITYSDK_OFFSET(0x11979020)
#define ETHEREYEBREAKMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x11979320)
#define ETHEREYEBREAKMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x11979240)

inline static constexpr unsigned int EtherEyeBreakMaterial_TypeDefinitionIndex = 37942;

class EtherEyeBreakMaterial : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_pathMats()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeBreakMaterial_TypeDefinitionIndex)->GetStaticField(0x2AC40);
	}
	static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_matHandles()
	{
		return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeBreakMaterial_TypeDefinitionIndex)->GetStaticField(0x2AC48);
	}
	static ::System::Boolean* StaticGet_pathMatLoaded()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EtherEyeBreakMaterial_TypeDefinitionIndex)->GetStaticField(0x9890);
	}
	static ::System::Int32* StaticGet_pathCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EtherEyeBreakMaterial_TypeDefinitionIndex)->GetStaticField(0x9894);
	}
	// static const ::System::String* configPath; // 0x0
	::System::Int32 _AlphaSphereFadeOut; // 0x18
	::System::Int32 _AlphaSphereFadeCenter; // 0x1C
	::MoleMole::Config::ConfigEtherEyes* config; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* materialPaths; // 0x28
	::Il2CppArray<::UnityEngine::Material*>* mats; // 0x30
	::System::Single visibleRange; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEBREAKMATERIAL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ETHEREYEBREAKMATERIAL__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEBREAKMATERIAL_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEBREAKMATERIAL_ONDISABLE_OFFSET))(this);
	}

	::System::Void OpenVision()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEBREAKMATERIAL_OPENVISION_OFFSET))(this);
	}

	::System::Void CloseVision()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEBREAKMATERIAL_CLOSEVISION_OFFSET))(this);
	}
};
