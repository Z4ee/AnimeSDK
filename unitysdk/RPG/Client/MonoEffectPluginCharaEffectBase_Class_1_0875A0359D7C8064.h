#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterReplaceMaterialRender; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA965780)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_METHOD_1_6E3C7DCF81428CB3_OFFSET UNITYSDK_OFFSET(0xA9656A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_METHOD_1_718A8763ABFA070D_OFFSET UNITYSDK_OFFSET(0xA965530)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064__CTOR_OFFSET UNITYSDK_OFFSET(0xA960CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064_TypeDefinitionIndex = 64471;

	class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_6; // 0x18
		::UnityEngine::MaterialPropertyBlock* Field_1_2; // 0x20
		::RPG::GameCore::CharacterReplaceMaterialRender* Field_1_4; // 0x28
		::System::String* Field_1_5; // 0x30
		::Il2CppArray<::UnityEngine::Material*>* Field_1_1; // 0x38
		::System::UInt32 Field_1_3; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* Method_1_718A8763ABFA070D(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_METHOD_1_718A8763ABFA070D_OFFSET))(this, a1);
		}

		::UnityEngine::Material* Method_1_6E3C7DCF81428CB3(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_METHOD_1_6E3C7DCF81428CB3_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_DISPOSE_OFFSET))(this);
		}
	};
}
