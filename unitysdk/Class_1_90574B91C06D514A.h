#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_90574B91C06D514A_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA851670)
#define CLASS_1_90574B91C06D514A_METHOD_1_106D675CC66101BE_OFFSET UNITYSDK_OFFSET(0xA851C20)
#define CLASS_1_90574B91C06D514A_METHOD_1_41073D451257DA09_OFFSET UNITYSDK_OFFSET(0xA851CE0)
#define CLASS_1_90574B91C06D514A_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0xA851BC0)
#define CLASS_1_90574B91C06D514A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA851B20)
#define CLASS_1_90574B91C06D514A_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xA851730)
#define CLASS_1_90574B91C06D514A_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA851680)
#define CLASS_1_90574B91C06D514A__CTOR_OFFSET UNITYSDK_OFFSET(0xA851690)

inline static constexpr unsigned int Class_1_90574B91C06D514A_TypeDefinitionIndex = 60312;

class Class_1_90574B91C06D514A : public ::System::Object
{
public:
	static ::Class_1_90574B91C06D514A** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_90574B91C06D514A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90574B91C06D514A_TypeDefinitionIndex)->GetStaticField(0x2CAA0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A__CTOR_OFFSET))(this);
	}

	static ::Class_1_90574B91C06D514A* get_Instance()
	{
		return ((::Class_1_90574B91C06D514A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_90574B91C06D514A* a1)
	{
		return ((::System::Void(*)(::Class_1_90574B91C06D514A*))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_SET_INSTANCE_OFFSET))(a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_106D675CC66101BE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_METHOD_1_106D675CC66101BE_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_41073D451257DA09(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_METHOD_1_41073D451257DA09_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}
};
