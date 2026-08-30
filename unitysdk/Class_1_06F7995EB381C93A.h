#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_32;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_06F7995EB381C93A_CLEAR_OFFSET UNITYSDK_OFFSET(0xCD1D310)
#define CLASS_1_06F7995EB381C93A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD1D620)
#define CLASS_1_06F7995EB381C93A__CTOR_OFFSET UNITYSDK_OFFSET(0xCD1D690)

inline static constexpr unsigned int Class_1_06F7995EB381C93A_TypeDefinitionIndex = 67552;

class Class_1_06F7995EB381C93A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* IENDLNEPDBB; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* AHHGCGNNOCC; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* KNIGNIIIBIE; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* EEKLCEMHPDP; // 0x28
	::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_32*>* KDNCHAPIFME; // 0x30
	::System::UInt32 EHCDPMAMHGK; // 0x38
	::System::UInt32 NDPOIKOIFFM; // 0x3C
	::System::UInt32 JDPPODLLEAN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06F7995EB381C93A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06F7995EB381C93A_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06F7995EB381C93A_DISPOSE_OFFSET))(this);
	}
};
