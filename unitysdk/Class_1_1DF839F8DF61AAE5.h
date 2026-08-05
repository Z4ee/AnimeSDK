#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1DF839F8DF61AAE5_METHOD_1_70EC25D431C0B00F_OFFSET UNITYSDK_OFFSET(0x1877B3C0)
#define CLASS_1_1DF839F8DF61AAE5_METHOD_1_9C785F234CCEC543_OFFSET UNITYSDK_OFFSET(0x1877B730)
#define CLASS_1_1DF839F8DF61AAE5_METHOD_1_D9421EA578A08207_OFFSET UNITYSDK_OFFSET(0x1877B430)

inline static constexpr unsigned int Class_1_1DF839F8DF61AAE5_TypeDefinitionIndex = 74302;

class Class_1_1DF839F8DF61AAE5 : public ::System::Object
{
public:
	static ::System::Void Method_1_70EC25D431C0B00F(::MonoUITableScrollV2* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MonoUITableScrollV2*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1DF839F8DF61AAE5_METHOD_1_70EC25D431C0B00F_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_1_9C785F234CCEC543(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1DF839F8DF61AAE5_METHOD_1_9C785F234CCEC543_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_1_D9421EA578A08207(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1DF839F8DF61AAE5_METHOD_1_D9421EA578A08207_OFFSET))(a1, a2, a3);
	}
};
