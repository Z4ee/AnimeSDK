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

#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x94004F0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_0591D209F721C9B9_OFFSET UNITYSDK_OFFSET(0x9400A20)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x9400C00)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x9400560)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_1DA5C35D6019ACFB_OFFSET UNITYSDK_OFFSET(0x93FE660)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_25DD7463C131509A_OFFSET UNITYSDK_OFFSET(0x93FFD60)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_292851C8CABF98E9_OFFSET UNITYSDK_OFFSET(0x93FE740)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9400F10)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9401EC0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x9401D30)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x9401DA0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x9401E00)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x9401E60)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET UNITYSDK_OFFSET(0x9401F00)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9401CD0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x9401FC0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_50777E1B00315547_OFFSET UNITYSDK_OFFSET(0x9401060)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9402290)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x94022F0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x9402350)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x94023B0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x9402420)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x9402500)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9402230)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x93FF040)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7807D95AEFFB3EED_OFFSET UNITYSDK_OFFSET(0x9401750)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7DA3FDF704693A06_OFFSET UNITYSDK_OFFSET(0x93FF210)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_8CA9B687AA7C466A_OFFSET UNITYSDK_OFFSET(0x93FDED0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9401C40)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_BE5A0083341D8F96_OFFSET UNITYSDK_OFFSET(0x9401A40)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_E55199F4E71DB1AE_OFFSET UNITYSDK_OFFSET(0x93FEFC0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x9400980)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x9402490)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x9401F60)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x9402160)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR__COMPUTENEARFARFROMBOUNDS_G__EXTENTALONGDIR_2_0_OFFSET UNITYSDK_OFFSET(0x93FEF80)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9402130)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9402560)

namespace RPG::Client
{
	inline static constexpr unsigned int CoastinfoWaveBehavior_TypeDefinitionIndex = 58094;

	class CoastinfoWaveBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_ID_RefOriginWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x12AC0);
		}
		static ::System::Int32* StaticGet_ID_RefAxisN_WS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x12AC4);
		}
		static ::System::Int32* StaticGet_ID_TM_WrapMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x12AC8);
		}
		static ::System::Int32* StaticGet_ID_RefAxisT_WS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x12ACC);
		}
		static ::System::Int32* StaticGet_ID_RefUV00_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x12AD0);
		}
		static ::System::Int32* StaticGet_ID_RefSizeWS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x12AD4);
		}
		static ::System::Int32* StaticGet_ID_RefUV01_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x12AD8);
		}
		static ::System::Int32* StaticGet_ID_TM_Switch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveBehavior_TypeDefinitionIndex)->GetStaticField(0x12ADC);
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

		static ::System::Void Method_3_8CA9B687AA7C466A(::UnityEngine::Mesh* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_8CA9B687AA7C466A_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_3_1DA5C35D6019ACFB(::Il2CppArray<::UnityEngine::ComputeBuffer*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::ComputeBuffer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_1DA5C35D6019ACFB_OFFSET))(a1);
		}

		static ::System::Boolean Method_3_292851C8CABF98E9(::UnityEngine::Camera* a1, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* a2, ::System::Single& a3, ::System::Single& a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*, ::System::Single&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_292851C8CABF98E9_OFFSET))(a1, a2, a3, a4, a5);
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

		::System::Boolean Method_3_25DD7463C131509A(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_25DD7463C131509A_OFFSET))(this, a1);
		}

		::System::Void Method_3_19844080C13BA28F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_19844080C13BA28F_OFFSET))(this);
		}

		::System::Void Method_3_ED34DCC6F6541B09(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_ED34DCC6F6541B09_OFFSET))(this, a1);
		}

		::System::Void Method_3_0591D209F721C9B9(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_0591D209F721C9B9_OFFSET))(this, a1);
		}

		::System::Void Method_3_0C88AB06D46E777A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
		}

		::System::Void Method_3_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_3_50777E1B00315547(::UnityEngine::Camera* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_50777E1B00315547_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_7807D95AEFFB3EED(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_7807D95AEFFB3EED_OFFSET))(this, a1);
		}

		::System::Void Method_3_BE5A0083341D8F96(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_BE5A0083341D8F96_OFFSET))(this, a1);
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

		::System::Void Method_3_459C79521BFE514E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_459C79521BFE514E_OFFSET))(this, a1);
		}

		static ::System::Single _ComputeNearFarFromBounds_g__ExtentAlongDir_2_0(::UnityEngine::Vector3 fwd, ::UnityEngine::Vector3 ext)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR__COMPUTENEARFARFROMBOUNDS_G__EXTENTALONGDIR_2_0_OFFSET))(fwd, ext);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
