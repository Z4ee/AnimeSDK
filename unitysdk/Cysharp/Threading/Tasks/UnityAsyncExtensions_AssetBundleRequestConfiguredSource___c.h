#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA971E0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE___C__CREATE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1EA97290)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA97220)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EA97230)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_AssetBundleRequestConfiguredSource___c_TypeDefinitionIndex = 42879;

	class UnityAsyncExtensions_AssetBundleRequestConfiguredSource___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource___c**)Il2CppClass::FromTypeDefinitionIndex(UnityAsyncExtensions_AssetBundleRequestConfiguredSource___c_TypeDefinitionIndex)->GetStaticField(0x5A3B0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UnityAsyncExtensions_AssetBundleRequestConfiguredSource___c_TypeDefinitionIndex)->GetStaticField(0x5A3B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__14_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE___C__CREATE_B__14_0_OFFSET))(this, a1);
		}
	};
}
