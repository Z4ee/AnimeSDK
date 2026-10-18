#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1652F9EBC7E914D9;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_581762AE8CB44C88_CLASS_1_F7D5EE28D668399A_GET_ISPROGRESSMET_OFFSET UNITYSDK_OFFSET(0x15F24550)
#define CLASS_1_581762AE8CB44C88_CLASS_1_F7D5EE28D668399A_SET_ISPROGRESSMET_OFFSET UNITYSDK_OFFSET(0x15F24560)
#define CLASS_1_581762AE8CB44C88_CLASS_1_F7D5EE28D668399A__CTOR_OFFSET UNITYSDK_OFFSET(0x15F24570)

inline static constexpr unsigned int Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A_TypeDefinitionIndex = 79439;

class Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A : public ::System::Object
{
public:
	::System::Predicate_1<::Class_1_1652F9EBC7E914D9*>* _IsProgressMet_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88_CLASS_1_F7D5EE28D668399A__CTOR_OFFSET))(this);
	}

	::System::Predicate_1<::Class_1_1652F9EBC7E914D9*>* get_IsProgressMet()
	{
		return ((::System::Predicate_1<::Class_1_1652F9EBC7E914D9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88_CLASS_1_F7D5EE28D668399A_GET_ISPROGRESSMET_OFFSET))(this);
	}

	::System::Void set_IsProgressMet(::System::Predicate_1<::Class_1_1652F9EBC7E914D9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::Class_1_1652F9EBC7E914D9*>*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88_CLASS_1_F7D5EE28D668399A_SET_ISPROGRESSMET_OFFSET))(this, a1);
	}
};
