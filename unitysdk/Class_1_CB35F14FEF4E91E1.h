#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PauseTimelineReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/DirectorWrapMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_36264895A759B0FF;
class Class_1_7DD7B4B4C16A5113;
class Class_1_947F5BB3E2AFC4CE;
class Class_1_C7507A7CED329917;
class Class_1_F823E6C98F54DF37;
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

#define CLASS_1_CB35F14FEF4E91E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBABAB80)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_08CB237FDC93F760_OFFSET UNITYSDK_OFFSET(0xBABC070)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_0E5A0B74AFF2BA29_OFFSET UNITYSDK_OFFSET(0xBABC170)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_10A425A365C468FE_OFFSET UNITYSDK_OFFSET(0xBABBF30)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xBABBFC0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_2B66C008535F8B01_1_OFFSET UNITYSDK_OFFSET(0xBABB870)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xBABB2E0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_2C00B0BC45EDAE4B_OFFSET UNITYSDK_OFFSET(0xBABBCC0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xBABB5F0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_3E5C871204E8FB88_OFFSET UNITYSDK_OFFSET(0xBABB270)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_4AB1CB78DA019B7C_OFFSET UNITYSDK_OFFSET(0xBABB8C0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_4F5B4E3A47FCA27E_OFFSET UNITYSDK_OFFSET(0xBABB1F0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_55FDC9BEB7FA81BA_OFFSET UNITYSDK_OFFSET(0xBABAE20)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_59FB7B3FE1018ACC_OFFSET UNITYSDK_OFFSET(0xBABB6A0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_651D7B87CE93EF81_OFFSET UNITYSDK_OFFSET(0xBABB790)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0xBABADA0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_7BD502AE3F460308_OFFSET UNITYSDK_OFFSET(0xBABB720)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_7C1EB7F9632E891D_OFFSET UNITYSDK_OFFSET(0xBABB520)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_89729C6BD8979672_OFFSET UNITYSDK_OFFSET(0xBABB4C0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_8A9A72FB00358D11_OFFSET UNITYSDK_OFFSET(0xBABBE70)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0xBABABE0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_8E1E7C7A72AB10B3_OFFSET UNITYSDK_OFFSET(0xBABB9E0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_968259C256AD4600_OFFSET UNITYSDK_OFFSET(0xBABC110)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_AEDD27C5E1F99995_OFFSET UNITYSDK_OFFSET(0xBABBC50)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_AFA6A069384093A8_OFFSET UNITYSDK_OFFSET(0xBABC010)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_B8CA502B1108F7AD_OFFSET UNITYSDK_OFFSET(0xBABB330)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_BD884E06E6D0FDD0_OFFSET UNITYSDK_OFFSET(0xBABB640)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_C18B4FA311A21EB8_OFFSET UNITYSDK_OFFSET(0xBABB030)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_D5192B20A1C6A131_OFFSET UNITYSDK_OFFSET(0xBABBD80)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_DF0E49F0159EECA4_OFFSET UNITYSDK_OFFSET(0xBABBED0)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_E1681F92A8992B4D_OFFSET UNITYSDK_OFFSET(0xBABAE80)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_F59F3CC976AAB36F_OFFSET UNITYSDK_OFFSET(0xBABBE10)
#define CLASS_1_CB35F14FEF4E91E1_METHOD_1_F63E532D98682B5B_OFFSET UNITYSDK_OFFSET(0xBABB800)
#define CLASS_1_CB35F14FEF4E91E1__CCTOR_OFFSET UNITYSDK_OFFSET(0xBABC1D0)
#define CLASS_1_CB35F14FEF4E91E1__CTOR_OFFSET UNITYSDK_OFFSET(0xBABAAA0)

inline static constexpr unsigned int Class_1_CB35F14FEF4E91E1_TypeDefinitionIndex = 45206;

class Class_1_CB35F14FEF4E91E1 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB35F14FEF4E91E1_TypeDefinitionIndex)->GetStaticField(0x6A5E0);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	::Class_1_C7507A7CED329917* Field_1_6; // 0x10
	::Class_1_F823E6C98F54DF37* Field_1_11; // 0x18
	::System::Collections::Generic::List_1<::RPGTools::TimelineData*>* Field_1_4; // 0x20
	::Class_1_7DD7B4B4C16A5113* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Playables::PlayableDirector*, ::System::Boolean>* Field_1_8; // 0x30
	::UnityEngine::Playables::PlayableDirector* Field_1_9; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* Field_1_5; // 0x40
	::System::Int32 Field_1_10; // 0x48

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

	::System::Int32 Method_1_55FDC9BEB7FA81BA(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_55FDC9BEB7FA81BA_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E1681F92A8992B4D(::System::UInt32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::GameObject* a6, ::UnityEngine::Events::UnityAction* a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*, ::UnityEngine::Events::UnityAction*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_E1681F92A8992B4D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_4F5B4E3A47FCA27E(::System::String* a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_4F5B4E3A47FCA27E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E5C871204E8FB88(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_3E5C871204E8FB88_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_2B66C008535F8B01_OFFSET))(this);
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

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::Class_1_36264895A759B0FF* Method_1_BD884E06E6D0FDD0(::System::Int32 a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_BD884E06E6D0FDD0_OFFSET))(this, a1);
	}

	::Class_1_36264895A759B0FF* Method_1_59FB7B3FE1018ACC(::System::String* a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_59FB7B3FE1018ACC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7BD502AE3F460308(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_7BD502AE3F460308_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_651D7B87CE93EF81(::System::Int32 a1, ::RPGTools::Timeline::PauseTimelineReason a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::Timeline::PauseTimelineReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_651D7B87CE93EF81_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F63E532D98682B5B(::System::Int32 a1, ::RPGTools::Timeline::PauseTimelineReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPGTools::Timeline::PauseTimelineReason))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_F63E532D98682B5B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B66C008535F8B01_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_2B66C008535F8B01_1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4AB1CB78DA019B7C(::UnityEngine::Playables::Playable a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_4AB1CB78DA019B7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E1E7C7A72AB10B3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_8E1E7C7A72AB10B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C00B0BC45EDAE4B(::UnityEngine::Playables::PlayableDirector* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_2C00B0BC45EDAE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D5192B20A1C6A131(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_D5192B20A1C6A131_OFFSET))(this, a1);
	}

	::Class_1_36264895A759B0FF* Method_1_F59F3CC976AAB36F(::System::Boolean a1)
	{
		return ((::Class_1_36264895A759B0FF*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_F59F3CC976AAB36F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A9A72FB00358D11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_8A9A72FB00358D11_OFFSET))(this);
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

	::System::Boolean Method_1_AFA6A069384093A8(::System::Collections::Generic::IEnumerable_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_AFA6A069384093A8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_08CB237FDC93F760()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_08CB237FDC93F760_OFFSET))(this);
	}

	::System::Void Method_1_968259C256AD4600(::UnityEngine::Playables::PlayableDirector* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_968259C256AD4600_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_0E5A0B74AFF2BA29(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_0E5A0B74AFF2BA29_OFFSET))(this, a1);
	}

	::System::String* Method_1_C18B4FA311A21EB8(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_C18B4FA311A21EB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_1_AEDD27C5E1F99995(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1_METHOD_1_AEDD27C5E1F99995_OFFSET))(this, a1);
	}
};
