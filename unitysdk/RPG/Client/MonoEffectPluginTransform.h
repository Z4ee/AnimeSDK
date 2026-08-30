#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginTransform_Struct_2_0A482C4B1193FF12.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B398DB0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_METHOD_5_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x1B398E10)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_METHOD_5_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x1B399100)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3996F0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B399790)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTransform_TypeDefinitionIndex = 70092;

	class MonoEffectPluginTransform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean HDJOGGDMCIO; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* KBFFMAPGMOA; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginTransform_Struct_2_0A482C4B1193FF12>* CJCBDMPLDIE; // 0x28
		::System::Int32 GMBHEONGNFC; // 0x30
		::System::Int32 EDANMGLAIBN; // 0x34
		::System::Int32 ELACKDGPNBA; // 0x38
		::System::Int32 NKNHKBMHHKO; // 0x3C
		::System::Int32 NELMGHMDNNN; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_283DA224BE06DA9F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_METHOD_5_283DA224BE06DA9F_OFFSET))(this);
		}

		::System::Void Method_5_CD9F3CEFB366C27A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_METHOD_5_CD9F3CEFB366C27A_OFFSET))(this);
		}
	};
}
