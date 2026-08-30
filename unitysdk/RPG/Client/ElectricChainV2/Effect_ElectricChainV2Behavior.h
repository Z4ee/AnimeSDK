#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Effect_ElectricChainV2Behavior_SubChainCollection.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Effect_ElectricChainV2Behavior_SubChainShapeType.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ElectricChainV2 { class Constraint; }
namespace RPG::Client::ElectricChainV2 { class Effect_ElectricChainV2; }
namespace RPG::Client::ElectricChainV2 { class Effect_ElectricChainV2Behavior_SubChain; }
namespace RPG::Client::ElectricChainV2 { class Line; }
namespace RPG::Client::ElectricChainV2 { class RandomUpdater; }
namespace RPG::Client::ElectricChainV2 { class Shape; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_GET__DISPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1AC5BFE0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x1AC58350)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x1AC58620)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_0EF9CFCE4680A1C2_OFFSET UNITYSDK_OFFSET(0x1AC59400)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x1AC57B10)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_3413FD214B6828DF_OFFSET UNITYSDK_OFFSET(0x1AC5B840)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1AC58580)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1AC580A0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1AC585C0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1AC57AA0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_51EAF8DD9B9FF37C_OFFSET UNITYSDK_OFFSET(0x1AC59920)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_55A68C4933FB4D7C_OFFSET UNITYSDK_OFFSET(0x1AC58680)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_5E8222CEAF419889_OFFSET UNITYSDK_OFFSET(0x1AC5B9C0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_8357650EFC6CB604_OFFSET UNITYSDK_OFFSET(0x1AC5C0C0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1AC583D0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_90A07D9BC1B409B9_1_OFFSET UNITYSDK_OFFSET(0x1AC58050)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_90A07D9BC1B409B9_OFFSET UNITYSDK_OFFSET(0x1AC575F0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x1AC58100)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_A59AEBEBC3E811AB_OFFSET UNITYSDK_OFFSET(0x1AC5B400)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x1AC57650)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x1AC59A40)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0x1AC59100)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_F2145E8FC54EF61C_OFFSET UNITYSDK_OFFSET(0x1AC5C2E0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_F5909B5FD6F94F42_OFFSET UNITYSDK_OFFSET(0x1AC5A6A0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5C970)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Effect_ElectricChainV2Behavior_TypeDefinitionIndex = 73473;

	class Effect_ElectricChainV2Behavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _MainChainPoints; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChain*>* _SubChains; // 0x40
		::System::Int32 _SubChainProportionSum; // 0x48
		::Il2CppArray<::System::Int32>* _SubChainsPointsNumberList; // 0x50
		::System::Int32 _TotalPointNumbers; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_AFC8215C57A0845A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_AFC8215C57A0845A_OFFSET))(this);
		}

		::System::Void Method_3_90A07D9BC1B409B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_90A07D9BC1B409B9_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_9765352E01408D38()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_9765352E01408D38_OFFSET))(this);
		}

		::System::Void Method_3_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_1283EC0876EAAACF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_1283EC0876EAAACF_OFFSET))(this);
		}

		::System::Void Method_3_55A68C4933FB4D7C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_55A68C4933FB4D7C_OFFSET))(this, a1);
		}

		::System::Void Method_3_D308836DB54415C3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_D308836DB54415C3_OFFSET))(this);
		}

		::System::Void Method_3_F5909B5FD6F94F42(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_F5909B5FD6F94F42_OFFSET))(this, a1);
		}

		::RPG::Client::ElectricChainV2::Shape* Method_3_A59AEBEBC3E811AB(::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChain*& a1, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType a2, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection a3)
		{
			return ((::RPG::Client::ElectricChainV2::Shape*(*)(::PVOID, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChain*&, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_A59AEBEBC3E811AB_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ElectricChainV2::Shape* Method_3_5E8222CEAF419889(::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChain*& a1, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection a2)
		{
			return ((::RPG::Client::ElectricChainV2::Shape*(*)(::PVOID, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChain*&, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_5E8222CEAF419889_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_90A07D9BC1B409B9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_90A07D9BC1B409B9_1_OFFSET))(this);
		}

		::System::Void Method_3_E2BCD1B56132A826()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_E2BCD1B56132A826_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_3_0EF9CFCE4680A1C2()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_0EF9CFCE4680A1C2_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_3413FD214B6828DF(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_3413FD214B6828DF_OFFSET))(this, a1);
		}

		::System::Single get__Displacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_GET__DISPLACEMENT_OFFSET))(this);
		}

		::RPG::Client::ElectricChainV2::Effect_ElectricChainV2* get__Owner()
		{
			return ((::RPG::Client::ElectricChainV2::Effect_ElectricChainV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::System::Void Method_3_51EAF8DD9B9FF37C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1, ::RPG::Client::ElectricChainV2::Line* a2, ::RPG::Client::ElectricChainV2::RandomUpdater* a3, ::RPG::Client::ElectricChainV2::Constraint* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::RPG::Client::ElectricChainV2::Line*, ::RPG::Client::ElectricChainV2::RandomUpdater*, ::RPG::Client::ElectricChainV2::Constraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_51EAF8DD9B9FF37C_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_8357650EFC6CB604(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1, ::RPG::Client::ElectricChainV2::Line* a2, ::RPG::Client::ElectricChainV2::RandomUpdater* a3, ::System::Single a4, ::System::Single a5, ::RPG::Client::ElectricChainV2::Constraint* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::RPG::Client::ElectricChainV2::Line*, ::RPG::Client::ElectricChainV2::RandomUpdater*, ::System::Single, ::System::Single, ::RPG::Client::ElectricChainV2::Constraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_8357650EFC6CB604_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_F2145E8FC54EF61C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1, ::RPG::Client::ElectricChainV2::Line* a2, ::RPG::Client::ElectricChainV2::RandomUpdater* a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Single a8, ::System::Single a9, ::RPG::Client::ElectricChainV2::Constraint* a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::RPG::Client::ElectricChainV2::Line*, ::RPG::Client::ElectricChainV2::RandomUpdater*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::RPG::Client::ElectricChainV2::Constraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_METHOD_3_F2145E8FC54EF61C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
	};
}
