#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SimpRTXSystemBehavior_Struct_2_ACF31E46266D259A.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Rendering/SimpRTXSceneResources.h"

class Class_1_FFA6920A2334BA19;
namespace RPG::Client { class SimpRTXSystemMonoPlugin; }
namespace RPG::CustomRP { class SWRTPass; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE0CAB70)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0xE0CB9A0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_229BDADBFFF14936_OFFSET UNITYSDK_OFFSET(0xE0CB730)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0xE0CA560)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_2EF9F81A8989281A_OFFSET UNITYSDK_OFFSET(0xE0CC5D0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE0CB050)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_46821F7F37665DC0_OFFSET UNITYSDK_OFFSET(0xE0CB0B0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xE0CA610)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_6B30F8419ECBE988_OFFSET UNITYSDK_OFFSET(0xE0CC0A0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0xE0CB1E0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_7614DF84B99CDC02_OFFSET UNITYSDK_OFFSET(0xE0CBC30)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xE0CA960)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0xE0CABF0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xE0CB320)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0CC6E0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE0CC6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXSystemBehavior_TypeDefinitionIndex = 70949;

	class SimpRTXSystemBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_SimpRTXCylinderGroupCountID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpRTXSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x15750);
		}
		static ::System::Int32* StaticGet_SimpRTXQuadGroupCountID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpRTXSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x15754);
		}
		static ::System::Int32* StaticGet_SimpRTXDatasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpRTXSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x15758);
		}
		static ::System::Int32* StaticGet_SimpRTXAtlasDimensionID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpRTXSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x1575C);
		}
		static ::System::Int32* StaticGet_SimpRTXAtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpRTXSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x15760);
		}
		static ::System::Int32* StaticGet_SimpRTXIntensityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpRTXSystemBehavior_TypeDefinitionIndex)->GetStaticField(0x15764);
		}
		::RPG::Client::SimpRTXSystemBehavior_Struct_2_ACF31E46266D259A _lastKey; // 0x38
		::System::Boolean _forceResync; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_23C3681AC9E5D438()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_23C3681AC9E5D438_OFFSET))(this);
		}

		::System::Void Method_3_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_85377D41FEE05B66_OFFSET))(this);
		}

		::System::Void Method_3_8BC85DADEC2C3862()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_8BC85DADEC2C3862_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_46821F7F37665DC0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_46821F7F37665DC0_OFFSET))(this, a1);
		}

		::System::Void Method_3_50131F4CF014469C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_50131F4CF014469C_OFFSET))(this);
		}

		::System::Void Method_3_CEBFF096B4C9D46B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_CEBFF096B4C9D46B_OFFSET))(this);
		}

		::System::Void Method_3_70603E2AE56EBD6B(::Class_1_FFA6920A2334BA19* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFA6920A2334BA19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_70603E2AE56EBD6B_OFFSET))(this, a1);
		}

		::System::Void Method_3_229BDADBFFF14936(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_229BDADBFFF14936_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_1ABF1CBED7A4AF0A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_1ABF1CBED7A4AF0A_OFFSET))(this);
		}

		::RPG::Client::SimpRTXSystemBehavior_Struct_2_ACF31E46266D259A Method_3_7614DF84B99CDC02()
		{
			return ((::RPG::Client::SimpRTXSystemBehavior_Struct_2_ACF31E46266D259A(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_7614DF84B99CDC02_OFFSET))(this);
		}

		::System::Void Method_3_6B30F8419ECBE988(::RPG::Client::SimpRTXSystemBehavior_Struct_2_ACF31E46266D259A& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpRTXSystemBehavior_Struct_2_ACF31E46266D259A&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_6B30F8419ECBE988_OFFSET))(this, a1);
		}

		static ::System::Void Method_3_2EF9F81A8989281A(::UnityEngine::Rendering::SimpRTXSceneResources& a1, ::RPG::CustomRP::SWRTPass* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SimpRTXSceneResources&, ::RPG::CustomRP::SWRTPass*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_METHOD_3_2EF9F81A8989281A_OFFSET))(a1, a2);
		}

		::RPG::Client::SimpRTXSystemMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::SimpRTXSystemMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
