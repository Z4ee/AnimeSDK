#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PauseTimelineReason.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/DirectorWrapMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_305;
class Class_1_36264895A759B0FF;
class Class_1_947F5BB3E2AFC4CE;
class Class_1_C507E2BBF53EBBD7;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_30AD95CB781F3EEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DBF570)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_012A9BE26CFC6D6A_OFFSET UNITYSDK_OFFSET(0x18DC2800)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_0608E01D4DD006F1_OFFSET UNITYSDK_OFFSET(0x18DC4580)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x18DC39D0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_15AB033E29A4A1CF_OFFSET UNITYSDK_OFFSET(0x18DC3FA0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_1B57B4188F040CF7_OFFSET UNITYSDK_OFFSET(0x18DC0CD0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_1E0F48819847541F_OFFSET UNITYSDK_OFFSET(0x18DC16E0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_1F49294A70542425_OFFSET UNITYSDK_OFFSET(0x18DC10E0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_2D533DD2C7E92FB8_OFFSET UNITYSDK_OFFSET(0x18DC3200)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_2DD7377814EAD872_OFFSET UNITYSDK_OFFSET(0x18DC3810)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x18DC3AD0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_445FC77641902825_OFFSET UNITYSDK_OFFSET(0x18DC47E0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_4E6B19707D2382D6_OFFSET UNITYSDK_OFFSET(0x18DC54A0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_51D373B875D1FB5E_OFFSET UNITYSDK_OFFSET(0x18DC2E50)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_5315A393DA4730D0_OFFSET UNITYSDK_OFFSET(0x18DC52E0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_54D3EF6860D190AA_OFFSET UNITYSDK_OFFSET(0x18DC35C0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_5DD3A7E20AB1E57B_OFFSET UNITYSDK_OFFSET(0x18DC3DD0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_658C3CB6C920AD04_OFFSET UNITYSDK_OFFSET(0x18DC0780)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_6660D2F420B92AA4_OFFSET UNITYSDK_OFFSET(0x18DC5100)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_7186574C1FC667B8_OFFSET UNITYSDK_OFFSET(0x18DC0120)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_79734A163132F053_OFFSET UNITYSDK_OFFSET(0x18DC36F0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_7DC8A93C0B388CEA_OFFSET UNITYSDK_OFFSET(0x18DC3B80)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_8852CECD64073302_OFFSET UNITYSDK_OFFSET(0x18DC1240)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_900E7B2FE830ADC8_OFFSET UNITYSDK_OFFSET(0x18DC25C0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_9A940A7EE5FAFF6F_OFFSET UNITYSDK_OFFSET(0x18DC3460)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_A08F661813A1C1B3_OFFSET UNITYSDK_OFFSET(0x18DC29E0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_A4A8A95D4C2E41FB_OFFSET UNITYSDK_OFFSET(0x18DC3000)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x18DBF620)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_AD1B1B9BAE25A6F2_OFFSET UNITYSDK_OFFSET(0x18DC3330)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_B3C683C683593859_OFFSET UNITYSDK_OFFSET(0x18DC1420)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x18DC3120)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_B8D81EBF0F54E225_OFFSET UNITYSDK_OFFSET(0x18DC3C50)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_B9F89DA9D5B93E0D_OFFSET UNITYSDK_OFFSET(0x18DC49B0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_BD5F1AF5661A4E98_OFFSET UNITYSDK_OFFSET(0x18DBF850)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_C79EA86ECF4DA290_OFFSET UNITYSDK_OFFSET(0x18DC4610)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_D7BE34D4D855376E_OFFSET UNITYSDK_OFFSET(0x18DC2CA0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x18DBFAB0)
#define CLASS_1_30AD95CB781F3EEE_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x18DC3930)
#define CLASS_1_30AD95CB781F3EEE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBF250)

inline static constexpr unsigned int Class_1_30AD95CB781F3EEE_TypeDefinitionIndex = 48933;

class Class_1_30AD95CB781F3EEE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_CDOMHDCAPPA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30AD95CB781F3EEE_TypeDefinitionIndex)->GetStaticField(0x13DB0);
	}
	// static const ::System::String* CANEDCFBJOP; // 0x0
	// static const ::System::Int32 LMIBNMOPABM = 0x2; // 0x0
	::System::Collections::Generic::List_1<::Class_1_36264895A759B0FF*>* MKDJOLKJJON; // 0x10
	::UnityEngine::GameObject* PMMJECFFCCI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C507E2BBF53EBBD7*>* HLOBPOBKMPP; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Playables::PlayableDirector*, ::Class_1_36264895A759B0FF*>* PIJENJPJFLL; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>* PGKAIGKOGEI; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* DFNAOFNEBHC; // 0x38
	::UnityEngine::Transform* GHHHJHPDPCE; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* NMKHAMGKFKH; // 0x48
	::System::Int32 JMCEABGIEGA; // 0x50

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BD5F1AF5661A4E98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_BD5F1AF5661A4E98_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::UnityEngine::Playables::PlayableDirector* Method_1_658C3CB6C920AD04(::System::String* a1, ::System::String* a2, ::UnityEngine::Playables::PlayableAsset* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_658C3CB6C920AD04_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_36264895A759B0FF* Method_1_1B57B4188F040CF7(::System::String* a1, ::UnityEngine::Playables::PlayableAsset* a2)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::String*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_1B57B4188F040CF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1F49294A70542425(::Class_1_36264895A759B0FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_1F49294A70542425_OFFSET))(this, a1);
	}

	::System::Void Method_1_8852CECD64073302(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Events::UnityAction* a2, ::System::Double a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Events::UnityAction*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_8852CECD64073302_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_B3C683C683593859(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Playables::PlayableAsset* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Action_2<::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*>* a7, ::UnityEngine::Events::UnityAction* a8, ::System::Double a9, ::UnityEngine::Playables::DirectorWrapMode a10)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_2<::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*>*, ::UnityEngine::Events::UnityAction*, ::System::Double, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_B3C683C683593859_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Int32 Method_1_1E0F48819847541F(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::GameObject* a7, ::UnityEngine::Events::UnityAction* a8, ::System::Single a9, ::System::Single a10)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*, ::UnityEngine::Events::UnityAction*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_1E0F48819847541F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::Class_1_36264895A759B0FF* Method_1_012A9BE26CFC6D6A(::System::Boolean a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_012A9BE26CFC6D6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7BE34D4D855376E(::System::Collections::Generic::List_1<::Class_1_36264895A759B0FF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_36264895A759B0FF*>*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_D7BE34D4D855376E_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_A08F661813A1C1B3(::UnityEngine::Playables::PlayableGraph a1, ::System::Type* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_A08F661813A1C1B3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_51D373B875D1FB5E(::UnityEngine::Playables::Playable a1, ::System::Type* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Playables::Playable, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_51D373B875D1FB5E_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_A4A8A95D4C2E41FB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_A4A8A95D4C2E41FB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_B556EADFE34BD60F_OFFSET))(this);
	}

	::System::Boolean Method_1_2D533DD2C7E92FB8(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_2D533DD2C7E92FB8_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_AD1B1B9BAE25A6F2(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_AD1B1B9BAE25A6F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A940A7EE5FAFF6F(::System::Int32 a1, ::RPGTools::Timeline::PauseTimelineReason a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::Timeline::PauseTimelineReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_9A940A7EE5FAFF6F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_54D3EF6860D190AA(::System::Int32 a1, ::RPGTools::Timeline::PauseTimelineReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::Timeline::PauseTimelineReason))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_54D3EF6860D190AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79734A163132F053(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_79734A163132F053_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DD7377814EAD872(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_2DD7377814EAD872_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::Class_1_36264895A759B0FF* Method_1_7DC8A93C0B388CEA(::System::Int32 a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_7DC8A93C0B388CEA_OFFSET))(this, a1);
	}

	::Class_1_36264895A759B0FF* Method_1_B8D81EBF0F54E225(::System::String* a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_B8D81EBF0F54E225_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5DD3A7E20AB1E57B(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_5DD3A7E20AB1E57B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_15AB033E29A4A1CF(::System::String* a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_15AB033E29A4A1CF_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* Method_1_0608E01D4DD006F1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_0608E01D4DD006F1_OFFSET))(this);
	}

	::System::Void Method_1_C79EA86ECF4DA290(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_C79EA86ECF4DA290_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Single Method_1_445FC77641902825(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_445FC77641902825_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B9F89DA9D5B93E0D(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_B9F89DA9D5B93E0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_6660D2F420B92AA4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_6660D2F420B92AA4_OFFSET))(this, a1);
	}

	::Class_1_36264895A759B0FF* Method_1_5315A393DA4730D0(::UnityEngine::Playables::Playable a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_5315A393DA4730D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7186574C1FC667B8(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_7186574C1FC667B8_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_4E6B19707D2382D6(::System::Int32 a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_4E6B19707D2382D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_900E7B2FE830ADC8(::UnityEngine::GameObject* a1, ::Class_1_36264895A759B0FF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE_METHOD_1_900E7B2FE830ADC8_OFFSET))(this, a1, a2);
	}
};
