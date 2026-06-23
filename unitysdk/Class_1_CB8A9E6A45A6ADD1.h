#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CB8A9E6A45A6ADD1_METHOD_1_15D6EC33082538CC_OFFSET UNITYSDK_OFFSET(0x1285FEC0)
#define CLASS_1_CB8A9E6A45A6ADD1_METHOD_1_29F0C11AC3FA5810_OFFSET UNITYSDK_OFFSET(0x128600F0)
#define CLASS_1_CB8A9E6A45A6ADD1_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x1285FB50)
#define CLASS_1_CB8A9E6A45A6ADD1_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x1285FD70)
#define CLASS_1_CB8A9E6A45A6ADD1_METHOD_1_C53FE14272BA6592_OFFSET UNITYSDK_OFFSET(0x1285FE60)
#define CLASS_1_CB8A9E6A45A6ADD1__CTOR_OFFSET UNITYSDK_OFFSET(0x1285FB40)

inline static constexpr unsigned int Class_1_CB8A9E6A45A6ADD1_TypeDefinitionIndex = 83010;

class Class_1_CB8A9E6A45A6ADD1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB8A9E6A45A6ADD1_TypeDefinitionIndex)->GetStaticField(0x36690);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8A9E6A45A6ADD1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CB8A9E6A45A6ADD1_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB8A9E6A45A6ADD1_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Double Method_1_C53FE14272BA6592(::System::Single a1)
	{
		return ((::System::Double(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB8A9E6A45A6ADD1_METHOD_1_C53FE14272BA6592_OFFSET))(a1);
	}

	static ::System::Double Method_1_15D6EC33082538CC(::System::Double a1)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_CB8A9E6A45A6ADD1_METHOD_1_15D6EC33082538CC_OFFSET))(a1);
	}

	static ::System::Double Method_1_29F0C11AC3FA5810(::System::Int32 a1)
	{
		return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB8A9E6A45A6ADD1_METHOD_1_29F0C11AC3FA5810_OFFSET))(a1);
	}
};
