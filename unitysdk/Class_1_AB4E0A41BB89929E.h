#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ECE22A074BA4D58D;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_AB4E0A41BB89929E_GET_DAY_OFFSET UNITYSDK_OFFSET(0x18F6BB70)
#define CLASS_1_AB4E0A41BB89929E_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x18F6BB80)
#define CLASS_1_AB4E0A41BB89929E__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6BB60)

inline static constexpr unsigned int Class_1_AB4E0A41BB89929E_TypeDefinitionIndex = 79741;

class Class_1_AB4E0A41BB89929E : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_ECE22A074BA4D58D*>* _Entries_k__BackingField; // 0x10
	::System::UInt32 _Day_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_ECE22A074BA4D58D*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_ECE22A074BA4D58D*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB4E0A41BB89929E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_Day()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4E0A41BB89929E_GET_DAY_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_ECE22A074BA4D58D*>* get_Entries()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_ECE22A074BA4D58D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4E0A41BB89929E_GET_ENTRIES_OFFSET))(this);
	}
};
