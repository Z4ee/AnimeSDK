#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginTransform_Struct_2_0A482C4B1193FF12.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA9A3500)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_METHOD_5_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xA9A3790)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_METHOD_5_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xA9A3560)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA9A3D60)
#define RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xA9A3E00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTransform_TypeDefinitionIndex = 64649;

	class MonoEffectPluginTransform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_5_1; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginTransform_Struct_2_0A482C4B1193FF12>* Field_5_2; // 0x28
		::System::Int32 Field_5_3; // 0x30
		::System::Int32 Field_5_4; // 0x34
		::System::Int32 Field_5_5; // 0x38
		::System::Int32 Field_5_6; // 0x3C
		::System::Int32 Field_5_7; // 0x40

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

		::System::Void Method_5_DAEB67F34AF80609()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_METHOD_5_DAEB67F34AF80609_OFFSET))(this);
		}

		::System::Void Method_5_00DEF5A164D9A9D5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRANSFORM_METHOD_5_00DEF5A164D9A9D5_OFFSET))(this);
		}
	};
}
