#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_09BA741879A02AC6.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_303;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_E44AC298AEF61426___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x87268E0)
#define CLASS_3_E44AC298AEF61426___C__CLEARMESSAGESBEFORE_B__20_0_OFFSET UNITYSDK_OFFSET(0x8726950)
#define CLASS_3_E44AC298AEF61426___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8726920)
#define CLASS_3_E44AC298AEF61426___C__FETCHINPUTNOTIFYMESSAGE_B__33_0_OFFSET UNITYSDK_OFFSET(0x8726970)
#define CLASS_3_E44AC298AEF61426___C___BUILDPLAYERDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x8726930)

inline static constexpr unsigned int Class_3_E44AC298AEF61426___c_TypeDefinitionIndex = 62323;

class Class_3_E44AC298AEF61426___c : public ::System::Object
{
public:
	static ::Class_3_E44AC298AEF61426___c** StaticGet___9()
	{
		return (::Class_3_E44AC298AEF61426___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E44AC298AEF61426___c_TypeDefinitionIndex)->GetStaticField(0x1A460);
	}
	static ::System::Func_3<::Struct_2_09BA741879A02AC6, ::System::UInt64, ::System::Boolean>** StaticGet___9__20_0()
	{
		return (::System::Func_3<::Struct_2_09BA741879A02AC6, ::System::UInt64, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E44AC298AEF61426___c_TypeDefinitionIndex)->GetStaticField(0x1A468);
	}
	static ::System::Func_4<::Struct_2_09BA741879A02AC6, ::System::UInt16, ::System::UInt16, ::System::Boolean>** StaticGet___9__33_0()
	{
		return (::System::Func_4<::Struct_2_09BA741879A02AC6, ::System::UInt16, ::System::UInt16, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E44AC298AEF61426___c_TypeDefinitionIndex)->GetStaticField(0x1A470);
	}
	static ::System::Func_2<::Class_1_FA4F4A67B1C04320_303*, ::System::UInt32>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::Class_1_FA4F4A67B1C04320_303*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E44AC298AEF61426___c_TypeDefinitionIndex)->GetStaticField(0x1A478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __BuildPlayerData_b__7_0(::Class_1_FA4F4A67B1C04320_303* x)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_303*))((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C___BUILDPLAYERDATA_B__7_0_OFFSET))(this, x);
	}

	::System::Boolean _ClearMessagesBefore_b__20_0(::Struct_2_09BA741879A02AC6 msg, ::System::UInt64 sid)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_09BA741879A02AC6, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C__CLEARMESSAGESBEFORE_B__20_0_OFFSET))(this, msg, sid);
	}

	::System::Boolean _FetchInputNotifyMessage_b__33_0(::Struct_2_09BA741879A02AC6 msg, ::System::UInt16 swapCid, ::System::UInt16 useItemCid)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_09BA741879A02AC6, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_3_E44AC298AEF61426___C__FETCHINPUTNOTIFYMESSAGE_B__33_0_OFFSET))(this, msg, swapCid, useItemCid);
	}
};
