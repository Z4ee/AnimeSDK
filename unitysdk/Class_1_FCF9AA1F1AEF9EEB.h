#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FCF9AA1F1AEF9EEB_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x17A28400)
#define CLASS_1_FCF9AA1F1AEF9EEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A28450)

inline static constexpr unsigned int Class_1_FCF9AA1F1AEF9EEB_TypeDefinitionIndex = 63213;

class Class_1_FCF9AA1F1AEF9EEB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* KCGHDCMBLFH; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* PDMEGKJAHOA; // 0x18
	::System::UInt32 LFFCFHLMHOE; // 0x20
	::System::UInt32 HOMMGNHELHC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCF9AA1F1AEF9EEB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCF9AA1F1AEF9EEB_METHOD_1_7646FFE662147970_OFFSET))(this);
	}
};
