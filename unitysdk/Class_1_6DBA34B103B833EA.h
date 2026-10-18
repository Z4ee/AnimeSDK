#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6DBA34B103B833EA_EJumpMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_144A9DD221938390;
class Class_1_5DF5F62C68EF718F;
class Class_1_845DEA7341FE0085;
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

#define CLASS_1_6DBA34B103B833EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1599A8F0)
#define CLASS_1_6DBA34B103B833EA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1599D750)
#define CLASS_1_6DBA34B103B833EA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1599D760)
#define CLASS_1_6DBA34B103B833EA_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1599D770)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0x1599AA50)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_0D7F0C9DBEFD8449_OFFSET UNITYSDK_OFFSET(0x1599B450)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1599C560)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_1A86469CA55D5769_OFFSET UNITYSDK_OFFSET(0x1599CA10)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1599B180)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_218124418542E081_1_OFFSET UNITYSDK_OFFSET(0x1599CD10)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x1599CAC0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_2DEAE6053C58EA5D_OFFSET UNITYSDK_OFFSET(0x1599B610)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_344B359F227798DE_OFFSET UNITYSDK_OFFSET(0x1599D2E0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_348EDD8F6EA646AC_OFFSET UNITYSDK_OFFSET(0x1599D7E0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_3A4C786E4B0AE7E7_OFFSET UNITYSDK_OFFSET(0x1599B1E0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_3FC36300A487DAD3_OFFSET UNITYSDK_OFFSET(0x1599D410)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1599C380)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0x1599C8D0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_5C3403BF741546F5_OFFSET UNITYSDK_OFFSET(0x1599D350)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_65F7294E053E2403_OFFSET UNITYSDK_OFFSET(0x1599BF30)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_74152C5611552D8F_OFFSET UNITYSDK_OFFSET(0x1599ADA0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_84DBC0C7125E5788_OFFSET UNITYSDK_OFFSET(0x1599BCE0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_8BDEF8E4E33A99AE_OFFSET UNITYSDK_OFFSET(0x1599D1D0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_8EF9C22EDBC87DA7_OFFSET UNITYSDK_OFFSET(0x1599D4E0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x1599AC90)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1599A880)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x1599D5D0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x1599D100)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_BE1CA9B7BEFE93CB_OFFSET UNITYSDK_OFFSET(0x1599D560)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_C45728546E395EBF_OFFSET UNITYSDK_OFFSET(0x1599D260)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_D3F417E15A8F434E_OFFSET UNITYSDK_OFFSET(0x1599CF60)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1599AB90)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x1599C5D0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_DD73F9FEAA12BED6_OFFSET UNITYSDK_OFFSET(0x1599BB90)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_DFEE3E82B722BB46_OFFSET UNITYSDK_OFFSET(0x1599C6C0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_E0C330C150B01D14_OFFSET UNITYSDK_OFFSET(0x1599D080)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_E9F4574478C103DE_OFFSET UNITYSDK_OFFSET(0x1599C7F0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x1599ACF0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1599C5C0)
#define CLASS_1_6DBA34B103B833EA_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x1599C430)
#define CLASS_1_6DBA34B103B833EA_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1599D780)
#define CLASS_1_6DBA34B103B833EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1599D7F0)
#define CLASS_1_6DBA34B103B833EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1599A3B0)

inline static constexpr unsigned int Class_1_6DBA34B103B833EA_TypeDefinitionIndex = 82211;

