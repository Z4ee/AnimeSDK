#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_624;
class Class_1_20A9882BBF853CEE;
namespace RPG::Client { class Airline; }
namespace RPG::Client { class AirlineWay; }
namespace RPG::Client { class AirshipEmitter; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_083521F7486609FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B6A4B0)
#define CLASS_1_083521F7486609FD_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16B6D500)
#define CLASS_1_083521F7486609FD_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x16B6D510)
#define CLASS_1_083521F7486609FD_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x16B6D530)
#define CLASS_1_083521F7486609FD_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x16B6A670)
#define CLASS_1_083521F7486609FD_METHOD_1_294929481D0125B4_OFFSET UNITYSDK_OFFSET(0x16B6C820)
#define CLASS_1_083521F7486609FD_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x16B69CA0)
#define CLASS_1_083521F7486609FD_METHOD_1_490334ABE01ADA18_OFFSET UNITYSDK_OFFSET(0x16B6B4F0)
#define CLASS_1_083521F7486609FD_METHOD_1_551239E3FC1E2EC5_OFFSET UNITYSDK_OFFSET(0x16B698F0)
#define CLASS_1_083521F7486609FD_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x16B6A3F0)
#define CLASS_1_083521F7486609FD_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x16B6A040)
#define CLASS_1_083521F7486609FD_METHOD_1_649752DB57469596_OFFSET UNITYSDK_OFFSET(0x16B6B140)
#define CLASS_1_083521F7486609FD_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x16B6CD50)
#define CLASS_1_083521F7486609FD_METHOD_1_7787CB3AD5CF0BB7_OFFSET UNITYSDK_OFFSET(0x16B6A6E0)
#define CLASS_1_083521F7486609FD_METHOD_1_BB103A30C7A76332_OFFSET UNITYSDK_OFFSET(0x16B6D520)
#define CLASS_1_083521F7486609FD_METHOD_1_BBB8FCAD1EBA0BCF_OFFSET UNITYSDK_OFFSET(0x16B6C590)
#define CLASS_1_083521F7486609FD_METHOD_1_D1A8A6174E832A21_OFFSET UNITYSDK_OFFSET(0x16B6C3A0)
#define CLASS_1_083521F7486609FD_METHOD_1_EE97EFC752A55D2E_OFFSET UNITYSDK_OFFSET(0x16B6D450)
#define CLASS_1_083521F7486609FD_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x16B6D540)
#define CLASS_1_083521F7486609FD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B6D550)
#define CLASS_1_083521F7486609FD__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6CAF0)

inline static constexpr unsigned int Class_1_083521F7486609FD_TypeDefinitionIndex = 57133;

class Class_1_083521F7486609FD : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_20A9882BBF853CEE*>** StaticGet_Field_1_0()
	{
		return (::System::Comparison_1<::Class_1_20A9882BBF853CEE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_083521F7486609FD_TypeDefinitionIndex)->GetStaticField(0x5FED0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_083521F7486609FD_TypeDefinitionIndex)->GetStaticField(0x126D0);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_4; // 0x10
	::RPG::Client::AirlineWay* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>* Field_1_7; // 0x28
	::RPG::Client::AirshipEmitter* Field_1_8; // 0x30
	::System::String* Field_1_9; // 0x38
	::Class_1_20A9882BBF853CEE* Field_1_10; // 0x40
	::System::Single _TimeScale_k__BackingField; // 0x48
	::System::UInt32 Field_1_12; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_624* Method_1_551239E3FC1E2EC5(::UnityEngine::Transform* a1, ::System::UInt32 a2, ::System::String* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::Class_0_16E4307DCC419505_624*(*)(::UnityEngine::Transform*, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_551239E3FC1E2EC5_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_7787CB3AD5CF0BB7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_7787CB3AD5CF0BB7_OFFSET))(this, a1);
	}

	::System::Single Method_1_BBB8FCAD1EBA0BCF(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_BBB8FCAD1EBA0BCF_OFFSET))(this, a1);
	}

	::System::Single Method_1_294929481D0125B4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_294929481D0125B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_490334ABE01ADA18(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_490334ABE01ADA18_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_649752DB57469596(::Class_1_20A9882BBF853CEE* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20A9882BBF853CEE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_649752DB57469596_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D1A8A6174E832A21(::Class_1_20A9882BBF853CEE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20A9882BBF853CEE*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_D1A8A6174E832A21_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_EE97EFC752A55D2E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_EE97EFC752A55D2E_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_GET_PREFABPATH_OFFSET))(this);
	}

	::RPG::Client::Airline* Method_1_BB103A30C7A76332()
	{
		return ((::RPG::Client::Airline*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_BB103A30C7A76332_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_SET_TIMESCALE_OFFSET))(this, a1);
	}
};
