#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PauseTimelineReason.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/DirectorWrapMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_265;
class Class_1_36264895A759B0FF;
class Class_1_947F5BB3E2AFC4CE;
class Class_1_F70BB658BDABBB59;
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

#define CLASS_1_C7507A7CED329917_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9873E10)
#define CLASS_1_C7507A7CED329917_METHOD_1_01CED7165C81494C_OFFSET UNITYSDK_OFFSET(0x9876E90)
#define CLASS_1_C7507A7CED329917_METHOD_1_0608E01D4DD006F1_OFFSET UNITYSDK_OFFSET(0x98776E0)
#define CLASS_1_C7507A7CED329917_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9876CC0)
#define CLASS_1_C7507A7CED329917_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x9876D60)
#define CLASS_1_C7507A7CED329917_METHOD_1_1B57B4188F040CF7_OFFSET UNITYSDK_OFFSET(0x9874AE0)
#define CLASS_1_C7507A7CED329917_METHOD_1_2327B99497B88A97_OFFSET UNITYSDK_OFFSET(0x9876930)
#define CLASS_1_C7507A7CED329917_METHOD_1_2D4F5192D3A1FC69_OFFSET UNITYSDK_OFFSET(0x9874FE0)
#define CLASS_1_C7507A7CED329917_METHOD_1_2D533DD2C7E92FB8_OFFSET UNITYSDK_OFFSET(0x9876630)
#define CLASS_1_C7507A7CED329917_METHOD_1_2DD7377814EAD872_OFFSET UNITYSDK_OFFSET(0x9876B40)
#define CLASS_1_C7507A7CED329917_METHOD_1_36C84EB917CDD83C_OFFSET UNITYSDK_OFFSET(0x9875E40)
#define CLASS_1_C7507A7CED329917_METHOD_1_40D033D10A3C45E6_OFFSET UNITYSDK_OFFSET(0x9877190)
#define CLASS_1_C7507A7CED329917_METHOD_1_45D3708C24EAFFD6_OFFSET UNITYSDK_OFFSET(0x9877770)
#define CLASS_1_C7507A7CED329917_METHOD_1_463BD2A0B051AB88_OFFSET UNITYSDK_OFFSET(0x9876800)
#define CLASS_1_C7507A7CED329917_METHOD_1_48EE6F8CA58AC368_OFFSET UNITYSDK_OFFSET(0x9873EC0)
#define CLASS_1_C7507A7CED329917_METHOD_1_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x9874E90)
#define CLASS_1_C7507A7CED329917_METHOD_1_4E6B19707D2382D6_OFFSET UNITYSDK_OFFSET(0x9878A50)
#define CLASS_1_C7507A7CED329917_METHOD_1_51D373B875D1FB5E_OFFSET UNITYSDK_OFFSET(0x98762C0)
#define CLASS_1_C7507A7CED329917_METHOD_1_52A67FD692224EA9_OFFSET UNITYSDK_OFFSET(0x98784C0)
#define CLASS_1_C7507A7CED329917_METHOD_1_5EAE2311CA1009F2_OFFSET UNITYSDK_OFFSET(0x9876FC0)
#define CLASS_1_C7507A7CED329917_METHOD_1_65479C04535824AE_OFFSET UNITYSDK_OFFSET(0x9876C40)
#define CLASS_1_C7507A7CED329917_METHOD_1_65A8BD5BED72AB8D_OFFSET UNITYSDK_OFFSET(0x9874600)
#define CLASS_1_C7507A7CED329917_METHOD_1_79734A163132F053_OFFSET UNITYSDK_OFFSET(0x9876A40)
#define CLASS_1_C7507A7CED329917_METHOD_1_7FAE35EE1556212A_OFFSET UNITYSDK_OFFSET(0x9877B60)
#define CLASS_1_C7507A7CED329917_METHOD_1_8C78661CEB99093E_OFFSET UNITYSDK_OFFSET(0x9878370)
#define CLASS_1_C7507A7CED329917_METHOD_1_900E7B2FE830ADC8_OFFSET UNITYSDK_OFFSET(0x9878AE0)
#define CLASS_1_C7507A7CED329917_METHOD_1_A03715CCBC7934FA_OFFSET UNITYSDK_OFFSET(0x9875110)
#define CLASS_1_C7507A7CED329917_METHOD_1_A08F661813A1C1B3_OFFSET UNITYSDK_OFFSET(0x9876000)
#define CLASS_1_C7507A7CED329917_METHOD_1_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x9874100)
#define CLASS_1_C7507A7CED329917_METHOD_1_A4A8A95D4C2E41FB_OFFSET UNITYSDK_OFFSET(0x9876470)
#define CLASS_1_C7507A7CED329917_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x9877940)
#define CLASS_1_C7507A7CED329917_METHOD_1_AB2A9A554E3F3DEC_OFFSET UNITYSDK_OFFSET(0x9875370)
#define CLASS_1_C7507A7CED329917_METHOD_1_AE56C3FCA9C61067_OFFSET UNITYSDK_OFFSET(0x9876DF0)
#define CLASS_1_C7507A7CED329917_METHOD_1_BE469DB887D861BD_OFFSET UNITYSDK_OFFSET(0x9876740)
#define CLASS_1_C7507A7CED329917_METHOD_1_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x9876580)
#define CLASS_1_C7507A7CED329917_METHOD_1_F2965FD9B3E2E8BF_OFFSET UNITYSDK_OFFSET(0x98781A0)
#define CLASS_1_C7507A7CED329917__CTOR_OFFSET UNITYSDK_OFFSET(0x9873AF0)

