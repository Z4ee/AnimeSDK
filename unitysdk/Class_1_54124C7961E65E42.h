#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_567;
class Class_1_20A9882BBF853CEE;
namespace RPG::Client { class Airline; }
namespace RPG::Client { class AirlineWay; }
namespace RPG::Client { class AirshipEmitter; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_54124C7961E65E42_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A86EF0)
#define CLASS_1_54124C7961E65E42_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x11A89740)
#define CLASS_1_54124C7961E65E42_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x11A89750)
#define CLASS_1_54124C7961E65E42_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x11A89770)
#define CLASS_1_54124C7961E65E42_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x11A87080)
#define CLASS_1_54124C7961E65E42_METHOD_1_2185F8A39E7E07F0_OFFSET UNITYSDK_OFFSET(0x11A896C0)
#define CLASS_1_54124C7961E65E42_METHOD_1_304C5330624F30D1_OFFSET UNITYSDK_OFFSET(0x11A88D80)
#define CLASS_1_54124C7961E65E42_METHOD_1_353C4EDCC7A6E9F8_OFFSET UNITYSDK_OFFSET(0x11A88BD0)
#define CLASS_1_54124C7961E65E42_METHOD_1_45AC50C64463A52B_OFFSET UNITYSDK_OFFSET(0x11A889F0)
#define CLASS_1_54124C7961E65E42_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x11A86E80)
#define CLASS_1_54124C7961E65E42_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x11A86AE0)
#define CLASS_1_54124C7961E65E42_METHOD_1_8524B5435314C064_OFFSET UNITYSDK_OFFSET(0x11A87A20)
#define CLASS_1_54124C7961E65E42_METHOD_1_A2615A7819E13949_OFFSET UNITYSDK_OFFSET(0x11A864F0)
#define CLASS_1_54124C7961E65E42_METHOD_1_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x11A86800)
#define CLASS_1_54124C7961E65E42_METHOD_1_BB103A30C7A76332_OFFSET UNITYSDK_OFFSET(0x11A89760)
#define CLASS_1_54124C7961E65E42_METHOD_1_CF48D47ABED5EA16_OFFSET UNITYSDK_OFFSET(0x11A89150)
#define CLASS_1_54124C7961E65E42_METHOD_1_DEB7D04EE9D67260_OFFSET UNITYSDK_OFFSET(0x11A870F0)
#define CLASS_1_54124C7961E65E42_METHOD_1_E139941024233CAD_OFFSET UNITYSDK_OFFSET(0x11A87CE0)
#define CLASS_1_54124C7961E65E42_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x11A89780)
#define CLASS_1_54124C7961E65E42__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A89790)
#define CLASS_1_54124C7961E65E42__CTOR_OFFSET UNITYSDK_OFFSET(0x11A88F60)

inline static constexpr unsigned int Class_1_54124C7961E65E42_TypeDefinitionIndex = 55160;

class Class_1_54124C7961E65E42 : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_20A9882BBF853CEE*>** StaticGet_Field_1_3()
	{
		return (::System::Comparison_1<::Class_1_20A9882BBF853CEE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54124C7961E65E42_TypeDefinitionIndex)->GetStaticField(0x3FB40);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_54124C7961E65E42_TypeDefinitionIndex)->GetStaticField(0xE4D0);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::System::String* Field_1_6; // 0x10
	::Class_1_20A9882BBF853CEE* Field_1_9; // 0x18
	::RPG::Client::AirshipEmitter* Field_1_8; // 0x20
	::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>* Field_1_10; // 0x28
	::RPG::Client::AirlineWay* Field_1_7; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_11; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_12; // 0x40
	::System::UInt32 Field_1_5; // 0x48
	::System::Single _TimeScale_k__BackingField; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_567* Method_1_A2615A7819E13949(::UnityEngine::Transform* a1, ::System::UInt32 a2, ::System::String* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::Class_0_16E4307DCC419505_567*(*)(::UnityEngine::Transform*, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_A2615A7819E13949_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEB7D04EE9D67260(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_DEB7D04EE9D67260_OFFSET))(this, a1);
	}

	::System::Single Method_1_353C4EDCC7A6E9F8(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_353C4EDCC7A6E9F8_OFFSET))(this, a1);
	}

	::System::Single Method_1_304C5330624F30D1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_304C5330624F30D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E139941024233CAD(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_E139941024233CAD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8524B5435314C064(::Class_1_20A9882BBF853CEE* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20A9882BBF853CEE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_8524B5435314C064_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_45AC50C64463A52B(::Class_1_20A9882BBF853CEE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20A9882BBF853CEE*))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_45AC50C64463A52B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF48D47ABED5EA16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_CF48D47ABED5EA16_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_2185F8A39E7E07F0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_2185F8A39E7E07F0_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_GET_PREFABPATH_OFFSET))(this);
	}

	::RPG::Client::Airline* Method_1_BB103A30C7A76332()
	{
		return ((::RPG::Client::Airline*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_METHOD_1_BB103A30C7A76332_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42_SET_TIMESCALE_OFFSET))(this, value);
	}
};
