#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_621388AFA68232D2;
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_0326872D95979B5D___C_METHOD_1_4254CDD5D6FB7516_OFFSET UNITYSDK_OFFSET(0x1B05E6A0)
#define CLASS_2_0326872D95979B5D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B05E650)
#define CLASS_2_0326872D95979B5D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B05E690)

inline static constexpr unsigned int Class_2_0326872D95979B5D___c_TypeDefinitionIndex = 8173;

class Class_2_0326872D95979B5D___c : public ::System::Object
{
public:
	static ::Class_2_0326872D95979B5D___c** StaticGet___9()
	{
		return (::Class_2_0326872D95979B5D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0326872D95979B5D___c_TypeDefinitionIndex)->GetStaticField(0x70C0);
	}
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_621388AFA68232D2*>>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_621388AFA68232D2*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0326872D95979B5D___c_TypeDefinitionIndex)->GetStaticField(0x70C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4254CDD5D6FB7516(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_621388AFA68232D2*> a1, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_621388AFA68232D2*> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_621388AFA68232D2*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_621388AFA68232D2*>))((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D___C_METHOD_1_4254CDD5D6FB7516_OFFSET))(this, a1, a2);
	}
};
