#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D068D24E09EADB7D;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_CA5CFC731672CF57___C_METHOD_1_7FCA17B77E98A974_OFFSET UNITYSDK_OFFSET(0x13E183F0)
#define CLASS_3_CA5CFC731672CF57___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E183A0)
#define CLASS_3_CA5CFC731672CF57___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E183E0)

inline static constexpr unsigned int Class_3_CA5CFC731672CF57___c_TypeDefinitionIndex = 66695;

class Class_3_CA5CFC731672CF57___c : public ::System::Object
{
public:
	static ::Class_3_CA5CFC731672CF57___c** StaticGet___9()
	{
		return (::Class_3_CA5CFC731672CF57___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CA5CFC731672CF57___c_TypeDefinitionIndex)->GetStaticField(0x40550);
	}
	static ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_D068D24E09EADB7D*>>** StaticGet___9__16_0()
	{
		return (::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_D068D24E09EADB7D*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CA5CFC731672CF57___c_TypeDefinitionIndex)->GetStaticField(0x40558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7FCA17B77E98A974(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_D068D24E09EADB7D*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_D068D24E09EADB7D*>))((::PBYTE)hIl2Cpp + CLASS_3_CA5CFC731672CF57___C_METHOD_1_7FCA17B77E98A974_OFFSET))(this, a1);
	}
};
