#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_09BA741879A02AC6.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_2_85B856CC236C6F2C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC49460)
#define CLASS_2_85B856CC236C6F2C___C__CLEARMESSAGESBEFORE_B__14_0_OFFSET UNITYSDK_OFFSET(0xBC494B0)
#define CLASS_2_85B856CC236C6F2C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC494A0)
#define CLASS_2_85B856CC236C6F2C___C__REMOVEMESSAGE_B__15_0_OFFSET UNITYSDK_OFFSET(0xBC494C0)

inline static constexpr unsigned int Class_2_85B856CC236C6F2C___c_TypeDefinitionIndex = 76012;

class Class_2_85B856CC236C6F2C___c : public ::System::Object
{
public:
	static ::System::Func_3<::Struct_2_09BA741879A02AC6, ::System::UInt64, ::System::Boolean>** StaticGet___9__15_0()
	{
		return (::System::Func_3<::Struct_2_09BA741879A02AC6, ::System::UInt64, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_85B856CC236C6F2C___c_TypeDefinitionIndex)->GetStaticField(0x5BE70);
	}
	static ::System::Func_3<::Struct_2_09BA741879A02AC6, ::System::UInt64, ::System::Boolean>** StaticGet___9__14_0()
	{
		return (::System::Func_3<::Struct_2_09BA741879A02AC6, ::System::UInt64, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_85B856CC236C6F2C___c_TypeDefinitionIndex)->GetStaticField(0x5BE78);
	}
	static ::Class_2_85B856CC236C6F2C___c** StaticGet___9()
	{
		return (::Class_2_85B856CC236C6F2C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_85B856CC236C6F2C___c_TypeDefinitionIndex)->GetStaticField(0x5BE80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_85B856CC236C6F2C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85B856CC236C6F2C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _ClearMessagesBefore_b__14_0(::Struct_2_09BA741879A02AC6 a1, ::System::UInt64 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_09BA741879A02AC6, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_85B856CC236C6F2C___C__CLEARMESSAGESBEFORE_B__14_0_OFFSET))(this, a1, a2);
	}

	::System::Boolean _RemoveMessage_b__15_0(::Struct_2_09BA741879A02AC6 a1, ::System::UInt64 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_09BA741879A02AC6, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_85B856CC236C6F2C___C__REMOVEMESSAGE_B__15_0_OFFSET))(this, a1, a2);
	}
};
