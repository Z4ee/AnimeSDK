#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_77D02A7DE467F6F0.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C260E5F602A0806D_METHOD_1_8CE0803574BB66D7_1_OFFSET UNITYSDK_OFFSET(0x14DD6CB0)
#define CLASS_1_C260E5F602A0806D_METHOD_1_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x14DD6C20)
#define CLASS_1_C260E5F602A0806D_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14DD6A30)
#define CLASS_1_C260E5F602A0806D_METHOD_1_CA9DD86DD9CEFC0E_OFFSET UNITYSDK_OFFSET(0x14DD6AA0)
#define CLASS_1_C260E5F602A0806D__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD69D0)

inline static constexpr unsigned int Class_1_C260E5F602A0806D_TypeDefinitionIndex = 72308;

class Class_1_C260E5F602A0806D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_77D02A7DE467F6F0>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C260E5F602A0806D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C260E5F602A0806D_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_CA9DD86DD9CEFC0E(::System::Collections::Generic::IList_1<::Struct_2_A47ACAABA9AAFE92>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Struct_2_A47ACAABA9AAFE92>*))((::PBYTE)hIl2Cpp + CLASS_1_C260E5F602A0806D_METHOD_1_CA9DD86DD9CEFC0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CE0803574BB66D7(::Struct_2_77D02A7DE467F6F0 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_77D02A7DE467F6F0))((::PBYTE)hIl2Cpp + CLASS_1_C260E5F602A0806D_METHOD_1_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CE0803574BB66D7_1(::Struct_2_77D02A7DE467F6F0 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_77D02A7DE467F6F0))((::PBYTE)hIl2Cpp + CLASS_1_C260E5F602A0806D_METHOD_1_8CE0803574BB66D7_1_OFFSET))(this, a1);
	}
};
