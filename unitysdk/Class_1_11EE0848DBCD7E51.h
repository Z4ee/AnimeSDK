#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_11EE0848DBCD7E51_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15A379A0)
#define CLASS_1_11EE0848DBCD7E51_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x15A37940)
#define CLASS_1_11EE0848DBCD7E51_METHOD_1_672565748843F43D_OFFSET UNITYSDK_OFFSET(0x15A378E0)
#define CLASS_1_11EE0848DBCD7E51_METHOD_1_E465D0F588233D19_OFFSET UNITYSDK_OFFSET(0x15A37880)
#define CLASS_1_11EE0848DBCD7E51__CTOR_OFFSET UNITYSDK_OFFSET(0x15A37790)

inline static constexpr unsigned int Class_1_11EE0848DBCD7E51_TypeDefinitionIndex = 74644;

class Class_1_11EE0848DBCD7E51 : public ::System::Object
{
public:
	::RPG::Client::EarlyAccessContent* OMNPCDLLHEG; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* LLJBDMKPOGI; // 0x18

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

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11EE0848DBCD7E51_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
