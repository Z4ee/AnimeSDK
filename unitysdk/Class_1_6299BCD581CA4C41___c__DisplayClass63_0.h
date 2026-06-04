#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6299BCD581CA4C41___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA699450)
#define CLASS_1_6299BCD581CA4C41___C__DISPLAYCLASS63_0__ISTASKRESCOMPLETED_B__0_OFFSET UNITYSDK_OFFSET(0xA699720)
#define CLASS_1_6299BCD581CA4C41___C__DISPLAYCLASS63_0__ISTASKRESCOMPLETED_B__1_OFFSET UNITYSDK_OFFSET(0xA699740)

inline static constexpr unsigned int Class_1_6299BCD581CA4C41___c__DisplayClass63_0_TypeDefinitionIndex = 55742;

class Class_1_6299BCD581CA4C41___c__DisplayClass63_0 : public ::System::Object
{
public:
	::System::Predicate_1<::System::UInt32>* __9__0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* taskIds; // 0x18
	::System::Predicate_1<::System::UInt32>* __9__1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsTaskResCompleted_b__0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__DISPLAYCLASS63_0__ISTASKRESCOMPLETED_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _IsTaskResCompleted_b__1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__DISPLAYCLASS63_0__ISTASKRESCOMPLETED_B__1_OFFSET))(this, a1);
	}
};
