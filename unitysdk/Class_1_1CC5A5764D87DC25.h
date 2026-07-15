#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1CC5A5764D87DC25_EJumpMode.h"
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

#define CLASS_1_1CC5A5764D87DC25_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1633B0F0)
#define CLASS_1_1CC5A5764D87DC25_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1633DEB0)
#define CLASS_1_1CC5A5764D87DC25_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1633DEC0)
#define CLASS_1_1CC5A5764D87DC25_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1633DED0)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x1633DD10)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_1A86469CA55D5769_OFFSET UNITYSDK_OFFSET(0x1633D1E0)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_218124418542E081_1_OFFSET UNITYSDK_OFFSET(0x1633D4E0)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x1633D290)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_344B359F227798DE_OFFSET UNITYSDK_OFFSET(0x1633DAE0)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_348EDD8F6EA646AC_OFFSET UNITYSDK_OFFSET(0x1633DF40)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x1633B510)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_3FC36300A487DAD3_OFFSET UNITYSDK_OFFSET(0x1633DB50)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1633CCC0)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0x1633D0A0)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_55E69FAFAC98A811_OFFSET UNITYSDK_OFFSET(0x1633B630)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_71E31747A0BBA61D_OFFSET UNITYSDK_OFFSET(0x1633D880)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_8BDEF8E4E33A99AE_OFFSET UNITYSDK_OFFSET(0x1633D9D0)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_8C945585B4A8C17B_OFFSET UNITYSDK_OFFSET(0x1633B280)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_8EF9C22EDBC87DA7_OFFSET UNITYSDK_OFFSET(0x1633DC20)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_9C05ABC9E776C74C_OFFSET UNITYSDK_OFFSET(0x1633C460)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_A4050D938328C87A_OFFSET UNITYSDK_OFFSET(0x1633B9D0)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x1633D900)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_BE1CA9B7BEFE93CB_OFFSET UNITYSDK_OFFSET(0x1633DCA0)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_C45728546E395EBF_OFFSET UNITYSDK_OFFSET(0x1633DA60)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x1633B580)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_D3F417E15A8F434E_OFFSET UNITYSDK_OFFSET(0x1633D730)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1633B410)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x1633CD70)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_DFEE3E82B722BB46_OFFSET UNITYSDK_OFFSET(0x1633CE60)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_E9F4574478C103DE_OFFSET UNITYSDK_OFFSET(0x1633CFC0)
#define CLASS_1_1CC5A5764D87DC25_METHOD_1_F88662BE20564C45_OFFSET UNITYSDK_OFFSET(0x1633C2D0)
#define CLASS_1_1CC5A5764D87DC25_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1633DEE0)
#define CLASS_1_1CC5A5764D87DC25__CCTOR_OFFSET UNITYSDK_OFFSET(0x1633DF50)
#define CLASS_1_1CC5A5764D87DC25__CTOR_OFFSET UNITYSDK_OFFSET(0x1633AC40)

inline static constexpr unsigned int Class_1_1CC5A5764D87DC25_TypeDefinitionIndex = 76791;

class Class_1_1CC5A5764D87DC25 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CC5A5764D87DC25_TypeDefinitionIndex)->GetStaticField(0xEE20);
	}
	::RPG::Client::Subway::AirlineSubwayWay* Field_1_1; // 0x10
	::Class_1_D27BF54F25500E5F* Field_1_2; // 0x18
	::Class_1_144A9DD221938390* Field_1_3; // 0x20
	::RPG::Client::Subway::AirshipSubwayEmitter* Field_1_4; // 0x28
	::System::String* _PrefabPath_k__BackingField; // 0x30
	::Class_1_144A9DD221938390* Field_1_6; // 0x38
	::Il2CppArray<::Class_1_845DEA7341FE0085*>* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::Class_1_EE60750735AAF463*>* Field_1_8; // 0x48
	::System::Func_2<::Class_1_EE60750735AAF463*, ::System::Boolean>* Field_1_9; // 0x50
	::RPG::Client::Subway::AirshipSubwayTimetable* Field_1_10; // 0x58
	::System::Single Field_1_11; // 0x60
	::System::UInt32 _GroupID_k__BackingField; // 0x64

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Method_1_55E69FAFAC98A811(::Class_1_1CC5A5764D87DC25_EJumpMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CC5A5764D87DC25_EJumpMode))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_55E69FAFAC98A811_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4050D938328C87A(::Class_1_1CC5A5764D87DC25_EJumpMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CC5A5764D87DC25_EJumpMode))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_A4050D938328C87A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C05ABC9E776C74C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_9C05ABC9E776C74C_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFEE3E82B722BB46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_DFEE3E82B722BB46_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E9F4574478C103DE(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_E9F4574478C103DE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_1A86469CA55D5769(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_1A86469CA55D5769_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_1_218124418542E081_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_218124418542E081_1_OFFSET))(this);
	}

	::System::Void Method_1_D3F417E15A8F434E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_D3F417E15A8F434E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F88662BE20564C45(::SubwayScheduleData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::SubwayScheduleData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_F88662BE20564C45_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_8C945585B4A8C17B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_8C945585B4A8C17B_OFFSET))(this);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* Method_1_71E31747A0BBA61D(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_71E31747A0BBA61D_OFFSET))(this, a1, a2);
	}

	::Class_2_C26FCB07100301D1* Method_1_8BDEF8E4E33A99AE(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::BatchAnimationInstance* a3)
	{
		return ((::Class_2_C26FCB07100301D1*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_8BDEF8E4E33A99AE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C45728546E395EBF(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_C45728546E395EBF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_344B359F227798DE(::System::String* a1, ::Class_2_C26FCB07100301D1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_C26FCB07100301D1*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_344B359F227798DE_OFFSET))(this, a1, a2);
	}

	::RPG::Client::BAPartVariantRes* Method_1_3FC36300A487DAD3(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2, ::RPG::Client::AssemNPC* a3)
	{
		return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_3FC36300A487DAD3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8EF9C22EDBC87DA7(::System::String* a1, ::RPG::Client::BAPartVariantRes* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_8EF9C22EDBC87DA7_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AssemNPC* Method_1_BE1CA9B7BEFE93CB(::System::String* a1)
	{
		return ((::RPG::Client::AssemNPC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_BE1CA9B7BEFE93CB_OFFSET))(this, a1);
	}

	::Class_1_845DEA7341FE0085* Method_1_444E41890AF6E3D9(::System::String* a1)
	{
		return ((::Class_1_845DEA7341FE0085*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_444E41890AF6E3D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_SET_TIMESCALE_OFFSET))(this, a1);
	}

	::RPG::Client::Subway::AirlineSubwayWay* Method_1_348EDD8F6EA646AC()
	{
		return ((::RPG::Client::Subway::AirlineSubwayWay*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_348EDD8F6EA646AC_OFFSET))(this);
	}

	::System::Boolean Method_1_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC5A5764D87DC25_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}
};
