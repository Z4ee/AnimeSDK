#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterReplaceMaterialRender; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116A4450)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_METHOD_1_6E3C7DCF81428CB3_OFFSET UNITYSDK_OFFSET(0x116A4380)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064_METHOD_1_935E29CBA8DD617B_OFFSET UNITYSDK_OFFSET(0x116A41E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CLASS_1_0875A0359D7C8064__CTOR_OFFSET UNITYSDK_OFFSET(0x1169F7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064_TypeDefinitionIndex = 69907;

	class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* CNMOOKIKPLF; // 0x10
		::UnityEngine::MaterialPropertyBlock* OBINDGFMHIH; // 0x18
		::RPG::GameCore::CharacterReplaceMaterialRender* DLHNEGPIONF; // 0x20
		::System::String* OAKGHGGKALA; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* HPLODFKEHED; // 0x30
		::Il2CppArray<::System::UInt32>* DMNJNFCPGHM; // 0x38
		::System::UInt32 KJJNDIDPEMH; // 0x40

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
