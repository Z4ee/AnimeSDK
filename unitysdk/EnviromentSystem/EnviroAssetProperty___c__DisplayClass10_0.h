#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviroAssetProperty; }
namespace EnviromentSystem { class EnviroAssetProperty_Class_1_A15A0E0681486F86; }
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x135807B0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY___C__DISPLAYCLASS10_0___ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x13580D00)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroAssetProperty___c__DisplayClass10_0_TypeDefinitionIndex = 46796;

	class EnviroAssetProperty___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onLoadFinish; // 0x10
		::EnviromentSystem::EnviroAssetProperty* __4__this; // 0x18
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroAssetProperty_Class_1_A15A0E0681486F86*>* temp; // 0x20
		::System::Action_2<::UnityEngine::Object*, ::System::Object*>* __9__0; // 0x28
		::System::Int32 asyncLoadTotalCount; // 0x30
		::System::Int32 asyncCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __AsyncLoad_b__0(::UnityEngine::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY___C__DISPLAYCLASS10_0___ASYNCLOAD_B__0_OFFSET))(this, a1, a2);
		}
	};
}
