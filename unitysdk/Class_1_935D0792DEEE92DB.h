#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_935D0792DEEE92DB_Struct_2_FD8E1D4014EE315F.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_7D7F702D8900BCB8;
namespace RPG::Client { class AirlineCarWay; }
namespace RPG::Client { class AirshipCarEmitter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_935D0792DEEE92DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AB5270)
#define CLASS_1_935D0792DEEE92DB_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x12AB6900)
#define CLASS_1_935D0792DEEE92DB_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x12AB6910)
#define CLASS_1_935D0792DEEE92DB_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x12AB6920)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x12AB5F70)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_0D18D5FFD7AD52E6_OFFSET UNITYSDK_OFFSET(0x12AB6AA0)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x12AB5830)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0x12AB5130)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_2185F8A39E7E07F0_OFFSET UNITYSDK_OFFSET(0x12AB6F20)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x12AB69D0)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_4418D0C08F01D8CD_OFFSET UNITYSDK_OFFSET(0x12AB6BE0)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_4B14D4A5152C402B_OFFSET UNITYSDK_OFFSET(0x12AB6CF0)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_7F6E2993A0082048_OFFSET UNITYSDK_OFFSET(0x12AB64A0)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_81788F9B13AF1B61_OFFSET UNITYSDK_OFFSET(0x12AB53D0)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x12AB57A0)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_8A2905DAFB806E28_OFFSET UNITYSDK_OFFSET(0x12AB58A0)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_BC7B8FCB58B5128D_OFFSET UNITYSDK_OFFSET(0x12AB6330)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_D126A9270C6BEF9E_OFFSET UNITYSDK_OFFSET(0x12AB6850)
#define CLASS_1_935D0792DEEE92DB_METHOD_1_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x12AB5460)
#define CLASS_1_935D0792DEEE92DB_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x12AB6930)
#define CLASS_1_935D0792DEEE92DB__CTOR_OFFSET UNITYSDK_OFFSET(0x12AB4F70)

inline static constexpr unsigned int Class_1_935D0792DEEE92DB_TypeDefinitionIndex = 55184;

class Class_1_935D0792DEEE92DB : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_7; // 0x18
	::RPG::Client::AirshipCarEmitter* Field_1_4; // 0x20
	::Class_1_7D7F702D8900BCB8* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::Class_1_7D7F702D8900BCB8*>* Field_1_6; // 0x30
	::RPG::Client::AirlineCarWay* Field_1_3; // 0x38
	::System::Single Field_1_2; // 0x40
	::System::UInt32 Field_1_0; // 0x44
	::System::Nullable_1<::Class_1_935D0792DEEE92DB_Struct_2_FD8E1D4014EE315F> Field_1_8; // 0x48

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_81788F9B13AF1B61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_81788F9B13AF1B61_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A2905DAFB806E28(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_8A2905DAFB806E28_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_SET_TIMESCALE_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Boolean Method_1_BC7B8FCB58B5128D(::Class_1_7D7F702D8900BCB8* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7D7F702D8900BCB8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_BC7B8FCB58B5128D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D126A9270C6BEF9E(::Class_1_7D7F702D8900BCB8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7D7F702D8900BCB8*))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_D126A9270C6BEF9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F6E2993A0082048(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_7F6E2993A0082048_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4418D0C08F01D8CD(::Class_1_7D7F702D8900BCB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D7F702D8900BCB8*))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_4418D0C08F01D8CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B14D4A5152C402B(::Class_1_7D7F702D8900BCB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D7F702D8900BCB8*))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_4B14D4A5152C402B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_D460587695D41831_OFFSET))(this);
	}

	::System::Single Method_1_0D18D5FFD7AD52E6(::System::Single a1, ::System::Int32& a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_0D18D5FFD7AD52E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_1_2185F8A39E7E07F0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_2185F8A39E7E07F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935D0792DEEE92DB_METHOD_1_1CDA0051FD244886_OFFSET))(this);
	}
};
