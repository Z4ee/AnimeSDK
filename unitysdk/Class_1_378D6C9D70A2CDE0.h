#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_378D6C9D70A2CDE0_EJumpMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_144A9DD221938390;
class Class_1_845DEA7341FE0085;
class Class_1_D27BF54F25500E5F;
class Class_1_EE60750735AAF463;
class Class_2_C26FCB07100301D1;
class SubwayScheduleData;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client::Subway { class AirlineSubwayWay; }
namespace RPG::Client::Subway { class AirshipSubwayEmitter; }
namespace RPG::Client::Subway { class AirshipSubwayTimetable; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_1_378D6C9D70A2CDE0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13898270)
#define CLASS_1_378D6C9D70A2CDE0_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1389AEA0)
#define CLASS_1_378D6C9D70A2CDE0_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1389AEB0)
#define CLASS_1_378D6C9D70A2CDE0_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1389AEC0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0x13898400)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_01B036AAED3058F6_OFFSET UNITYSDK_OFFSET(0x1389ACB0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_0C4A6187ABD6CD16_OFFSET UNITYSDK_OFFSET(0x13898760)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_1A86469CA55D5769_OFFSET UNITYSDK_OFFSET(0x1389A1E0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_218124418542E081_1_OFFSET UNITYSDK_OFFSET(0x1389A4E0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x1389A290)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_348EDD8F6EA646AC_OFFSET UNITYSDK_OFFSET(0x1389AF30)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x13899D20)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0x1389A0A0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_46D79C223C10A615_OFFSET UNITYSDK_OFFSET(0x13899510)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_71E31747A0BBA61D_OFFSET UNITYSDK_OFFSET(0x1389A850)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_7A11D884E4E963B5_OFFSET UNITYSDK_OFFSET(0x1389A9A0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_8EF9C22EDBC87DA7_OFFSET UNITYSDK_OFFSET(0x1389AC30)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x13898640)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_957545855FF2FBE0_OFFSET UNITYSDK_OFFSET(0x1389AB60)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_964D20CA55FCD356_OFFSET UNITYSDK_OFFSET(0x1389AAB0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x1389AD20)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x1389A8D0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_C45728546E395EBF_OFFSET UNITYSDK_OFFSET(0x1389AA30)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x13899DD0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_D3F417E15A8F434E_OFFSET UNITYSDK_OFFSET(0x1389A730)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x13898540)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_DD73F9FEAA12BED6_OFFSET UNITYSDK_OFFSET(0x138993C0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_DFEE3E82B722BB46_OFFSET UNITYSDK_OFFSET(0x13899E90)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_E9F4574478C103DE_OFFSET UNITYSDK_OFFSET(0x13899FC0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x138986B0)
#define CLASS_1_378D6C9D70A2CDE0_METHOD_1_FBCC7DE96534E5C3_OFFSET UNITYSDK_OFFSET(0x13898AD0)
#define CLASS_1_378D6C9D70A2CDE0_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1389AED0)
#define CLASS_1_378D6C9D70A2CDE0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1389AF40)
#define CLASS_1_378D6C9D70A2CDE0__CTOR_OFFSET UNITYSDK_OFFSET(0x13897DD0)

inline static constexpr unsigned int Class_1_378D6C9D70A2CDE0_TypeDefinitionIndex = 74401;

class Class_1_378D6C9D70A2CDE0 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_378D6C9D70A2CDE0_TypeDefinitionIndex)->GetStaticField(0x13230);
	}
	::Il2CppArray<::Class_1_845DEA7341FE0085*>* Field_1_1; // 0x10
	::RPG::Client::Subway::AirshipSubwayTimetable* Field_1_2; // 0x18
	::System::String* _PrefabPath_k__BackingField; // 0x20
	::Class_1_D27BF54F25500E5F* Field_1_4; // 0x28
	::Class_1_144A9DD221938390* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_EE60750735AAF463*>* Field_1_6; // 0x38
	::System::Func_2<::Class_1_EE60750735AAF463*, ::System::Boolean>* Field_1_7; // 0x40
	::RPG::Client::Subway::AirshipSubwayEmitter* Field_1_8; // 0x48
	::Class_1_144A9DD221938390* Field_1_9; // 0x50
	::RPG::Client::Subway::AirlineSubwayWay* Field_1_10; // 0x58
	::System::UInt32 _GroupID_k__BackingField; // 0x60
	::System::Single Field_1_12; // 0x64

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_1_0C4A6187ABD6CD16(::Class_1_378D6C9D70A2CDE0_EJumpMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_378D6C9D70A2CDE0_EJumpMode))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_0C4A6187ABD6CD16_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBCC7DE96534E5C3(::Class_1_378D6C9D70A2CDE0_EJumpMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_378D6C9D70A2CDE0_EJumpMode))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_FBCC7DE96534E5C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_46D79C223C10A615(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_46D79C223C10A615_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFEE3E82B722BB46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_DFEE3E82B722BB46_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E9F4574478C103DE(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_E9F4574478C103DE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_1A86469CA55D5769(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_1A86469CA55D5769_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_1_218124418542E081_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_218124418542E081_1_OFFSET))(this);
	}

	::System::Void Method_1_D3F417E15A8F434E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_D3F417E15A8F434E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD73F9FEAA12BED6(::SubwayScheduleData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::SubwayScheduleData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_DD73F9FEAA12BED6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_017C915772AE00E9_OFFSET))(this);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* Method_1_71E31747A0BBA61D(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_71E31747A0BBA61D_OFFSET))(this, a1, a2);
	}

	::Class_2_C26FCB07100301D1* Method_1_7A11D884E4E963B5(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::BatchAnimationInstance* a3)
	{
		return ((::Class_2_C26FCB07100301D1*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_7A11D884E4E963B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C45728546E395EBF(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_C45728546E395EBF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_964D20CA55FCD356(::System::String* a1, ::Class_2_C26FCB07100301D1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_C26FCB07100301D1*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_964D20CA55FCD356_OFFSET))(this, a1, a2);
	}

	::RPG::Client::BAPartVariantRes* Method_1_957545855FF2FBE0(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2, ::RPG::Client::AssemNPC* a3)
	{
		return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_957545855FF2FBE0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8EF9C22EDBC87DA7(::System::String* a1, ::RPG::Client::BAPartVariantRes* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_8EF9C22EDBC87DA7_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AssemNPC* Method_1_01B036AAED3058F6(::System::String* a1)
	{
		return ((::RPG::Client::AssemNPC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_01B036AAED3058F6_OFFSET))(this, a1);
	}

	::Class_1_845DEA7341FE0085* Method_1_444E41890AF6E3D9(::System::String* a1)
	{
		return ((::Class_1_845DEA7341FE0085*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_444E41890AF6E3D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_EA3063A5CDD6F164_OFFSET))(this);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_SET_TIMESCALE_OFFSET))(this, a1);
	}

	::RPG::Client::Subway::AirlineSubwayWay* Method_1_348EDD8F6EA646AC()
	{
		return ((::RPG::Client::Subway::AirlineSubwayWay*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_348EDD8F6EA646AC_OFFSET))(this);
	}

	::System::Boolean Method_1_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378D6C9D70A2CDE0_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}
};
