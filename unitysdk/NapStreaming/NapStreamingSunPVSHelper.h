#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }

#define NAPSTREAMING_NAPSTREAMINGSUNPVSHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17CCA020)
#define NAPSTREAMING_NAPSTREAMINGSUNPVSHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CCA9A0)
#define NAPSTREAMING_NAPSTREAMINGSUNPVSHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCA840)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingSunPVSHelper_TypeDefinitionIndex = 50712;

	class NapStreamingSunPVSHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_EnableSunPVS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingSunPVSHelper_TypeDefinitionIndex)->GetStaticField(0x12ED0);
		}
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* renderers; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* pvsHandles; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* shadowOffOnMobiles; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSUNPVSHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSUNPVSHELPER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSUNPVSHELPER_ONENABLE_OFFSET))(this);
		}
	};
}
