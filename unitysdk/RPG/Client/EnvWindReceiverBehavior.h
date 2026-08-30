#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class EnvWindReceiverMonoPlugin; }
namespace RPG::Client { class EnvironmentSystem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_AABB_OFFSET UNITYSDK_OFFSET(0x1A183050)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_CONTAINWINDTRIGGERSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1830A0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x1A183030)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_WINDVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A183080)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1A1850A0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x1A185180)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x1A186480)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_0C6D78F7FB2736C2_OFFSET UNITYSDK_OFFSET(0x1A1868A0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x1A1853F0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_2C9E083DC9C549F9_OFFSET UNITYSDK_OFFSET(0x1A1858A0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_34AFF6E2F5322D1D_OFFSET UNITYSDK_OFFSET(0x1A185920)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1A186980)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A186910)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x1A185A80)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_ACD91D865E237BC7_OFFSET UNITYSDK_OFFSET(0x1A1857D0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_B06F516E4459C742_1_OFFSET UNITYSDK_OFFSET(0x1A185FE0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x1A183110)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_BF622B900A7F3625_OFFSET UNITYSDK_OFFSET(0x1A186400)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0x1A186210)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_E876C8B6D3B840A6_1_OFFSET UNITYSDK_OFFSET(0x1A1867E0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x1A183360)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x1A1830C0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_AABB_OFFSET UNITYSDK_OFFSET(0x1A183070)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_CONTAINWINDTRIGGERSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1830B0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x1A183040)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_WINDVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A183090)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1A185A20)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A186A10)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1869F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvWindReceiverBehavior_TypeDefinitionIndex = 71030;

	class EnvWindReceiverBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__AABBSizeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvWindReceiverBehavior_TypeDefinitionIndex)->GetStaticField(0x14790);
		}
		static ::System::Int32* StaticGet__WindVelocityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvWindReceiverBehavior_TypeDefinitionIndex)->GetStaticField(0x14794);
		}
		static ::System::Int32* StaticGet__FlagWaveAmplitudeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvWindReceiverBehavior_TypeDefinitionIndex)->GetStaticField(0x14798);
		}
		static ::System::Int32* StaticGet__FlagWaveFrequencyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvWindReceiverBehavior_TypeDefinitionIndex)->GetStaticField(0x1479C);
		}
		::UnityEngine::Vector4 _WindVelocity; // 0x38
		::UnityEngine::Vector3 _AABB; // 0x48
		::RPG::Client::EnvironmentSystem* _EnvSys; // 0x58
		::UnityEngine::Vector3 _GlobalWind; // 0x60
		::System::Int32 _ContainWindTriggersCount; // 0x6C
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* _InstancedMaterialsList; // 0x70
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* _SharedMaterialsList; // 0x78
		::System::Boolean _Selected; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_SELECTED_OFFSET))(this);
		}

		::System::Void set_Selected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_SELECTED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_AABB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_AABB_OFFSET))(this);
		}

		::System::Void set_AABB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_AABB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_WindVelocity()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_WINDVELOCITY_OFFSET))(this);
		}

		::System::Void set_WindVelocity(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_WINDVELOCITY_OFFSET))(this, a1);
		}

		::System::Int32 get_ContainWindTriggersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_CONTAINWINDTRIGGERSCOUNT_OFFSET))(this);
		}

		::System::Void set_ContainWindTriggersCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_CONTAINWINDTRIGGERSCOUNT_OFFSET))(this, a1);
		}

		::System::Void Method_3_ED79705457B92B5C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_ED79705457B92B5C_OFFSET))(this);
		}

		::System::Void Method_3_E876C8B6D3B840A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_E876C8B6D3B840A6_OFFSET))(this);
		}

		::System::Void Method_3_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_092CD57850778EFC_OFFSET))(this);
		}

		::System::Void Method_3_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_19FB5FBEA9EA66CD_OFFSET))(this);
		}

		::System::Boolean Method_3_ACD91D865E237BC7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_ACD91D865E237BC7_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_3_2C9E083DC9C549F9()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_2C9E083DC9C549F9_OFFSET))(this);
		}

		::UnityEngine::Renderer* Method_3_34AFF6E2F5322D1D()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_34AFF6E2F5322D1D_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_96189EDEF38976A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_96189EDEF38976A6_OFFSET))(this);
		}

		::System::Void Method_3_B06F516E4459C742()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_B06F516E4459C742_OFFSET))(this);
		}

		::System::Void Method_3_B06F516E4459C742_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_B06F516E4459C742_1_OFFSET))(this);
		}

		::System::Void Method_3_C796A0B42720FBD3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_C796A0B42720FBD3_OFFSET))(this);
		}

		::System::Void Method_3_BF622B900A7F3625()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_BF622B900A7F3625_OFFSET))(this);
		}

		::System::Void Method_3_0B7E3489D2C0938B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_0B7E3489D2C0938B_OFFSET))(this);
		}

		::System::Void Method_3_E876C8B6D3B840A6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_E876C8B6D3B840A6_1_OFFSET))(this);
		}

		::System::Void Method_3_0C6D78F7FB2736C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_0C6D78F7FB2736C2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::RPG::Client::EnvWindReceiverMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::EnvWindReceiverMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
