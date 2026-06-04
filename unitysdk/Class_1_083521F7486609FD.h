#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_589;
class Class_1_20A9882BBF853CEE;
namespace RPG::Client { class Airline; }
namespace RPG::Client { class AirlineWay; }
namespace RPG::Client { class AirshipEmitter; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_083521F7486609FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC95C3D0)
#define CLASS_1_083521F7486609FD_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC95F050)
#define CLASS_1_083521F7486609FD_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xC95F060)
#define CLASS_1_083521F7486609FD_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xC95F080)
#define CLASS_1_083521F7486609FD_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xC95C590)
#define CLASS_1_083521F7486609FD_METHOD_1_2185F8A39E7E07F0_OFFSET UNITYSDK_OFFSET(0xC95EFD0)
#define CLASS_1_083521F7486609FD_METHOD_1_46D79C223C10A615_OFFSET UNITYSDK_OFFSET(0xC95C600)
#define CLASS_1_083521F7486609FD_METHOD_1_490334ABE01ADA18_OFFSET UNITYSDK_OFFSET(0xC95D390)
#define CLASS_1_083521F7486609FD_METHOD_1_53E30A4F2E776E4F_OFFSET UNITYSDK_OFFSET(0xC95E450)
#define CLASS_1_083521F7486609FD_METHOD_1_551239E3FC1E2EC5_OFFSET UNITYSDK_OFFSET(0xC95B9B0)
#define CLASS_1_083521F7486609FD_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xC95C310)
#define CLASS_1_083521F7486609FD_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xC95BF70)
#define CLASS_1_083521F7486609FD_METHOD_1_649752DB57469596_OFFSET UNITYSDK_OFFSET(0xC95CFD0)
#define CLASS_1_083521F7486609FD_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0xC95E8D0)
#define CLASS_1_083521F7486609FD_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xC95BCC0)
#define CLASS_1_083521F7486609FD_METHOD_1_BB103A30C7A76332_OFFSET UNITYSDK_OFFSET(0xC95F070)
#define CLASS_1_083521F7486609FD_METHOD_1_D1A8A6174E832A21_OFFSET UNITYSDK_OFFSET(0xC95E090)
#define CLASS_1_083521F7486609FD_METHOD_1_FE4B87F2E0F4BDE0_OFFSET UNITYSDK_OFFSET(0xC95E280)
#define CLASS_1_083521F7486609FD_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xC95F090)
#define CLASS_1_083521F7486609FD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC95F0A0)
#define CLASS_1_083521F7486609FD__CTOR_OFFSET UNITYSDK_OFFSET(0xC95E680)

inline static constexpr unsigned int Class_1_083521F7486609FD_TypeDefinitionIndex = 55894;

class Class_1_083521F7486609FD : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_20A9882BBF853CEE*>** StaticGet_Field_1_0()
	{
		return (::System::Comparison_1<::Class_1_20A9882BBF853CEE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_083521F7486609FD_TypeDefinitionIndex)->GetStaticField(0x68A50);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_083521F7486609FD_TypeDefinitionIndex)->GetStaticField(0x141A0);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	::Class_1_20A9882BBF853CEE* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_6; // 0x20
	::RPG::Client::AirshipEmitter* Field_1_7; // 0x28
	::RPG::Client::AirlineWay* Field_1_8; // 0x30
	::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>* Field_1_9; // 0x38
	::System::String* Field_1_10; // 0x40
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

	static ::Class_0_16E4307DCC419505_589* Method_1_551239E3FC1E2EC5(::UnityEngine::Transform* a1, ::System::UInt32 a2, ::System::String* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::Class_0_16E4307DCC419505_589*(*)(::UnityEngine::Transform*, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_551239E3FC1E2EC5_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_46D79C223C10A615(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_46D79C223C10A615_OFFSET))(this, a1);
	}

	::System::Single Method_1_FE4B87F2E0F4BDE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_FE4B87F2E0F4BDE0_OFFSET))(this, a1);
	}

	::System::Single Method_1_53E30A4F2E776E4F(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_53E30A4F2E776E4F_OFFSET))(this, a1);
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

	::System::Void Method_1_2185F8A39E7E07F0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD_METHOD_1_2185F8A39E7E07F0_OFFSET))(this, a1);
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
