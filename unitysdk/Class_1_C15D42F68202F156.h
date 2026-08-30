#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_0_16E4307DCC419505_354;
class Class_1_303D5A33D1401D59;
class Class_1_C15D42F68202F156_Class_1_14ADBF370EE33914;
class Class_1_C15D42F68202F156_Class_1_29346FA79C775DFC;
class Class_1_C15D42F68202F156_Class_1_B656A956F6340AD8;
class Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA;
class Class_1_D8BCA6FA1DEB13B9;
class PreviewTrackCamera;
class TrainPartyCameraBlend;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::GameCore { class TrainPartyAreaConfigRow; }
namespace RPG::GameCore { class TrainPartyBuildBlock; }
namespace RPG::GameCore { class TrainPartyBuildItemConfig; }
namespace RPG::GameCore { class TrainPartyBuildItemDynamicBindValue; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C15D42F68202F156_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1569A930)
#define CLASS_1_C15D42F68202F156_METHOD_1_0167890C9D885AFA_OFFSET UNITYSDK_OFFSET(0x156A28E0)
#define CLASS_1_C15D42F68202F156_METHOD_1_022185F96633E24B_OFFSET UNITYSDK_OFFSET(0x156A1E30)
#define CLASS_1_C15D42F68202F156_METHOD_1_05199D26900A4BE4_OFFSET UNITYSDK_OFFSET(0x1569A4C0)
#define CLASS_1_C15D42F68202F156_METHOD_1_063254900DBD65ED_OFFSET UNITYSDK_OFFSET(0x1569F670)
#define CLASS_1_C15D42F68202F156_METHOD_1_069CAC7F780FE47E_OFFSET UNITYSDK_OFFSET(0x156A2D30)
#define CLASS_1_C15D42F68202F156_METHOD_1_0761DBE95706A568_OFFSET UNITYSDK_OFFSET(0x156A0BF0)
#define CLASS_1_C15D42F68202F156_METHOD_1_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x1569B570)
#define CLASS_1_C15D42F68202F156_METHOD_1_0E66A936D3C7048B_OFFSET UNITYSDK_OFFSET(0x1569D3F0)
#define CLASS_1_C15D42F68202F156_METHOD_1_118D6DBDD8AA6DFC_OFFSET UNITYSDK_OFFSET(0x156A2330)
#define CLASS_1_C15D42F68202F156_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x15698BD0)
#define CLASS_1_C15D42F68202F156_METHOD_1_2B00AFDF545CAA0A_OFFSET UNITYSDK_OFFSET(0x156A20B0)
#define CLASS_1_C15D42F68202F156_METHOD_1_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x1569B160)
#define CLASS_1_C15D42F68202F156_METHOD_1_322305E263B00C3F_OFFSET UNITYSDK_OFFSET(0x15698E50)
#define CLASS_1_C15D42F68202F156_METHOD_1_3311DDE5F1FA2FEE_OFFSET UNITYSDK_OFFSET(0x15699180)
#define CLASS_1_C15D42F68202F156_METHOD_1_334241B7253414E6_OFFSET UNITYSDK_OFFSET(0x1569CE50)
#define CLASS_1_C15D42F68202F156_METHOD_1_37D8D2BDEDA565ED_OFFSET UNITYSDK_OFFSET(0x156A3050)
#define CLASS_1_C15D42F68202F156_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x15698840)
#define CLASS_1_C15D42F68202F156_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1569B100)
#define CLASS_1_C15D42F68202F156_METHOD_1_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x156A1F50)
#define CLASS_1_C15D42F68202F156_METHOD_1_4C74EE20B158ADDA_OFFSET UNITYSDK_OFFSET(0x156A25A0)
#define CLASS_1_C15D42F68202F156_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x1569C940)
#define CLASS_1_C15D42F68202F156_METHOD_1_53C19D54FAFB9954_OFFSET UNITYSDK_OFFSET(0x1569E260)
#define CLASS_1_C15D42F68202F156_METHOD_1_5894AB2A6629AA3E_OFFSET UNITYSDK_OFFSET(0x1569B800)
#define CLASS_1_C15D42F68202F156_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x1569BB90)
#define CLASS_1_C15D42F68202F156_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x1569B360)
#define CLASS_1_C15D42F68202F156_METHOD_1_617511D2527917DF_OFFSET UNITYSDK_OFFSET(0x1569E580)
#define CLASS_1_C15D42F68202F156_METHOD_1_6248BDDF38E2649E_OFFSET UNITYSDK_OFFSET(0x1569DA40)
#define CLASS_1_C15D42F68202F156_METHOD_1_672A0099EFAD8FCE_OFFSET UNITYSDK_OFFSET(0x156A1C80)
#define CLASS_1_C15D42F68202F156_METHOD_1_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x1569C4A0)
#define CLASS_1_C15D42F68202F156_METHOD_1_68B181859C0833E2_OFFSET UNITYSDK_OFFSET(0x1569FB90)
#define CLASS_1_C15D42F68202F156_METHOD_1_68B794CF5749CE0A_OFFSET UNITYSDK_OFFSET(0x1569EDB0)
#define CLASS_1_C15D42F68202F156_METHOD_1_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x1569CB20)
#define CLASS_1_C15D42F68202F156_METHOD_1_6DF8E2E2BDB874D5_OFFSET UNITYSDK_OFFSET(0x156A1590)
#define CLASS_1_C15D42F68202F156_METHOD_1_6E3DEABB1FC191BB_OFFSET UNITYSDK_OFFSET(0x156A1910)
#define CLASS_1_C15D42F68202F156_METHOD_1_70D027F9FDE62D5B_OFFSET UNITYSDK_OFFSET(0x156A02D0)
#define CLASS_1_C15D42F68202F156_METHOD_1_76475A8B2C3EBBDC_OFFSET UNITYSDK_OFFSET(0x1569E400)
#define CLASS_1_C15D42F68202F156_METHOD_1_76B30B29B7A1F934_OFFSET UNITYSDK_OFFSET(0x1569A030)
#define CLASS_1_C15D42F68202F156_METHOD_1_77A1FE99BE13DCF2_OFFSET UNITYSDK_OFFSET(0x1569EC50)
#define CLASS_1_C15D42F68202F156_METHOD_1_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x1569A750)
#define CLASS_1_C15D42F68202F156_METHOD_1_78B6B08902C9ECAF_OFFSET UNITYSDK_OFFSET(0x156A1990)
#define CLASS_1_C15D42F68202F156_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x1569B750)
#define CLASS_1_C15D42F68202F156_METHOD_1_8CF454EE2816B593_OFFSET UNITYSDK_OFFSET(0x1569DEE0)
#define CLASS_1_C15D42F68202F156_METHOD_1_8DBA79648044F9B1_OFFSET UNITYSDK_OFFSET(0x1569DD60)
#define CLASS_1_C15D42F68202F156_METHOD_1_8EA9BD2AF580952E_OFFSET UNITYSDK_OFFSET(0x1569C170)
#define CLASS_1_C15D42F68202F156_METHOD_1_901D5A7422339B1D_OFFSET UNITYSDK_OFFSET(0x156A2E70)
#define CLASS_1_C15D42F68202F156_METHOD_1_9AD043FF7578EFB2_OFFSET UNITYSDK_OFFSET(0x1569DAF0)
#define CLASS_1_C15D42F68202F156_METHOD_1_A65AC190C0D0526C_OFFSET UNITYSDK_OFFSET(0x156A17C0)
#define CLASS_1_C15D42F68202F156_METHOD_1_ABF4193FD147B04B_OFFSET UNITYSDK_OFFSET(0x156A0D70)
#define CLASS_1_C15D42F68202F156_METHOD_1_B2CDCB4B533E312F_OFFSET UNITYSDK_OFFSET(0x156A0800)
#define CLASS_1_C15D42F68202F156_METHOD_1_B893D07FC2EC0B9A_OFFSET UNITYSDK_OFFSET(0x156A0400)
#define CLASS_1_C15D42F68202F156_METHOD_1_BBE3594AEFD07330_OFFSET UNITYSDK_OFFSET(0x156A2650)
#define CLASS_1_C15D42F68202F156_METHOD_1_BED2D94D2E9B6565_OFFSET UNITYSDK_OFFSET(0x1569BC30)
#define CLASS_1_C15D42F68202F156_METHOD_1_CA9A97F28B72FA59_OFFSET UNITYSDK_OFFSET(0x1569C2E0)
#define CLASS_1_C15D42F68202F156_METHOD_1_D4550D9E4433D1A0_OFFSET UNITYSDK_OFFSET(0x15698EA0)
#define CLASS_1_C15D42F68202F156_METHOD_1_DCDB6405B94C126D_OFFSET UNITYSDK_OFFSET(0x1569F470)
#define CLASS_1_C15D42F68202F156_METHOD_1_DF74391877A986A7_OFFSET UNITYSDK_OFFSET(0x156A1AD0)
#define CLASS_1_C15D42F68202F156_METHOD_1_E6C4EA0B9040D600_OFFSET UNITYSDK_OFFSET(0x1569C720)
#define CLASS_1_C15D42F68202F156_METHOD_1_E6F6C42465373EB3_OFFSET UNITYSDK_OFFSET(0x156A2B20)
#define CLASS_1_C15D42F68202F156_METHOD_1_EFBC89BD06758F34_OFFSET UNITYSDK_OFFSET(0x156A31D0)
#define CLASS_1_C15D42F68202F156_METHOD_1_F741816BA3EE0A46_OFFSET UNITYSDK_OFFSET(0x156996D0)
#define CLASS_1_C15D42F68202F156_METHOD_1_FC637D7AB4A81D8C_OFFSET UNITYSDK_OFFSET(0x1569EE90)
#define CLASS_1_C15D42F68202F156__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A3410)
#define CLASS_1_C15D42F68202F156__CTOR_OFFSET UNITYSDK_OFFSET(0x15697F50)
#define CLASS_1_C15D42F68202F156__ENTERBUILDCAMERA_B__4_0_OFFSET UNITYSDK_OFFSET(0x156A3430)

