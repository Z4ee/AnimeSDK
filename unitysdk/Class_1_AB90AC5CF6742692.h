#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_AB90AC5CF6742692_METHOD_1_25F117323DDE7BA2_OFFSET UNITYSDK_OFFSET(0x19ACE2D0)
#define CLASS_1_AB90AC5CF6742692__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACE730)

inline static constexpr unsigned int Class_1_AB90AC5CF6742692_TypeDefinitionIndex = 67906;

class Class_1_AB90AC5CF6742692 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* GHEBJCPBHHE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB90AC5CF6742692__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25F117323DDE7BA2(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_AB90AC5CF6742692_METHOD_1_25F117323DDE7BA2_OFFSET))(this, a1);
	}
};
