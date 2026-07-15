#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CommonEffectMaterialBlock_MBItem; }
namespace RPG::Client { class MaterialPropertySerializeFieldTemplate1; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1800D440)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1800D5D0)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_APPLY_OFFSET UNITYSDK_OFFSET(0x1800D2F0)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_AWAKE_OFFSET UNITYSDK_OFFSET(0x1800D850)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1800DD00)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_LATETICK_OFFSET UNITYSDK_OFFSET(0x1800E1E0)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_METHOD_5_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x1800DD50)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_METHOD_5_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x1800DA10)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_METHOD_5_EAA98911AD2C0AE4_OFFSET UNITYSDK_OFFSET(0x1800E360)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_METHOD_5_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1800E610)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1800ED10)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1800EC80)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1800EBF0)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_RESET_OFFSET UNITYSDK_OFFSET(0x1800D9C0)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_RETRIVEORIGINDATA_OFFSET UNITYSDK_OFFSET(0x1800D1C0)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1800EDC0)
#define RPG_CLIENT_COMMONEFFECTMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1800EDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonEffectMaterialBlock_TypeDefinitionIndex = 67236;

	class CommonEffectMaterialBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_5_0()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(CommonEffectMaterialBlock_TypeDefinitionIndex)->GetStaticField(0x68BD0);
		}
		::System::Boolean KValueIsOn; // 0x18
		::System::String* PropertyName; // 0x20
		::System::Int32 PropertyID; // 0x28
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x2C
		::System::Single FloatData; // 0x30
		::UnityEngine::Color ColorData; // 0x34
		::UnityEngine::Vector4 VectorData; // 0x44
		::Il2CppArray<::RPG::Client::CommonEffectMaterialBlock_MBItem*>* MBTargets; // 0x58
		::Il2CppArray<::RPG::Client::MaterialPropertySerializeFieldTemplate1*>* MaterialPropertySerializeFields; // 0x60
		::UnityEngine::MaterialPropertyBlock* Field_5_10; // 0x68
		::System::Boolean Field_5_11; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK__CCTOR_OFFSET))();
		}

		::System::Object* RetriveOriginData(::UnityEngine::Material* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_RETRIVEORIGINDATA_OFFSET))(this, a1);
		}

		::System::Void Apply(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::UnityEngine::MaterialPropertyBlock* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_APPLY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Apply_1(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::RPG::Client::CommonEffectMatBlockType a4, ::UnityEngine::Vector4 a5, ::UnityEngine::MaterialPropertyBlock* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::RPG::Client::CommonEffectMatBlockType, ::UnityEngine::Vector4, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_APPLY_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Apply_2(::UnityEngine::Material* a1, ::System::String* a2, ::RPG::Client::CommonEffectMatBlockType a3, ::UnityEngine::Vector4 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::RPG::Client::CommonEffectMatBlockType, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_APPLY_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_DISPOSE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_LATETICK_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_B6BB704B01BCC35B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_METHOD_5_B6BB704B01BCC35B_OFFSET))(this);
		}

		::System::Void Method_5_EAD10B3E55E2C4C5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_METHOD_5_EAD10B3E55E2C4C5_OFFSET))(this);
		}

		::System::Void Method_5_07280B24DFAC0CA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_METHOD_5_07280B24DFAC0CA9_OFFSET))(this);
		}

		::System::Void Method_5_EAA98911AD2C0AE4(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONEFFECTMATERIALBLOCK_METHOD_5_EAA98911AD2C0AE4_OFFSET))(this, a1, a2, a3);
		}
	};
}