inline static constexpr unsigned int Class_1_C7507A7CED329917_TypeDefinitionIndex = 45192;

class Class_1_C7507A7CED329917 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C7507A7CED329917_TypeDefinitionIndex)->GetStaticField(0x57D0);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Playables::PlayableDirector*, ::Class_1_36264895A759B0FF*>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F70BB658BDABBB59*>* Field_1_8; // 0x18
	::UnityEngine::GameObject* Field_1_11; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_36264895A759B0FF*>* Field_1_3; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x40
	::UnityEngine::Transform* Field_1_10; // 0x48
	::System::Int32 Field_1_9; // 0x50

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_48EE6F8CA58AC368(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_48EE6F8CA58AC368_OFFSET))(this, a1);
	}

	::System::Void Method_1_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_A44A18C9451109E4_OFFSET))(this);
	}

	::UnityEngine::Playables::PlayableDirector* Method_1_65A8BD5BED72AB8D(::System::String* a1, ::System::String* a2, ::UnityEngine::Playables::PlayableAsset* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_65A8BD5BED72AB8D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_36264895A759B0FF* Method_1_1B57B4188F040CF7(::System::String* a1, ::UnityEngine::Playables::PlayableAsset* a2)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::String*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_1B57B4188F040CF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4D606E0EBD8E195C(::Class_1_36264895A759B0FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D4F5192D3A1FC69(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Events::UnityAction* a2, ::System::Double a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Events::UnityAction*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_2D4F5192D3A1FC69_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_A03715CCBC7934FA(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Playables::PlayableAsset* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Action_2<::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*>* a7, ::UnityEngine::Events::UnityAction* a8, ::System::Double a9, ::UnityEngine::Playables::DirectorWrapMode a10)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_2<::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*>*, ::UnityEngine::Events::UnityAction*, ::System::Double, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_A03715CCBC7934FA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Int32 Method_1_AB2A9A554E3F3DEC(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::GameObject* a7, ::UnityEngine::Events::UnityAction* a8, ::System::Single a9, ::System::Single a10)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*, ::UnityEngine::Events::UnityAction*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_AB2A9A554E3F3DEC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::Class_1_36264895A759B0FF* Method_1_36C84EB917CDD83C(::System::Boolean a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_36C84EB917CDD83C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_A08F661813A1C1B3(::UnityEngine::Playables::PlayableGraph a1, ::System::Type* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_A08F661813A1C1B3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_51D373B875D1FB5E(::UnityEngine::Playables::Playable a1, ::System::Type* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Playables::Playable, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_51D373B875D1FB5E_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_A4A8A95D4C2E41FB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_A4A8A95D4C2E41FB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_F1BB718E73080948_OFFSET))(this);
	}

	::System::Boolean Method_1_2D533DD2C7E92FB8(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_2D533DD2C7E92FB8_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_BE469DB887D861BD(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_BE469DB887D861BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_463BD2A0B051AB88(::System::Int32 a1, ::RPGTools::Timeline::PauseTimelineReason a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::Timeline::PauseTimelineReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_463BD2A0B051AB88_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2327B99497B88A97(::System::Int32 a1, ::RPGTools::Timeline::PauseTimelineReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::Timeline::PauseTimelineReason))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_2327B99497B88A97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79734A163132F053(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_79734A163132F053_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DD7377814EAD872(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_2DD7377814EAD872_OFFSET))(this, a1);
	}

	::System::Void Method_1_65479C04535824AE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_65479C04535824AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::Class_1_36264895A759B0FF* Method_1_AE56C3FCA9C61067(::System::Int32 a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_AE56C3FCA9C61067_OFFSET))(this, a1);
	}

	::Class_1_36264895A759B0FF* Method_1_01CED7165C81494C(::System::String* a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_01CED7165C81494C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5EAE2311CA1009F2(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_5EAE2311CA1009F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_40D033D10A3C45E6(::System::String* a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_40D033D10A3C45E6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>* Method_1_0608E01D4DD006F1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_0608E01D4DD006F1_OFFSET))(this);
	}

	::System::Void Method_1_45D3708C24EAFFD6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_45D3708C24EAFFD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Boolean Method_1_7FAE35EE1556212A(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_7FAE35EE1556212A_OFFSET))(this, a1);
	}

	::System::Void Method_1_F2965FD9B3E2E8BF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_F2965FD9B3E2E8BF_OFFSET))(this, a1);
	}

	::Class_1_36264895A759B0FF* Method_1_8C78661CEB99093E(::UnityEngine::Playables::Playable a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_8C78661CEB99093E_OFFSET))(this, a1);
	}

	::System::Void Method_1_52A67FD692224EA9(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_52A67FD692224EA9_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_4E6B19707D2382D6(::System::Int32 a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_4E6B19707D2382D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_900E7B2FE830ADC8(::UnityEngine::GameObject* a1, ::Class_1_36264895A759B0FF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917_METHOD_1_900E7B2FE830ADC8_OFFSET))(this, a1, a2);
	}
};
