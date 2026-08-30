#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1;
class Class_1_02986BBFC3ACF3B3_Class_2_9C7E2E4EBAA29CE6;
class Class_1_02986BBFC3ACF3B3_Class_2_9C7E2E4EBAA29CE6_1;
class Class_1_7A6E49020D23C900;
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameWorld; }
namespace RPGTools::Timeline { class ActiveVirtualCameraConfig; }
namespace RPGTools::Timeline::Discussion { class CameraCompositionClip; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_1_02986BBFC3ACF3B3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB962550)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_0AFA90E4B45F47A7_OFFSET UNITYSDK_OFFSET(0xB964540)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xB962BD0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB962CA0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_2482F91C382749DC_OFFSET UNITYSDK_OFFSET(0xB962F00)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB962B90)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xB962AB0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0xB9629C0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_46173817755A3940_OFFSET UNITYSDK_OFFSET(0xB963780)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0xB9636A0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0xB962B00)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_642946C96BF76EA2_OFFSET UNITYSDK_OFFSET(0xB963B60)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB962E20)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_9781CA5081EB3302_OFFSET UNITYSDK_OFFSET(0xB9643D0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xB964320)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB963490)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_A7E35FE81CB2D23F_OFFSET UNITYSDK_OFFSET(0xB963710)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_C4B1438AD4BECAD6_OFFSET UNITYSDK_OFFSET(0xB963980)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0xB962790)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_DDF09B4CDAC0FF26_OFFSET UNITYSDK_OFFSET(0xB9644E0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E24D451D43C2E05C_OFFSET UNITYSDK_OFFSET(0xB964480)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0xB9628E0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_2_OFFSET UNITYSDK_OFFSET(0xB9626D0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB9635A0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB9625A0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E9B5E9F001273C7E_1_OFFSET UNITYSDK_OFFSET(0xB963150)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E9B5E9F001273C7E_OFFSET UNITYSDK_OFFSET(0xB962FA0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_ED4E721969D6DC72_OFFSET UNITYSDK_OFFSET(0xB962D00)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0xB963310)
#define CLASS_1_02986BBFC3ACF3B3__CTOR_OFFSET UNITYSDK_OFFSET(0xB962540)

inline static constexpr unsigned int Class_1_02986BBFC3ACF3B3_TypeDefinitionIndex = 60844;

class Class_1_02986BBFC3ACF3B3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1*>* HLHHILPKNPJ; // 0x10
	::Class_1_7A6E49020D23C900* IODLOIKPMEH; // 0x18
	::UnityEngine::Coroutine* NKJLLKFHNPA; // 0x20
	::RPG::Client::PerformanceManager* HDPDEGPELBN; // 0x28
	::Class_1_02986BBFC3ACF3B3_Class_2_9C7E2E4EBAA29CE6* MLDNHLGKFFH; // 0x30
	::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_9C7E2E4EBAA29CE6_1*>* OHFJNMMPKFM; // 0x38
	::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_9C7E2E4EBAA29CE6_1*>* CELKIBFPIML; // 0x40
	::System::Int32 JHDJFFKDJEF; // 0x48
	::System::Boolean CFIOLJILGLM; // 0x4C
	::System::Boolean GAOOEKHNIJC; // 0x4D
	::System::Int32 FDNNOCDFPHA; // 0x50

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_1_ED4E721969D6DC72(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_ED4E721969D6DC72_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_2482F91C382749DC(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_2482F91C382749DC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E9B5E9F001273C7E(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E9B5E9F001273C7E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E9B5E9F001273C7E_1(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E9B5E9F001273C7E_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_FD647A48096EB173_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_A7E35FE81CB2D23F(::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_9C7E2E4EBAA29CE6_1*>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_9C7E2E4EBAA29CE6_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_A7E35FE81CB2D23F_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_1_OFFSET))(this);
	}

	::System::Void Method_1_46173817755A3940(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_46173817755A3940_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_C4B1438AD4BECAD6(::Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_C4B1438AD4BECAD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_2_OFFSET))(this);
	}

	::System::Void Method_1_642946C96BF76EA2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_642946C96BF76EA2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9781CA5081EB3302(::RPGTools::Timeline::ActiveVirtualCameraConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ActiveVirtualCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_9781CA5081EB3302_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E24D451D43C2E05C(::RPGTools::Timeline::Discussion::CameraCompositionClip* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::Discussion::CameraCompositionClip*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E24D451D43C2E05C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_DDF09B4CDAC0FF26(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_DDF09B4CDAC0FF26_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AFA90E4B45F47A7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_0AFA90E4B45F47A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_D8E6DC0B27699F85_OFFSET))(this);
	}
};
