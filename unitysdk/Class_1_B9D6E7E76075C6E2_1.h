#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E75A6F37EAB58DE_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9D6E7E76075C6E2_1_GET_LONGTERMREWARDS_OFFSET UNITYSDK_OFFSET(0x158EABB0)
#define CLASS_1_B9D6E7E76075C6E2_1_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x158EA8E0)
#define CLASS_1_B9D6E7E76075C6E2_1_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x158EAB40)
#define CLASS_1_B9D6E7E76075C6E2_1_SET_LONGTERMREWARDS_OFFSET UNITYSDK_OFFSET(0x158EABC0)
#define CLASS_1_B9D6E7E76075C6E2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x158EABD0)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_1_TypeDefinitionIndex = 66971;

class Class_1_B9D6E7E76075C6E2_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE_1*>* _LongTermRewards_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_1_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_1_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE_1*>* get_LongTermRewards()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_1_GET_LONGTERMREWARDS_OFFSET))(this);
	}

	::System::Void set_LongTermRewards(::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_1_SET_LONGTERMREWARDS_OFFSET))(this, a1);
	}
};
