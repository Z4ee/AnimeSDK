#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C1544133DAD8D017_Struct_2_B1088F951BCB4BAD.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A944C35C433158AC_CLASS_1_A254E4613444E909_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x1142F8E0)
#define CLASS_2_A944C35C433158AC_CLASS_1_A254E4613444E909_METHOD_1_79D572573E1F9B29_OFFSET UNITYSDK_OFFSET(0x1142F3C0)
#define CLASS_2_A944C35C433158AC_CLASS_1_A254E4613444E909__CTOR_OFFSET UNITYSDK_OFFSET(0x1142F3B0)

inline static constexpr unsigned int Class_2_A944C35C433158AC_Class_1_A254E4613444E909_TypeDefinitionIndex = 47260;

class Class_2_A944C35C433158AC_Class_1_A254E4613444E909 : public ::System::Object
{
public:
	::Foundation::Variable_1<::System::UInt32> Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x28
	::System::UInt64 Field_1_1; // 0x30
	::Class_2_C1544133DAD8D017_Struct_2_B1088F951BCB4BAD Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A944C35C433158AC_CLASS_1_A254E4613444E909__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_79D572573E1F9B29(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_A944C35C433158AC_CLASS_1_A254E4613444E909_METHOD_1_79D572573E1F9B29_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A944C35C433158AC_CLASS_1_A254E4613444E909_METHOD_1_5EBCF276C230582C_OFFSET))(this);
	}
};
