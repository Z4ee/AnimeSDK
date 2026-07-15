#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterReplaceMaterialRender; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10D0C8D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_METHOD_1_6E3C7DCF81428CB3_OFFSET UNITYSDK_OFFSET(0x10D0C800)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_METHOD_1_935E29CBA8DD617B_OFFSET UNITYSDK_OFFSET(0x10D0C660)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064__CTOR_OFFSET UNITYSDK_OFFSET(0x10D07C20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064_TypeDefinitionIndex = 66805;

	class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
		::RPG::GameCore::CharacterReplaceMaterialRender* Field_1_1; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_2; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* Field_1_3; // 0x28
		::UnityEngine::MaterialPropertyBlock* Field_1_4; // 0x30
		::System::String* Field_1_5; // 0x38
		::System::UInt32 Field_1_6; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* Method_1_935E29CBA8DD617B(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_METHOD_1_935E29CBA8DD617B_OFFSET))(this, a1);
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
