#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_929E979D9ED7139E;
class Class_1_B044F82CBFAD3D4B;
namespace RPG::Client { class IRI_DeferredDecalMonoPlugin; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_GET_DECALCOUNT_OFFSET UNITYSDK_OFFSET(0x19832C50)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_GET_ISDRAWMESHFALLBACK_OFFSET UNITYSDK_OFFSET(0x1982FE20)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x19830B40)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x19832770)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x19831640)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_0FFCA426B159D768_OFFSET UNITYSDK_OFFSET(0x19832800)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_13F0FEDB1C58AAEC_OFFSET UNITYSDK_OFFSET(0x19832D50)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x19830BC0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x19830CE0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x198302E0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x198301D0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_51F384253127E0E9_OFFSET UNITYSDK_OFFSET(0x19831F00)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x1982FE30)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_65F12295BB178ECD_OFFSET UNITYSDK_OFFSET(0x198328F0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_7244B72D2B0B3D10_OFFSET UNITYSDK_OFFSET(0x19832410)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_7B0812E4869FD813_OFFSET UNITYSDK_OFFSET(0x19831C20)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_8D6ED0B57406E5F2_OFFSET UNITYSDK_OFFSET(0x198320B0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_AD4B11D621C34D70_OFFSET UNITYSDK_OFFSET(0x19832DE0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_C3010636D81EBE2B_OFFSET UNITYSDK_OFFSET(0x19832A20)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_C3190F85BA6F80FA_OFFSET UNITYSDK_OFFSET(0x19832BC0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_CCEB9A03EDF0676E_OFFSET UNITYSDK_OFFSET(0x19833A10)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_D41A5580E18FF467_OFFSET UNITYSDK_OFFSET(0x19832CB0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_E4EC0FD7A76783C9_OFFSET UNITYSDK_OFFSET(0x19832110)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_E55199F4E71DB1AE_OFFSET UNITYSDK_OFFSET(0x19832390)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_E721CB93CA3C8A39_OFFSET UNITYSDK_OFFSET(0x19832AF0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x198306D0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_F8BB2A21B4CA90D4_OFFSET UNITYSDK_OFFSET(0x198310C0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x198326F0)
#define RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19833EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int IRI_DeferredDecalBehavior_TypeDefinitionIndex = 70865;

	class IRI_DeferredDecalBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		// static const ::System::String* DecalCullingComputePath; // 0x0
		// static const ::System::Single DecalSizePrecision; // 0x0
		// static const ::System::Single DecalTilingOffsetPrecision; // 0x0
		// static const ::System::Single MaxVolumeSize; // 0x0
		::Class_1_B044F82CBFAD3D4B* _ItemRenderer; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_929E979D9ED7139E*>* _DecalInstances; // 0x40
		::UnityEngine::Material* _InstancedMaterial; // 0x48
		::UnityEngine::Mesh* _DecalBoxMesh; // 0x50
		::RPG::Client::LiteInstancedItem::ItemPrototype* _DecalPrototype; // 0x58
		::System::Int32 _NextDecalID; // 0x60
		::System::Boolean _runtimeInitialized; // 0x64
		::System::Boolean _needRegisterBaked; // 0x65
		::System::Boolean _drawMeshFallback; // 0x66
		::System::Boolean _loggedInfraWaiting; // 0x67
		::System::Boolean _loggedMissingDecalMaterial; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDrawMeshFallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_GET_ISDRAWMESHFALLBACK_OFFSET))(this);
		}

		::System::Void Method_3_64501B5CB67A94C3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_64501B5CB67A94C3_OFFSET))(this);
		}

		::System::Void Method_3_F5B4708E7805566C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_F5B4708E7805566C_OFFSET))(this);
		}

		::System::Void Method_3_07280B24DFAC0CA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_07280B24DFAC0CA9_OFFSET))(this);
		}

		::System::Void Method_3_51F384253127E0E9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_51F384253127E0E9_OFFSET))(this);
		}

		::System::Void Method_3_8D6ED0B57406E5F2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_8D6ED0B57406E5F2_OFFSET))(this);
		}

		::System::Boolean Method_3_E4EC0FD7A76783C9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_E4EC0FD7A76783C9_OFFSET))(this);
		}

		::System::Void Method_3_3A599F23178B2776()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_3A599F23178B2776_OFFSET))(this);
		}

		::System::Boolean Method_3_F8BB2A21B4CA90D4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_F8BB2A21B4CA90D4_OFFSET))(this);
		}

		::System::Void Method_3_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_3_7244B72D2B0B3D10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_7244B72D2B0B3D10_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Int32 Method_3_7B0812E4869FD813(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_7B0812E4869FD813_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_0FFCA426B159D768(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_0FFCA426B159D768_OFFSET))(this, a1);
		}

		::System::Void Method_3_65F12295BB178ECD(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_65F12295BB178ECD_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_C3010636D81EBE2B(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_C3010636D81EBE2B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_E721CB93CA3C8A39(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_E721CB93CA3C8A39_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_C3190F85BA6F80FA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_C3190F85BA6F80FA_OFFSET))(this, a1);
		}

		::System::Int32 get_DecalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_GET_DECALCOUNT_OFFSET))(this);
		}

		static ::System::UInt32 Method_3_D41A5580E18FF467(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::UInt32(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_D41A5580E18FF467_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Method_3_13F0FEDB1C58AAEC(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_13F0FEDB1C58AAEC_OFFSET))(a1);
		}

		static ::UnityEngine::Matrix4x4 Method_3_AD4B11D621C34D70(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Int32 a5, ::System::Int32 a6, ::UnityEngine::Vector4 a7, ::System::Single a8, ::System::Single a9)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_AD4B11D621C34D70_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void Method_3_CCEB9A03EDF0676E(::UnityEngine::Transform* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_CCEB9A03EDF0676E_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_3_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_3_4857357D5C1BFCE8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_4857357D5C1BFCE8_OFFSET))(this);
		}

		static ::System::Void Method_3_E55199F4E71DB1AE(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_METHOD_3_E55199F4E71DB1AE_OFFSET))(a1);
		}

		::RPG::Client::IRI_DeferredDecalMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::IRI_DeferredDecalMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRI_DEFERREDDECALBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
