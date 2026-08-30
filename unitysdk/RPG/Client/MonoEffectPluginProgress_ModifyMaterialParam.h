#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_METHOD_1_76D558CF9960A3B7_OFFSET UNITYSDK_OFFSET(0x1B392390)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_METHOD_1_92A998451FF61049_OFFSET UNITYSDK_OFFSET(0x1B392000)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_METHOD_1_B5405B133949DBE3_OFFSET UNITYSDK_OFFSET(0x1B3921D0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B392540)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B392530)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginProgress_ModifyMaterialParam_TypeDefinitionIndex = 70063;

	class MonoEffectPluginProgress_ModifyMaterialParam : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_s_PropertyIDCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginProgress_ModifyMaterialParam_TypeDefinitionIndex)->GetStaticField(0x125F0);
		}
		::UnityEngine::Renderer* TargetRender; // 0x10
		::System::Int32 TargetMaterialIndex; // 0x18
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x1C
		::System::String* PropertyName; // 0x20
		::System::Single FloatDataOnBegin; // 0x28
		::System::Single FloatDataOnEnd; // 0x2C
		::UnityEngine::Color ColorDataOnBegin; // 0x30
		::UnityEngine::Color ColorDataOnEnd; // 0x40
		::UnityEngine::Vector4 VectorDataOnBegin; // 0x50
		::UnityEngine::Vector4 VectorDataOnEnd; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM__CCTOR_OFFSET))();
		}

		::System::Void Method_1_92A998451FF61049(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_METHOD_1_92A998451FF61049_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_1_76D558CF9960A3B7(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_METHOD_1_76D558CF9960A3B7_OFFSET))(a1);
		}

		::System::Void Method_1_B5405B133949DBE3(::UnityEngine::Material* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_METHOD_1_B5405B133949DBE3_OFFSET))(this, a1, a2);
		}
	};
}
