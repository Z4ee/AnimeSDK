#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CoastinfoWaveMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x18001590)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_0591D209F721C9B9_OFFSET UNITYSDK_OFFSET(0x18001AE0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_1E6C2C5D2C5C829E_OFFSET UNITYSDK_OFFSET(0x18003120)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_388E0EC045332FEE_OFFSET UNITYSDK_OFFSET(0x17FFEF70)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18003020)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x18001FF0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x18002E90)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x18002F00)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x18002F60)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x18002FC0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET UNITYSDK_OFFSET(0x18003060)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18002E30)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4AE56C75781AC262_OFFSET UNITYSDK_OFFSET(0x18002860)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x18000130)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_653572A0392F0E0B_OFFSET UNITYSDK_OFFSET(0x18000DD0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_72E269DA5A2E94E3_OFFSET UNITYSDK_OFFSET(0x17FFF850)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7DA3FDF704693A06_OFFSET UNITYSDK_OFFSET(0x18000300)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x18001610)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_960F215D4CED65E9_OFFSET UNITYSDK_OFFSET(0x18002B70)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18002DA0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_9954C530518C5A5A_OFFSET UNITYSDK_OFFSET(0x18002150)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x18001CC0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_E55199F4E71DB1AE_OFFSET UNITYSDK_OFFSET(0x180000B0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x18001A40)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_EEF51B9FF10C9394_OFFSET UNITYSDK_OFFSET(0x17FFF700)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x180030C0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x180032E0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR__COMPUTENEARFARFROMBOUNDS_G__EXTENTALONGDIR_2_0_OFFSET UNITYSDK_OFFSET(0x18000070)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x180032B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoastinfoWaveBehavior_TypeDefinitionIndex = 67733;

	class CoastinfoWaveBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_ID_TM_Switch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x14400);
		}
		static ::System::Int32* StaticGet_ID_RefSizeWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x14404);
		}
		static ::System::Int32* StaticGet_ID_TM_WrapMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x14408);
		}
		static ::System::Int32* StaticGet_ID_RefUV01_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x1440C);
		}
		static ::System::Int32* StaticGet_ID_RefAxisT_WS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x14410);
		}
		static ::System::Int32* StaticGet_ID_RefAxisN_WS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x14414);
		}
		static ::System::Int32* StaticGet_ID_RefOriginWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x14418);
		}
		static ::System::Int32* StaticGet_ID_RefUV00_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x1441C);
		}
		// static const ::System::Int32 kMaxInstancesPerBatch = 0x3FF; // 0x0
		::System::Boolean _tmActive; // 0x38
		::UnityEngine::Mesh* _tmSharedMesh; // 0x40
		::UnityEngine::Material* _tmMat; // 0x48
		::UnityEngine::MaterialPropertyBlock* _tmMPB; // 0x50
		::System::Int32 _tmSourceMatId; // 0x58
		::Il2CppArray<::UnityEngine::Matrix4x4>* _tmMatrices; // 0x60
		::Il2CppArray<::UnityEngine::Matrix4x4>* _tmBatch1023; // 0x68
		::System::Int32 _tmInstanceCount; // 0x70
		::System::Boolean _tmDirtyMatrices; // 0x74
		::System::Int32 _tmFrameCounter; // 0x78
		::UnityEngine::Vector3 _tmLastSnapOriginWS; // 0x7C
		::System::Single _tmLastTileSize; // 0x88
		::System::Int32 _tmLastCx; // 0x8C
		::System::Int32 _tmLastCz; // 0x90
		::UnityEngine::Vector3 _refOriginWS; // 0x94
		::UnityEngine::Vector3 _refAxisT_WS; // 0xA0
		::UnityEngine::Vector3 _refAxisN_WS; // 0xAC
		::UnityEngine::Vector3 _refNormalWS; // 0xB8
		::UnityEngine::Quaternion _refRotWS; // 0xC4
		::System::Single _refWidthWorld; // 0xD4
		::System::Single _refDepthWorld; // 0xD8
		::UnityEngine::Vector4 _refCornerUV00_10; // 0xDC
		::UnityEngine::Vector4 _refCornerUV01_11; // 0xEC
		::System::Boolean _tmMeshIsUserProvided; // 0xFC
		::UnityEngine::Vector3 _tmTileScale; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_388E0EC045332FEE(::UnityEngine::Mesh* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_388E0EC045332FEE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_3_EEF51B9FF10C9394(::Il2CppArray<::UnityEngine::ComputeBuffer*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::ComputeBuffer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_EEF51B9FF10C9394_OFFSET))(a1);
		}

		static ::System::Boolean Method_3_72E269DA5A2E94E3(::UnityEngine::Camera* a1, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* a2, ::System::Single& a3, ::System::Single& a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*, ::System::Single&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_72E269DA5A2E94E3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Method_3_E55199F4E71DB1AE(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_E55199F4E71DB1AE_OFFSET))(a1);
		}

		::System::Void Method_3_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_60E1F7F58CCF739F_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* Method_3_7DA3FDF704693A06(::System::Int32 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7DA3FDF704693A06_OFFSET))(a1, a2);
		}

		::System::Boolean Method_3_653572A0392F0E0B(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_653572A0392F0E0B_OFFSET))(this, a1);
		}

		::System::Void Method_3_7EAA8879197594BA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7EAA8879197594BA_OFFSET))(this);
		}

		::System::Void Method_3_ED34DCC6F6541B09(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_ED34DCC6F6541B09_OFFSET))(this, a1);
		}

		::System::Void Method_3_0591D209F721C9B9(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_0591D209F721C9B9_OFFSET))(this, a1);
		}

		::System::Void Method_3_ABE7715DB28B2DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
		}

		::System::Void Method_3_3E06E2491B129B22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_3E06E2491B129B22_OFFSET))(this);
		}

		::System::Void Method_3_9954C530518C5A5A(::UnityEngine::Camera* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_9954C530518C5A5A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_4AE56C75781AC262(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4AE56C75781AC262_OFFSET))(this, a1);
		}

		::System::Void Method_3_960F215D4CED65E9(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_960F215D4CED65E9_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::CoastinfoWaveMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::CoastinfoWaveMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_1E6C2C5D2C5C829E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_1E6C2C5D2C5C829E_OFFSET))(this, a1);
		}

		static ::System::Single _ComputeNearFarFromBounds_g__ExtentAlongDir_2_0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR__COMPUTENEARFARFROMBOUNDS_G__EXTENTALONGDIR_2_0_OFFSET))(a1, a2);
		}
	};
}
