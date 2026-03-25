#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46;
class Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1;
class Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1;
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

#define CLASS_1_02986BBFC3ACF3B3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114B1670)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x114B2470)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x114B1E20)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_2482F91C382749DC_OFFSET UNITYSDK_OFFSET(0x114B2000)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x114B1870)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_313F8D48F346462D_OFFSET UNITYSDK_OFFSET(0x114B33C0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x114B1CF0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x114B1C10)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x114B16C0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x114B1D30)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x114B2390)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x114B2750)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x114B1C60)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_60EF8C0E60E5814F_OFFSET UNITYSDK_OFFSET(0x114B2A80)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x114B1F70)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_95B6577101137FB7_OFFSET UNITYSDK_OFFSET(0x114B3420)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_9781CA5081EB3302_OFFSET UNITYSDK_OFFSET(0x114B32B0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x114B3200)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_A4A809F9C06A42E3_OFFSET UNITYSDK_OFFSET(0x114B1E80)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_A7E35FE81CB2D23F_OFFSET UNITYSDK_OFFSET(0x114B27C0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x114B1AA0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_DD8B3F1534E26559_OFFSET UNITYSDK_OFFSET(0x114B2CA0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_DF6E7AD14ACED681_OFFSET UNITYSDK_OFFSET(0x114B2830)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E24D451D43C2E05C_OFFSET UNITYSDK_OFFSET(0x114B3360)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0x114B2650)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x114B1B60)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0x114B18F0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E9B5E9F001273C7E_1_OFFSET UNITYSDK_OFFSET(0x114B2210)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E9B5E9F001273C7E_OFFSET UNITYSDK_OFFSET(0x114B20A0)
#define CLASS_1_02986BBFC3ACF3B3__CTOR_OFFSET UNITYSDK_OFFSET(0x114B1660)

inline static constexpr unsigned int Class_1_02986BBFC3ACF3B3_TypeDefinitionIndex = 49211;

class Class_1_02986BBFC3ACF3B3 : public ::System::Object
{
public:
	::Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46* Field_1_7; // 0x10
	::RPG::Client::PerformanceManager* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1*>* Field_1_8; // 0x20
	::UnityEngine::Coroutine* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1*>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1*>* Field_1_4; // 0x38
	::Class_1_7A6E49020D23C900* Field_1_3; // 0x40
	::System::Int32 Field_1_2; // 0x48
	::System::Boolean Field_1_9; // 0x4C
	::System::Boolean Field_1_1; // 0x4D
	::System::Int32 Field_1_10; // 0x50

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Void Method_1_A4A809F9C06A42E3(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_A4A809F9C06A42E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_805C56F44231AEF9_OFFSET))(this);
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

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_1_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_A7E35FE81CB2D23F(::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1*>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_A7E35FE81CB2D23F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_DF6E7AD14ACED681(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_DF6E7AD14ACED681_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_60EF8C0E60E5814F(::Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_60EF8C0E60E5814F_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_DD8B3F1534E26559(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_DD8B3F1534E26559_OFFSET))(this, a1);
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

	::System::Void Method_1_313F8D48F346462D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_313F8D48F346462D_OFFSET))(this, a1);
	}

	::System::Void Method_1_95B6577101137FB7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_95B6577101137FB7_OFFSET))(this, a1);
	}

	::System::Void Method_1_E67FA6A042436B76()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E67FA6A042436B76_OFFSET))(this);
	}
};
