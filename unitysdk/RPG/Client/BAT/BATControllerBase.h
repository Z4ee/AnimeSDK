#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAT/BATControllerBase_DrawMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client::BAT { class BATRenderer; }
namespace RPG::Client::TAUtils { class MaterialPropertiesCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_GPUDRIVEN_OFFSET UNITYSDK_OFFSET(0x9162AB0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x9162EC0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9163190)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_VALIDFORCULLING_OFFSET UNITYSDK_OFFSET(0x9163170)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_VALIDFORRENDERING_OFFSET UNITYSDK_OFFSET(0x9162F90)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_GET__PROTOTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x9162A50)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x9162E70)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x9162B70)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9162ED0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9162F10)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x9162F50)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9162B20)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0x91620E0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x91631A0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x91631C0)
#define RPG_CLIENT_BAT_BATCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x91631B0)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATControllerBase_TypeDefinitionIndex = 60379;

	class BATControllerBase : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__InstanceDataBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATControllerBase_TypeDefinitionIndex)->GetStaticField(0x11070);
		}
		static ::System::Int32* StaticGet__InstanceDataOffsetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BATControllerBase_TypeDefinitionIndex)->GetStaticField(0x11074);
		}
		::RPG::Client::BAT::BATControllerBase_DrawMode _Mode_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* Counts; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* MatrixLists; // 0x20
		::UnityEngine::ComputeBuffer* Buffer; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* MPBLists; // 0x30
		::RPG::Client::TAUtils::MaterialPropertiesCollection* GlobalMaterialProperties; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::MaterialPropertiesCollection*>* PerPrototypeMaterialProperties; // 0x40
		::UnityEngine::Bounds Bounds; // 0x48
		::System::Int32 _TotalCount_k__BackingField; // 0x60
		::System::Boolean _AutoSpawnDataAligned; // 0x64
		::RPG::Client::BAT::BATRenderer* Owner; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE__CCTOR_OFFSET))();
		}

		::System::Void Method_1_EB7282B6745B4611()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_EB7282B6745B4611_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_6916CB2AB9451DD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_6916CB2AB9451DD7_OFFSET))(this);
		}

		::System::Void Method_1_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_2566AD459572DFC3_OFFSET))(this);
		}

		::RPG::Client::BAT::BATControllerBase_DrawMode get_Mode()
		{
			return ((::RPG::Client::BAT::BATControllerBase_DrawMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_MODE_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Boolean get_ValidForRendering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_VALIDFORRENDERING_OFFSET))(this);
		}

		::System::Boolean get_ValidForCulling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_VALIDFORCULLING_OFFSET))(this);
		}

		::System::Boolean get_GPUDriven()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_GPUDRIVEN_OFFSET))(this);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_SET_TOTALCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get__PrototypeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLERBASE_GET__PROTOTYPECOUNT_OFFSET))(this);
		}
	};
}
