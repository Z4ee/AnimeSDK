#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3F053D39E8E0E58E;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_652D70B8F50DD99F___C_METHOD_1_68A74C51F6C0F76D_OFFSET UNITYSDK_OFFSET(0x18021230)
#define CLASS_3_652D70B8F50DD99F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180211E0)
#define CLASS_3_652D70B8F50DD99F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18021220)

inline static constexpr unsigned int Class_3_652D70B8F50DD99F___c_TypeDefinitionIndex = 72602;

class Class_3_652D70B8F50DD99F___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_3F053D39E8E0E58E*, ::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_3F053D39E8E0E58E*, ::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_652D70B8F50DD99F___c_TypeDefinitionIndex)->GetStaticField(0x2F030);
	}
	static ::Class_3_652D70B8F50DD99F___c** StaticGet___9()
	{
		return (::Class_3_652D70B8F50DD99F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_652D70B8F50DD99F___c_TypeDefinitionIndex)->GetStaticField(0x2F038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_652D70B8F50DD99F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_652D70B8F50DD99F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_68A74C51F6C0F76D(::Class_3_3F053D39E8E0E58E* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3F053D39E8E0E58E*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_652D70B8F50DD99F___C_METHOD_1_68A74C51F6C0F76D_OFFSET))(this, a1, a2);
	}
};
