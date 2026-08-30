#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1EE0518F9B7F3498__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA07F60)

inline static constexpr unsigned int Class_1_1EE0518F9B7F3498_TypeDefinitionIndex = 42142;

class Class_1_1EE0518F9B7F3498 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* JBOPGKKLDKH; // 0x10
	::System::UInt64 KELOGFMDGMO; // 0x18
	::System::UInt32 PPMHGJCKECF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EE0518F9B7F3498__CTOR_OFFSET))(this);
	}
};
