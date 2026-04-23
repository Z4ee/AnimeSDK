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

#define CLASS_1_0F0E59A49B342472_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99ADB80)
#define CLASS_1_0F0E59A49B342472_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x99AEB40)
#define CLASS_1_0F0E59A49B342472_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x99AEB50)
#define CLASS_1_0F0E59A49B342472_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x99AEB60)
#define CLASS_1_0F0E59A49B342472_METHOD_1_01244C5D42565CB2_OFFSET UNITYSDK_OFFSET(0x99ADD80)
#define CLASS_1_0F0E59A49B342472_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x99ADD10)
#define CLASS_1_0F0E59A49B342472_METHOD_1_2185F8A39E7E07F0_OFFSET UNITYSDK_OFFSET(0x99AE9F0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_353C4EDCC7A6E9F8_OFFSET UNITYSDK_OFFSET(0x99AE840)
#define CLASS_1_0F0E59A49B342472_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x99AEA70)
#define CLASS_1_0F0E59A49B342472_METHOD_1_4CF46725A6B2AC31_OFFSET UNITYSDK_OFFSET(0x99AE050)
#define CLASS_1_0F0E59A49B342472_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x99AD830)
#define CLASS_1_0F0E59A49B342472_METHOD_1_68C5DD35C3F86CD6_OFFSET UNITYSDK_OFFSET(0x99AE280)
#define CLASS_1_0F0E59A49B342472_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x99ADAF0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0x99AD330)
#define CLASS_1_0F0E59A49B342472_METHOD_1_D126A9270C6BEF9E_OFFSET UNITYSDK_OFFSET(0x99AE790)
#define CLASS_1_0F0E59A49B342472_METHOD_1_E57CD88B2E873CCA_OFFSET UNITYSDK_OFFSET(0x99AD780)
#define CLASS_1_0F0E59A49B342472_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x99AEB70)
#define CLASS_1_0F0E59A49B342472__CCTOR_OFFSET UNITYSDK_OFFSET(0x99AEBF0)
#define CLASS_1_0F0E59A49B342472__CTOR_OFFSET UNITYSDK_OFFSET(0x99AD120)

inline static constexpr unsigned int Class_1_0F0E59A49B342472_TypeDefinitionIndex = 55172;

class Class_1_0F0E59A49B342472 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F0E59A49B342472_TypeDefinitionIndex)->GetStaticField(0x7930);
	}
	::System::Collections::Generic::List_1<::Class_1_FD711FBD7923B1D0*>* Field_1_7; // 0x10
	::RPG::Client::AirlineBirdWay* Field_1_4; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_9; // 0x28
	::RPG::Client::AirshipBirdEmitter* Field_1_5; // 0x30
	::Class_1_FD711FBD7923B1D0* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_8; // 0x40
	::System::UInt32 Field_1_1; // 0x48
	::System::Single Field_1_3; // 0x4C

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
