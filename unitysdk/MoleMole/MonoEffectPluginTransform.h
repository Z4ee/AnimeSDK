#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/MoleMole/MonoEffectPluginTransform_Enum_3_7E226242B470B21D.h"
#include "unitysdk/MoleMole/MonoEffectPluginTransform_SyncDataStruct.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffect; }
namespace MoleMole { class MonoEffectPluginTransform_Class_1_D15846DA6A50C310; }
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_DOUPDATETRANSFORMLIST_OFFSET UNITYSDK_OFFSET(0x191A6410)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x191A59E0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0x191A6E30)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x191A5A40)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x191A6D30)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_66F69CC0733DB5A5_OFFSET UNITYSDK_OFFSET(0x191A8210)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_F498D0CB8D6FA0A7_OFFSET UNITYSDK_OFFSET(0x191A6890)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_FB991C2E709AF7F8_OFFSET UNITYSDK_OFFSET(0x191A7640)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x191A6650)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x191A6460)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x191A6250)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x191A65B0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x191A69D0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_SET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x191A59F0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x191A6CA0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x191A6C50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginTransform_TypeDefinitionIndex = 59683;

	class MonoEffectPluginTransform : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		static ::System::Int32* StaticGet_Field_6_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0x10CE0);
		}
		static ::System::Int32* StaticGet_Field_6_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0x10CE4);
		}
		static ::System::Int32* StaticGet_Field_6_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0x10CE8);
		}
		static ::System::Int32* StaticGet_Field_6_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0x10CEC);
		}
		static ::System::Int32* StaticGet_Field_6_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0x10CF0);
		}
		// static const ::System::String* Field_6_10; // 0x0
		// static const ::System::String* Field_6_9; // 0x0
		// static const ::System::String* Field_6_8; // 0x0
		// static const ::System::String* Field_6_15; // 0x0
		// static const ::System::String* Field_6_14; // 0x0
		// static const ::System::String* Field_6_13; // 0x0
		// static const ::System::String* Field_6_12; // 0x0
		// static const ::System::String* Field_6_19; // 0x0
		// static const ::System::String* Field_6_18; // 0x0
		// static const ::System::String* Field_6_17; // 0x0
		// static const ::System::String* Field_6_16; // 0x0
		::MoleMole::MonoEffectPluginTransform_Enum_3_7E226242B470B21D strategy; // 0x18
		::System::Boolean isSceneEffect; // 0x1C
		::System::Boolean tickMuted; // 0x1D
		::Il2CppArray<::UnityEngine::Renderer*>* Field_6_7; // 0x20
		::MoleMole::MonoEffect* monoEffect; // 0x28
		::UnityEngine::Vector3 Field_6_5; // 0x30
		::UnityEngine::Quaternion Field_6_4; // 0x3C
		::UnityEngine::Vector3 Field_6_11; // 0x4C
		::Il2CppArray<::MoleMole::MonoEffectPluginTransform_Class_1_D15846DA6A50C310*>* Field_6_26; // 0x58
		::Il2CppArray<::MoleMole::MonoEffectPluginTransform_SyncDataStruct>* _syncDataStructs; // 0x60
		::UnityEngine::MaterialPropertyBlock* Field_6_24; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CCTOR_OFFSET))();
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_Renderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_GET_RENDERERS_OFFSET))(this);
		}

		::System::Void set_Renderers(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_SET_RENDERERS_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDESTROY_OFFSET))(this);
		}

		::System::Void DoUpdateTransformList(::UnityEngine::MaterialPropertyBlock*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_DOUPDATETRANSFORMLIST_OFFSET))(this, a1);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Method_6_2C95AFAD0256302F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_2C95AFAD0256302F_OFFSET))(this);
		}

		::System::Void Method_6_2839AE123F8ECAA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_2839AE123F8ECAA7_OFFSET))(this);
		}

		::System::Void Method_6_FB991C2E709AF7F8(::MoleMole::MonoEffectPluginTransform_Class_1_D15846DA6A50C310* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform_Class_1_D15846DA6A50C310*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_FB991C2E709AF7F8_OFFSET))(this, a1);
		}

		::System::Void Method_6_0E3D8071A5930FA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_0E3D8071A5930FA8_OFFSET))(this);
		}

		static ::System::Void Method_6_66F69CC0733DB5A5(::MoleMole::MonoEffectPluginTransform_SyncDataStruct& a1, ::UnityEngine::MaterialPropertyBlock*& a2)
		{
			return ((::System::Void(*)(::MoleMole::MonoEffectPluginTransform_SyncDataStruct&, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_66F69CC0733DB5A5_OFFSET))(a1, a2);
		}

		::System::Void Method_6_F498D0CB8D6FA0A7(::UnityEngine::MaterialPropertyBlock*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_METHOD_6_F498D0CB8D6FA0A7_OFFSET))(this, a1);
		}
	};
}