class Class_1_6DBA34B103B833EA : public ::System::Object
{
public:
	static ::SubwayScheduleData** StaticGet_AAAPCKIEMFC()
	{
		return (::SubwayScheduleData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DBA34B103B833EA_TypeDefinitionIndex)->GetStaticField(0x5D6C0);
	}
	static ::System::Single* StaticGet_HFPDAFOFMBJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DBA34B103B833EA_TypeDefinitionIndex)->GetStaticField(0x14110);
	}
	::Class_1_5DF5F62C68EF718F* MPMDEJKKADF; // 0x10
	::RPG::Client::Subway::AirlineSubwayWay* MEHKNJJGFJL; // 0x18
	::System::String* _PrefabPath_k__BackingField; // 0x20
	::Class_1_144A9DD221938390* AFHOPNIGAEN; // 0x28
	::RPG::Client::Subway::AirshipSubwayEmitter* EAFMEEFNGMM; // 0x30
	::Class_1_144A9DD221938390* FFDAPHAOJCG; // 0x38
	::System::Collections::Generic::List_1<::Class_1_EE60750735AAF463*>* DCLHJLIMMCB; // 0x40
	::Il2CppArray<::Class_1_845DEA7341FE0085*>* GJKKJHKCFBC; // 0x48
	::System::Func_2<::Class_1_EE60750735AAF463*, ::System::Boolean>* FOGDAKKBOEB; // 0x50
	::RPG::Client::Subway::AirshipSubwayTimetable* HPGMEABEAPL; // 0x58
	::System::Single CBPJMLPBEIG; // 0x60
	::System::UInt32 _GroupID_k__BackingField; // 0x64

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_1_74152C5611552D8F(::Class_1_6DBA34B103B833EA_EJumpMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DBA34B103B833EA_EJumpMode))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_74152C5611552D8F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DEAE6053C58EA5D(::Class_1_6DBA34B103B833EA_EJumpMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DBA34B103B833EA_EJumpMode))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_2DEAE6053C58EA5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_65F7294E053E2403(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_65F7294E053E2403_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_1_3A4C786E4B0AE7E7(::Class_1_6DBA34B103B833EA_EJumpMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DBA34B103B833EA_EJumpMode))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_3A4C786E4B0AE7E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7F0C9DBEFD8449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_0D7F0C9DBEFD8449_OFFSET))(this);
	}

	::System::Void Method_1_84DBC0C7125E5788(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_84DBC0C7125E5788_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFEE3E82B722BB46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_DFEE3E82B722BB46_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E9F4574478C103DE(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_E9F4574478C103DE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_1A86469CA55D5769(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_1A86469CA55D5769_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_1_218124418542E081_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_218124418542E081_1_OFFSET))(this);
	}

	::System::Void Method_1_D3F417E15A8F434E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_D3F417E15A8F434E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD73F9FEAA12BED6(::SubwayScheduleData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::SubwayScheduleData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_DD73F9FEAA12BED6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_017C915772AE00E9_OFFSET))(this);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* Method_1_E0C330C150B01D14(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_E0C330C150B01D14_OFFSET))(this, a1, a2);
	}

	::Class_2_C26FCB07100301D1* Method_1_8BDEF8E4E33A99AE(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::BatchAnimationInstance* a3)
	{
		return ((::Class_2_C26FCB07100301D1*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_8BDEF8E4E33A99AE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C45728546E395EBF(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_C45728546E395EBF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_344B359F227798DE(::System::String* a1, ::Class_2_C26FCB07100301D1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_C26FCB07100301D1*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_344B359F227798DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C3403BF741546F5(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2, ::RPG::Client::AssemNPC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_5C3403BF741546F5_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::BAPartVariantRes* Method_1_3FC36300A487DAD3(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2, ::RPG::Client::AssemNPC* a3)
	{
		return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_3FC36300A487DAD3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8EF9C22EDBC87DA7(::System::String* a1, ::RPG::Client::BAPartVariantRes* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_8EF9C22EDBC87DA7_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AssemNPC* Method_1_BE1CA9B7BEFE93CB(::System::String* a1)
	{
		return ((::RPG::Client::AssemNPC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_BE1CA9B7BEFE93CB_OFFSET))(this, a1);
	}

	::Class_1_845DEA7341FE0085* Method_1_444E41890AF6E3D9(::System::String* a1)
	{
		return ((::Class_1_845DEA7341FE0085*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_444E41890AF6E3D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_EA3063A5CDD6F164_OFFSET))(this);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_SET_TIMESCALE_OFFSET))(this, a1);
	}

	::RPG::Client::Subway::AirlineSubwayWay* Method_1_348EDD8F6EA646AC()
	{
		return ((::RPG::Client::Subway::AirlineSubwayWay*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_348EDD8F6EA646AC_OFFSET))(this);
	}

	::System::Boolean Method_1_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBA34B103B833EA_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
