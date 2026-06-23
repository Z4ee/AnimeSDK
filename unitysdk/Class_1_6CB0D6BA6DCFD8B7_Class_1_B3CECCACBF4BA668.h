#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

class Class_1_6CB0D6BA6DCFD8B7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_B3CECCACBF4BA668_METHOD_1_6A8B5268F1AAAD7E_OFFSET UNITYSDK_OFFSET(0x12DEF7A0)
#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_B3CECCACBF4BA668_METHOD_1_71A43A5744957BCA_OFFSET UNITYSDK_OFFSET(0x12DEF770)
#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_B3CECCACBF4BA668__CTOR_OFFSET UNITYSDK_OFFSET(0x12DEF760)

inline static constexpr unsigned int Class_1_6CB0D6BA6DCFD8B7_Class_1_B3CECCACBF4BA668_TypeDefinitionIndex = 53018;

class Class_1_6CB0D6BA6DCFD8B7_Class_1_B3CECCACBF4BA668 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Field_1_1; // 0x10
	::Class_1_6CB0D6BA6DCFD8B7* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_B3CECCACBF4BA668__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_71A43A5744957BCA(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_B3CECCACBF4BA668_METHOD_1_71A43A5744957BCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A8B5268F1AAAD7E(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_B3CECCACBF4BA668_METHOD_1_6A8B5268F1AAAD7E_OFFSET))(this, a1, a2);
	}
};
