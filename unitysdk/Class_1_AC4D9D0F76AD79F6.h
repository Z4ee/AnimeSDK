#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AC4D9D0F76AD79F6_METHOD_1_1E589F4AF3E63475_OFFSET UNITYSDK_OFFSET(0x174D4F90)

inline static constexpr unsigned int Class_1_AC4D9D0F76AD79F6_TypeDefinitionIndex = 79852;

class Class_1_AC4D9D0F76AD79F6 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_1E589F4AF3E63475(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC4D9D0F76AD79F6_METHOD_1_1E589F4AF3E63475_OFFSET))(a1, a2);
	}
};
