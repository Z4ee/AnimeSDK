#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/TAUtils/QuaternionTransform.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Effect_InstanceArrayMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCDE9C40)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0xCDEA4F0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_1BC539462B1DCAB4_OFFSET UNITYSDK_OFFSET(0xCDE6430)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_20CE56A09BD72B81_OFFSET UNITYSDK_OFFSET(0xCDEA2B0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_36E2D900C7A8E114_OFFSET UNITYSDK_OFFSET(0xCDEAD30)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCDE8080)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCDE7F00)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xCDE7F60)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xCDE7FC0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0xCDE8020)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET UNITYSDK_OFFSET(0xCDE80C0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCDE63C0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0xCDE6480)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_A21BBA85D4EF7B41_OFFSET UNITYSDK_OFFSET(0xCDE8180)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_B9117CCE8BC70D96_OFFSET UNITYSDK_OFFSET(0xCDE9C80)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCDE8120)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCDEB2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_TypeDefinitionIndex = 70572;

	class Effect_InstanceArrayBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* _Matrices; // 0x38
		::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* _MPB; // 0x40
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Single>*>*>* _PropertiesFloat; // 0x48
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>* _PropertiesVector; // 0x50
		::System::Int32 _TotalAmount; // 0x58
		::Il2CppArray<::UnityEngine::Matrix4x4>* _RendererPackageTransforms; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_1BC539462B1DCAB4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_1BC539462B1DCAB4_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_A21BBA85D4EF7B41(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_A21BBA85D4EF7B41_OFFSET))(this, a1);
		}

		::System::Void Method_3_8B5E3014AFF7F8EA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_8B5E3014AFF7F8EA_OFFSET))(this);
		}

		::System::Void Method_3_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_19FB5FBEA9EA66CD_OFFSET))(this);
		}

		::System::Void Method_3_36E2D900C7A8E114()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_36E2D900C7A8E114_OFFSET))(this);
		}

		::RPG::Client::TAUtils::QuaternionTransform Method_3_B9117CCE8BC70D96(::System::Int32 a1)
		{
			return ((::RPG::Client::TAUtils::QuaternionTransform(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_B9117CCE8BC70D96_OFFSET))(this, a1);
		}

		::System::Single Method_3_20CE56A09BD72B81(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_METHOD_3_20CE56A09BD72B81_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_InstanceArrayMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_InstanceArrayMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
