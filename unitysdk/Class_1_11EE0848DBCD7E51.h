#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_11EE0848DBCD7E51_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x1754EB80)
#define CLASS_1_11EE0848DBCD7E51_METHOD_1_672565748843F43D_OFFSET UNITYSDK_OFFSET(0x1754EB20)
#define CLASS_1_11EE0848DBCD7E51_METHOD_1_E465D0F588233D19_OFFSET UNITYSDK_OFFSET(0x1754EAC0)
#define CLASS_1_11EE0848DBCD7E51__CTOR_OFFSET UNITYSDK_OFFSET(0x1754E9D0)

inline static constexpr unsigned int Class_1_11EE0848DBCD7E51_TypeDefinitionIndex = 71209;

class Class_1_11EE0848DBCD7E51 : public ::System::Object
{
public:
	::RPG::Client::EarlyAccessContent* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_11EE0848DBCD7E51__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E465D0F588233D19(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_11EE0848DBCD7E51_METHOD_1_E465D0F588233D19_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_672565748843F43D(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_11EE0848DBCD7E51_METHOD_1_672565748843F43D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_11EE0848DBCD7E51_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}
};
