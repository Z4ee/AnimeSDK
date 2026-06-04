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

#define CLASS_1_769DF96AB27589D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1362A6C0)
#define CLASS_1_769DF96AB27589D7_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1362B7A0)
#define CLASS_1_769DF96AB27589D7_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1362B7B0)
#define CLASS_1_769DF96AB27589D7_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1362B7C0)
#define CLASS_1_769DF96AB27589D7_METHOD_1_1588CC8352F055BF_OFFSET UNITYSDK_OFFSET(0x1362AEC0)
#define CLASS_1_769DF96AB27589D7_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1362A880)
#define CLASS_1_769DF96AB27589D7_METHOD_1_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x1362A8F0)
#define CLASS_1_769DF96AB27589D7_METHOD_1_2185F8A39E7E07F0_OFFSET UNITYSDK_OFFSET(0x1362B660)
#define CLASS_1_769DF96AB27589D7_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1362B6E0)
#define CLASS_1_769DF96AB27589D7_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x1362A600)
#define CLASS_1_769DF96AB27589D7_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x1362A340)
#define CLASS_1_769DF96AB27589D7_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x13629D90)
#define CLASS_1_769DF96AB27589D7_METHOD_1_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x1362A290)
#define CLASS_1_769DF96AB27589D7_METHOD_1_D126A9270C6BEF9E_OFFSET UNITYSDK_OFFSET(0x1362B3E0)
#define CLASS_1_769DF96AB27589D7_METHOD_1_DA94D9FE845D8B42_OFFSET UNITYSDK_OFFSET(0x1362ABC0)
#define CLASS_1_769DF96AB27589D7_METHOD_1_FE4B87F2E0F4BDE0_OFFSET UNITYSDK_OFFSET(0x1362B490)
#define CLASS_1_769DF96AB27589D7_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1362B7D0)
#define CLASS_1_769DF96AB27589D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1362B850)
#define CLASS_1_769DF96AB27589D7__CTOR_OFFSET UNITYSDK_OFFSET(0x13629B40)

inline static constexpr unsigned int Class_1_769DF96AB27589D7_TypeDefinitionIndex = 55906;

class Class_1_769DF96AB27589D7 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_769DF96AB27589D7_TypeDefinitionIndex)->GetStaticField(0xD7E0);
	}
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_1; // 0x10
	::Class_1_FD711FBD7923B1D0* Field_1_2; // 0x18
	::RPG::Client::AirshipBirdEmitter* Field_1_3; // 0x20
	::System::String* Field_1_4; // 0x28
	::RPG::Client::AirlineBirdWay* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_FD711FBD7923B1D0*>* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_7; // 0x40
	::System::Single Field_1_8; // 0x48
	::System::UInt32 Field_1_9; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7__CCTOR_OFFSET))();
	}

	::System::Void Method_1_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C409C2CC83887DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_1C409C2CC83887DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_1588CC8352F055BF(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_1588CC8352F055BF_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FE4B87F2E0F4BDE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_FE4B87F2E0F4BDE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DA94D9FE845D8B42(::Class_1_FD711FBD7923B1D0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD711FBD7923B1D0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_DA94D9FE845D8B42_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D126A9270C6BEF9E(::Class_1_FD711FBD7923B1D0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD711FBD7923B1D0*))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_D126A9270C6BEF9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_2185F8A39E7E07F0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_2185F8A39E7E07F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_769DF96AB27589D7_SET_TIMESCALE_OFFSET))(this, a1);
	}
};
