#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Object.h"

class Class_1_FD711FBD7923B1D0;
namespace RPG::Client { class AirlineBirdWay; }
namespace RPG::Client { class AirshipBirdEmitter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_0F0E59A49B342472_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BCDCA0)
#define CLASS_1_0F0E59A49B342472_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10BCEC60)
#define CLASS_1_0F0E59A49B342472_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x10BCEC70)
#define CLASS_1_0F0E59A49B342472_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x10BCEC80)
#define CLASS_1_0F0E59A49B342472_METHOD_1_01244C5D42565CB2_OFFSET UNITYSDK_OFFSET(0x10BCDEA0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x10BCDE30)
#define CLASS_1_0F0E59A49B342472_METHOD_1_2185F8A39E7E07F0_OFFSET UNITYSDK_OFFSET(0x10BCEB10)
#define CLASS_1_0F0E59A49B342472_METHOD_1_353C4EDCC7A6E9F8_OFFSET UNITYSDK_OFFSET(0x10BCE960)
#define CLASS_1_0F0E59A49B342472_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10BCEB90)
#define CLASS_1_0F0E59A49B342472_METHOD_1_4CF46725A6B2AC31_OFFSET UNITYSDK_OFFSET(0x10BCE170)
#define CLASS_1_0F0E59A49B342472_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x10BCD950)
#define CLASS_1_0F0E59A49B342472_METHOD_1_68C5DD35C3F86CD6_OFFSET UNITYSDK_OFFSET(0x10BCE3A0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x10BCDC10)
#define CLASS_1_0F0E59A49B342472_METHOD_1_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0x10BCD450)
#define CLASS_1_0F0E59A49B342472_METHOD_1_D126A9270C6BEF9E_OFFSET UNITYSDK_OFFSET(0x10BCE8B0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_E57CD88B2E873CCA_OFFSET UNITYSDK_OFFSET(0x10BCD8A0)
#define CLASS_1_0F0E59A49B342472_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x10BCEC90)
#define CLASS_1_0F0E59A49B342472__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BCED10)
#define CLASS_1_0F0E59A49B342472__CTOR_OFFSET UNITYSDK_OFFSET(0x10BCD240)

inline static constexpr unsigned int Class_1_0F0E59A49B342472_TypeDefinitionIndex = 48424;

class Class_1_0F0E59A49B342472 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F0E59A49B342472_TypeDefinitionIndex)->GetStaticField(0x12D80);
	}
	::RPG::Client::AirshipBirdEmitter* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_1_FD711FBD7923B1D0*>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_8; // 0x20
	::System::String* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_9; // 0x30
	::RPG::Client::AirlineBirdWay* Field_1_4; // 0x38
	::Class_1_FD711FBD7923B1D0* Field_1_6; // 0x40
	::System::Single Field_1_3; // 0x48
	::System::UInt32 Field_1_1; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E57CD88B2E873CCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_E57CD88B2E873CCA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_01244C5D42565CB2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_01244C5D42565CB2_OFFSET))(this, a1);
	}

	::System::Void Method_1_68C5DD35C3F86CD6(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_68C5DD35C3F86CD6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_353C4EDCC7A6E9F8(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_353C4EDCC7A6E9F8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4CF46725A6B2AC31(::Class_1_FD711FBD7923B1D0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD711FBD7923B1D0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_4CF46725A6B2AC31_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D126A9270C6BEF9E(::Class_1_FD711FBD7923B1D0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD711FBD7923B1D0*))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_D126A9270C6BEF9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD28994AFE636FFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_CD28994AFE636FFF_OFFSET))(this);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_1_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_1_2185F8A39E7E07F0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_2185F8A39E7E07F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_SET_TIMESCALE_OFFSET))(this, a1);
	}
};
