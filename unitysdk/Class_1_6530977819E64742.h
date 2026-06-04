#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6530977819E64742_Struct_2_FD8E1D4014EE315F.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_7D7F702D8900BCB8;
namespace RPG::Client { class AirlineCarWay; }
namespace RPG::Client { class AirshipCarEmitter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_6530977819E64742_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1DF2B0)
#define CLASS_1_6530977819E64742_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC1E0A00)
#define CLASS_1_6530977819E64742_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xC1E0A10)
#define CLASS_1_6530977819E64742_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xC1E0A20)
#define CLASS_1_6530977819E64742_METHOD_1_09C12481CB5CC4F5_OFFSET UNITYSDK_OFFSET(0xC1E03D0)
#define CLASS_1_6530977819E64742_METHOD_1_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0xC1E0010)
#define CLASS_1_6530977819E64742_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xC1DF8D0)
#define CLASS_1_6530977819E64742_METHOD_1_2185F8A39E7E07F0_OFFSET UNITYSDK_OFFSET(0xC1E1010)
#define CLASS_1_6530977819E64742_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xC1E0AD0)
#define CLASS_1_6530977819E64742_METHOD_1_4418D0C08F01D8CD_OFFSET UNITYSDK_OFFSET(0xC1E0CB0)
#define CLASS_1_6530977819E64742_METHOD_1_53F8E7A039DF377D_OFFSET UNITYSDK_OFFSET(0xC1E0DC0)
#define CLASS_1_6530977819E64742_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xC1DF810)
#define CLASS_1_6530977819E64742_METHOD_1_A1094D262499AEEF_OFFSET UNITYSDK_OFFSET(0xC1E05B0)
#define CLASS_1_6530977819E64742_METHOD_1_BE5CEE4E2AED7151_OFFSET UNITYSDK_OFFSET(0xC1E0B90)
#define CLASS_1_6530977819E64742_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0xC1DF100)
#define CLASS_1_6530977819E64742_METHOD_1_D126A9270C6BEF9E_OFFSET UNITYSDK_OFFSET(0xC1E0950)
#define CLASS_1_6530977819E64742_METHOD_1_D2967792C8AA78E6_OFFSET UNITYSDK_OFFSET(0xC1DF940)
#define CLASS_1_6530977819E64742_METHOD_1_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xC1DF4D0)
#define CLASS_1_6530977819E64742_METHOD_1_F4C8B018D655630D_OFFSET UNITYSDK_OFFSET(0xC1DF440)
#define CLASS_1_6530977819E64742_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xC1E0A30)
#define CLASS_1_6530977819E64742__CTOR_OFFSET UNITYSDK_OFFSET(0xC1DEF20)

inline static constexpr unsigned int Class_1_6530977819E64742_TypeDefinitionIndex = 55918;

class Class_1_6530977819E64742 : public ::System::Object
{
public:
	::RPG::Client::AirlineCarWay* Field_1_0; // 0x10
	::RPG::Client::AirshipCarEmitter* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_7D7F702D8900BCB8*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* Field_1_4; // 0x30
	::Class_1_7D7F702D8900BCB8* Field_1_5; // 0x38
	::System::Nullable_1<::Class_1_6530977819E64742_Struct_2_FD8E1D4014EE315F> Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x4C
	::System::Single Field_1_8; // 0x50

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F4C8B018D655630D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_F4C8B018D655630D_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2967792C8AA78E6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_D2967792C8AA78E6_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_SET_TIMESCALE_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Boolean Method_1_09C12481CB5CC4F5(::Class_1_7D7F702D8900BCB8* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7D7F702D8900BCB8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_09C12481CB5CC4F5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D126A9270C6BEF9E(::Class_1_7D7F702D8900BCB8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7D7F702D8900BCB8*))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_D126A9270C6BEF9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1094D262499AEEF(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_A1094D262499AEEF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4418D0C08F01D8CD(::Class_1_7D7F702D8900BCB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D7F702D8900BCB8*))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_4418D0C08F01D8CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_53F8E7A039DF377D(::Class_1_7D7F702D8900BCB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D7F702D8900BCB8*))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_53F8E7A039DF377D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_D460587695D41831_OFFSET))(this);
	}

	::System::Single Method_1_BE5CEE4E2AED7151(::System::Single a1, ::System::Int32& a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_BE5CEE4E2AED7151_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_2185F8A39E7E07F0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_2185F8A39E7E07F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6530977819E64742_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}
};
