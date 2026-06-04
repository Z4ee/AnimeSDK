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

#define CLASS_1_02986BBFC3ACF3B3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6436E0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_0AFA90E4B45F47A7_OFFSET UNITYSDK_OFFSET(0xA6453E0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xA643D00)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA643DD0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xA644370)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_2482F91C382749DC_OFFSET UNITYSDK_OFFSET(0xA643F60)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA643860)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA643CC0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA643BE0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_597174F7F7959C8E_OFFSET UNITYSDK_OFFSET(0xA643E30)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0xA6446D0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0xA643C30)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_5FC82B4A70AA2F2E_OFFSET UNITYSDK_OFFSET(0xA6447B0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA643EE0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_9781CA5081EB3302_OFFSET UNITYSDK_OFFSET(0xA645270)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xA6451C0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xA644460)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_A7E35FE81CB2D23F_OFFSET UNITYSDK_OFFSET(0xA644740)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA643B60)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_C846A2D28F77C7D1_OFFSET UNITYSDK_OFFSET(0xA6449B0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0xA6438E0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_DD8B3F1534E26559_OFFSET UNITYSDK_OFFSET(0xA644BA0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_DDF09B4CDAC0FF26_OFFSET UNITYSDK_OFFSET(0xA645380)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E24D451D43C2E05C_OFFSET UNITYSDK_OFFSET(0xA645320)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0xA643A80)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA6445D0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xA643730)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E9B5E9F001273C7E_1_OFFSET UNITYSDK_OFFSET(0xA6441B0)
#define CLASS_1_02986BBFC3ACF3B3_METHOD_1_E9B5E9F001273C7E_OFFSET UNITYSDK_OFFSET(0xA644000)
#define CLASS_1_02986BBFC3ACF3B3__CTOR_OFFSET UNITYSDK_OFFSET(0xA6436D0)

inline static constexpr unsigned int Class_1_02986BBFC3ACF3B3_TypeDefinitionIndex = 56770;

class Class_1_02986BBFC3ACF3B3 : public ::System::Object
{
public:
	::RPG::Client::PerformanceManager* Field_1_0; // 0x10
	::UnityEngine::Coroutine* Field_1_1; // 0x18
	::Class_1_7A6E49020D23C900* Field_1_2; // 0x20
	::Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1*>* Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x4C
	::System::Boolean Field_1_9; // 0x4D
	::System::Int32 Field_1_10; // 0x50

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

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_1_597174F7F7959C8E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_597174F7F7959C8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_9681042564541CD6_OFFSET))(this);
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

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_18982EFD3B740683_OFFSET))(this);
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

	::System::Collections::IEnumerator* Method_1_A7E35FE81CB2D23F(::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1*>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_02986BBFC3ACF3B3_Class_2_2B0066BA7501CE46_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_A7E35FE81CB2D23F_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_E3DE31A03057E055_1_OFFSET))(this);
	}

	::System::Void Method_1_5FC82B4A70AA2F2E(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_5FC82B4A70AA2F2E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_C846A2D28F77C7D1(::Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02986BBFC3ACF3B3_Class_2_4EB46DF3B782A5B1*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_C846A2D28F77C7D1_OFFSET))(this, a1);
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

	::System::Void Method_1_DDF09B4CDAC0FF26(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_DDF09B4CDAC0FF26_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AFA90E4B45F47A7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_0AFA90E4B45F47A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_METHOD_1_D155D4917B3D2C6A_OFFSET))(this);
	}
};
