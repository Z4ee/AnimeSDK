#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PauseTimelineReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/DirectorWrapMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_30AD95CB781F3EEE;
class Class_1_36264895A759B0FF;
class Class_1_6276C81E82F41F62;
class Class_1_7DD7B4B4C16A5113;
class Class_1_947F5BB3E2AFC4CE;
namespace RPGTools { class TimelineData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_CB35F14FEF4E91E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CB7EF0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_0986DD780EA17E2F_OFFSET UNITYSDK_OFFSET(0x15CB85F0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_10A425A365C468FE_OFFSET UNITYSDK_OFFSET(0x15CB9330)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15CB93C0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_262B48DC1F0347C1_OFFSET UNITYSDK_OFFSET(0x15CB9210)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_2B66C008535F8B01_1_OFFSET UNITYSDK_OFFSET(0x15CB8C10)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x15CB8660)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_2C00B0BC45EDAE4B_OFFSET UNITYSDK_OFFSET(0x15CB9060)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_489D1B0E615B5973_OFFSET UNITYSDK_OFFSET(0x15CB8BA0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_4AB1CB78DA019B7C_OFFSET UNITYSDK_OFFSET(0x15CB8C60)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x15CB8990)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_6960879599BB5CB4_OFFSET UNITYSDK_OFFSET(0x15CB9120)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_6EF4D5E75AE96DC5_OFFSET UNITYSDK_OFFSET(0x15CB8D90)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_6F70A28EAF441913_OFFSET UNITYSDK_OFFSET(0x15CB9410)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_7458E2DFBBE4FF07_OFFSET UNITYSDK_OFFSET(0x15CB8570)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x15CB80F0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_7B9D6F143086B23A_OFFSET UNITYSDK_OFFSET(0x15CB8FF0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_7C1EB7F9632E891D_OFFSET UNITYSDK_OFFSET(0x15CB8910)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_89729C6BD8979672_OFFSET UNITYSDK_OFFSET(0x15CB88B0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x15CB7F50)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_968259C256AD4600_OFFSET UNITYSDK_OFFSET(0x15CB94F0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_A8C8FFA164F2128F_OFFSET UNITYSDK_OFFSET(0x15CB9270)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_B0C9E097691CCC9C_OFFSET UNITYSDK_OFFSET(0x15CB9550)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_B31940FB2128D653_OFFSET UNITYSDK_OFFSET(0x15CB9470)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_B8CA502B1108F7AD_OFFSET UNITYSDK_OFFSET(0x15CB8720)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_C5C85EB02BE11B98_OFFSET UNITYSDK_OFFSET(0x15CB86B0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_C5CABFFF0AFD5AA6_OFFSET UNITYSDK_OFFSET(0x15CB8A40)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_D409330421AE8631_OFFSET UNITYSDK_OFFSET(0x15CB8AC0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_DF0E49F0159EECA4_OFFSET UNITYSDK_OFFSET(0x15CB92D0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_E1681F92A8992B4D_OFFSET UNITYSDK_OFFSET(0x15CB81D0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_E441CF0C52317161_OFFSET UNITYSDK_OFFSET(0x15CB8380)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_E7232F80A81A4735_OFFSET UNITYSDK_OFFSET(0x15CB91B0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_EE097416A63ECE75_OFFSET UNITYSDK_OFFSET(0x15CB8B30)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_EFE9A80EDA64CB43_OFFSET UNITYSDK_OFFSET(0x15CB8170)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_F08F30E3ED159CBE_OFFSET UNITYSDK_OFFSET(0x15CB89E0)
#define CLASS_1_CB35F14FEF4E91E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CB95B0)
#define CLASS_1_CB35F14FEF4E91E1__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB7E10)

inline static constexpr unsigned int Class_1_CB35F14FEF4E91E1_TypeDefinitionIndex = 48948;

class Class_1_CB35F14FEF4E91E1 : public ::System::Object
{
public:
	static ::System::String** StaticGet_AHLCOHCIELO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB35F14FEF4E91E1_TypeDefinitionIndex)->GetStaticField(0x1C640);
	}
	// static const ::System::String* ABONJGJPKHI; // 0x0
	// static const ::System::String* BFOFIPJHEAO; // 0x0
	// static const ::System::String* KCMNAFJDFPJ; // 0x0
	::System::Collections::Generic::List_1<::RPGTools::TimelineData*>* MPMMOONDFHC; // 0x10
	::Class_1_7DD7B4B4C16A5113* MDAHKJLGACG; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Playables::PlayableDirector*, ::System::Boolean>* PNKKDFBODGA; // 0x20
	::Class_1_30AD95CB781F3EEE* BEHHICMOFIE; // 0x28
	::Class_1_6276C81E82F41F62* GMCACLGENEO; // 0x30
	::UnityEngine::Playables::PlayableDirector* ODKHINOAGPE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* DGPDPKJKCBO; // 0x40
	::System::Int32 MHAFMDPNBOG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Int32 Method_1_EFE9A80EDA64CB43(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_EFE9A80EDA64CB43_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E1681F92A8992B4D(::System::UInt32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::GameObject* a6, ::UnityEngine::Events::UnityAction* a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*, ::UnityEngine::Events::UnityAction*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_E1681F92A8992B4D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_7458E2DFBBE4FF07(::System::String* a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_7458E2DFBBE4FF07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0986DD780EA17E2F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_0986DD780EA17E2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Single Method_1_C5C85EB02BE11B98(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_C5C85EB02BE11B98_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B8CA502B1108F7AD(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::Playables::PlayableAsset* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Action_2<::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*>* a6, ::UnityEngine::Events::UnityAction* a7, ::System::Double a8, ::UnityEngine::Playables::DirectorWrapMode a9)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_2<::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*>*, ::UnityEngine::Events::UnityAction*, ::System::Double, ::UnityEngine::Playables::DirectorWrapMode))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_B8CA502B1108F7AD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_89729C6BD8979672(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_89729C6BD8979672_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C1EB7F9632E891D(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_7C1EB7F9632E891D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_52607DE4C357D269_OFFSET))(this);
	}

	::Class_1_36264895A759B0FF* Method_1_F08F30E3ED159CBE(::System::Int32 a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_F08F30E3ED159CBE_OFFSET))(this, a1);
	}

	::Class_1_36264895A759B0FF* Method_1_C5CABFFF0AFD5AA6(::System::String* a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_C5CABFFF0AFD5AA6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D409330421AE8631(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_D409330421AE8631_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EE097416A63ECE75(::System::Int32 a1, ::RPGTools::Timeline::PauseTimelineReason a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::Timeline::PauseTimelineReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_EE097416A63ECE75_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_489D1B0E615B5973(::System::Int32 a1, ::RPGTools::Timeline::PauseTimelineReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::Timeline::PauseTimelineReason))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_489D1B0E615B5973_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B66C008535F8B01_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_2B66C008535F8B01_1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4AB1CB78DA019B7C(::UnityEngine::Playables::Playable a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_4AB1CB78DA019B7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EF4D5E75AE96DC5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_6EF4D5E75AE96DC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C00B0BC45EDAE4B(::UnityEngine::Playables::PlayableDirector* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_2C00B0BC45EDAE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6960879599BB5CB4(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_6960879599BB5CB4_OFFSET))(this, a1);
	}

	::Class_1_36264895A759B0FF* Method_1_E7232F80A81A4735(::System::Boolean a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_E7232F80A81A4735_OFFSET))(this, a1);
	}

	::System::Void Method_1_262B48DC1F0347C1(::System::Collections::Generic::List_1<::Class_1_36264895A759B0FF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_36264895A759B0FF*>*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_262B48DC1F0347C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8C8FFA164F2128F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_A8C8FFA164F2128F_OFFSET))(this);
	}

	::System::Boolean Method_1_DF0E49F0159EECA4(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_DF0E49F0159EECA4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_10A425A365C468FE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_10A425A365C468FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_1_6F70A28EAF441913(::System::Collections::Generic::IEnumerable_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_6F70A28EAF441913_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_B31940FB2128D653()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_B31940FB2128D653_OFFSET))(this);
	}

	::System::Void Method_1_968259C256AD4600(::UnityEngine::Playables::PlayableDirector* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_968259C256AD4600_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_B0C9E097691CCC9C(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_B0C9E097691CCC9C_OFFSET))(this, a1);
	}

	::System::String* Method_1_E441CF0C52317161(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_E441CF0C52317161_OFFSET))(this, a1);
	}

	::System::Void Method_1_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_1_7B9D6F143086B23A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_7B9D6F143086B23A_OFFSET))(this, a1);
	}
};