inline static constexpr unsigned int Class_1_C15D42F68202F156_TypeDefinitionIndex = 60346;

class Class_1_C15D42F68202F156 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_IPJIEPKCNNI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C15D42F68202F156_TypeDefinitionIndex)->GetStaticField(0xACE0);
	}
	static ::System::Single* StaticGet_NNAADFMCDGO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C15D42F68202F156_TypeDefinitionIndex)->GetStaticField(0xACE4);
	}
	static ::System::Single* StaticGet_LDNHEHCDGJO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C15D42F68202F156_TypeDefinitionIndex)->GetStaticField(0xACE8);
	}
	::UnityEngine::GameObject* LBCOCNFEDHO; // 0x10
	::UnityEngine::Transform* DFIIFCOCDND; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_B656A956F6340AD8*>* MKEEEANELCE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*>* MFGEADHPLHO; // 0x28
	::RPG::Client::NotifyHandler* OCGJNBEOALF; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* FBIACKAEMAH; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TrainPartyBuildItemConfig*>* DNJLAHPLLFB; // 0x40
	::Cinemachine::CinemachineVirtualCameraBase* KCIFKMOMPOL; // 0x48
	::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* JGKMLBGAJNE; // 0x50
	::PreviewTrackCamera* DJDLPEJNIHP; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_14ADBF370EE33914*>* LHGDDJGKBJK; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C15D42F68202F156_Class_1_29346FA79C775DFC*>* DDDCHACNHBP; // 0x68
	::System::Collections::Generic::List_1<::System::UInt32>* AMKECEFGLLP; // 0x70
	::RPG::Client::Stage* PDAIGLPEMEE; // 0x78
	::System::Boolean GELEACGBGCM; // 0x80
	::System::Boolean NGFFKPIEMII; // 0x81
	::System::Boolean JEIBLOLOJCB; // 0x82
	::System::Boolean AAHECNLNBEJ; // 0x83
	::System::UInt32 MIEPNNEABLM; // 0x84
	::System::UInt32 GOHDPEEFCBL; // 0x88
	::System::UInt32 BJLMBJFPALF; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8EA9BD2AF580952E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_8EA9BD2AF580952E_OFFSET))(this, a1);
	}

	::System::Void Method_1_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_68805403250CC013_OFFSET))(this);
	}

	::System::Void Method_1_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_0E66A936D3C7048B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_0E66A936D3C7048B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_53C19D54FAFB9954(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_53C19D54FAFB9954_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_617511D2527917DF(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_617511D2527917DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_1_DCDB6405B94C126D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_DCDB6405B94C126D_OFFSET))(this, a1);
	}

	::System::Void Method_1_68B181859C0833E2(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_68B181859C0833E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_70D027F9FDE62D5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_70D027F9FDE62D5B_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_B2CDCB4B533E312F(::UnityEngine::GameObject* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_B2CDCB4B533E312F_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_0761DBE95706A568(::System::UInt32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_0761DBE95706A568_OFFSET))(this, a1);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_ABF4193FD147B04B(::System::Collections::Generic::HashSet_1<::Class_1_D8BCA6FA1DEB13B9*>* a1, ::System::Collections::Generic::HashSet_1<::Class_1_D8BCA6FA1DEB13B9*>* a2, ::System::Collections::Generic::HashSet_1<::Class_1_D8BCA6FA1DEB13B9*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_D8BCA6FA1DEB13B9*>*, ::System::Collections::Generic::HashSet_1<::Class_1_D8BCA6FA1DEB13B9*>*, ::System::Collections::Generic::HashSet_1<::Class_1_D8BCA6FA1DEB13B9*>*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_ABF4193FD147B04B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_1_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_BED2D94D2E9B6565(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_BED2D94D2E9B6565_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DF8E2E2BDB874D5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_6DF8E2E2BDB874D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CF454EE2816B593(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_8CF454EE2816B593_OFFSET))(this, a1);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::Cinemachine::CinemachineBrain* Method_1_A65AC190C0D0526C()
	{
		return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_A65AC190C0D0526C_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_1_6E3DEABB1FC191BB()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_6E3DEABB1FC191BB_OFFSET))(this);
	}

	::TrainPartyCameraBlend* Method_1_8DBA79648044F9B1()
	{
		return ((::TrainPartyCameraBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_8DBA79648044F9B1_OFFSET))(this);
	}

	::System::Void Method_1_9AD043FF7578EFB2(::Class_0_16E4307DCC419505_354* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_354*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_9AD043FF7578EFB2_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_6248BDDF38E2649E(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_6248BDDF38E2649E_OFFSET))(this, a1, a2, a3);
	}

	::PreviewTrackCamera* Method_1_76475A8B2C3EBBDC(::System::UInt32 a1)
	{
		return ((::PreviewTrackCamera*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_76475A8B2C3EBBDC_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_78B6B08902C9ECAF()
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_78B6B08902C9ECAF_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_022185F96633E24B(::System::UInt32 a1)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_022185F96633E24B_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_672A0099EFAD8FCE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_672A0099EFAD8FCE_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_DF74391877A986A7(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_DF74391877A986A7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_322305E263B00C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_322305E263B00C3F_OFFSET))(this);
	}

	::System::Void Method_1_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_1_D4550D9E4433D1A0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_D4550D9E4433D1A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_3311DDE5F1FA2FEE(::RPG::GameCore::TrainPartyBuildBlock* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildBlock*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_3311DDE5F1FA2FEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C74EE20B158ADDA(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_4C74EE20B158ADDA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CA9A97F28B72FA59(::RPG::GameCore::TrainPartyBuildStaticItem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildStaticItem*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_CA9A97F28B72FA59_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BBE3594AEFD07330(::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_BBE3594AEFD07330_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_0167890C9D885AFA(::System::Int16 a1, ::System::Int16 a2, ::RPG::GameCore::CompareType a3)
	{
		return ((::System::Boolean(*)(::System::Int16, ::System::Int16, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_0167890C9D885AFA_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_76B30B29B7A1F934(::System::UInt32 a1, ::Class_1_C15D42F68202F156_Class_1_B656A956F6340AD8* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_B656A956F6340AD8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_76B30B29B7A1F934_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_05199D26900A4BE4(::System::UInt32 a1, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_05199D26900A4BE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_77A1FE99BE13DCF2(::System::UInt32 a1, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_77A1FE99BE13DCF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5894AB2A6629AA3E(::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_5894AB2A6629AA3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_063254900DBD65ED(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_063254900DBD65ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F741816BA3EE0A46(::System::UInt32 a1, ::Class_1_C15D42F68202F156_Class_1_B656A956F6340AD8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_B656A956F6340AD8*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_F741816BA3EE0A46_OFFSET))(this, a1, a2);
	}

	::Class_1_303D5A33D1401D59* Method_1_118D6DBDD8AA6DFC(::System::String* a1)
	{
		return ((::Class_1_303D5A33D1401D59*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_118D6DBDD8AA6DFC_OFFSET))(this, a1);
	}

	::Class_1_303D5A33D1401D59* Method_1_E6F6C42465373EB3(::System::String* a1)
	{
		return ((::Class_1_303D5A33D1401D59*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_E6F6C42465373EB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_069CAC7F780FE47E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_069CAC7F780FE47E_OFFSET))(this, a1);
	}

	::System::Void Method_1_901D5A7422339B1D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_901D5A7422339B1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_37D8D2BDEDA565ED(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_37D8D2BDEDA565ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B00AFDF545CAA0A(::RPG::GameCore::TrainPartyAreaConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyAreaConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_2B00AFDF545CAA0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B893D07FC2EC0B9A(::System::UInt32 a1, ::Class_1_C15D42F68202F156_Class_1_B656A956F6340AD8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_B656A956F6340AD8*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_B893D07FC2EC0B9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_334241B7253414E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_334241B7253414E6_OFFSET))(this);
	}

	::System::Void Method_1_E6C4EA0B9040D600(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_E6C4EA0B9040D600_OFFSET))(this, a1);
	}

	::System::Void Method_1_EFBC89BD06758F34(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_EFBC89BD06758F34_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_68B794CF5749CE0A(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
	{
		return ((::System::UInt32(*)(::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_68B794CF5749CE0A_OFFSET))(a1);
	}

	::System::String* Method_1_FC637D7AB4A81D8C(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_FC637D7AB4A81D8C_OFFSET))(this, a1);
	}

	::System::Void _EnterBuildCamera_b__4_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156__ENTERBUILDCAMERA_B__4_0_OFFSET))(this, a1);
	}
};
