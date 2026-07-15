#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_B823313B2CC4BC8E_GET_STRINGPARAMS_OFFSET UNITYSDK_OFFSET(0x15EE2E90)
#define CLASS_1_B823313B2CC4BC8E_GET_UINTPARAMS_OFFSET UNITYSDK_OFFSET(0x15EE2E80)
#define CLASS_1_B823313B2CC4BC8E__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE2EA0)

inline static constexpr unsigned int Class_1_B823313B2CC4BC8E_TypeDefinitionIndex = 61429;

class Class_1_B823313B2CC4BC8E : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _UintParams_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* _StringParams_k__BackingField; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_B823313B2CC4BC8E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_UintParams()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B823313B2CC4BC8E_GET_UINTPARAMS_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_StringParams()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B823313B2CC4BC8E_GET_STRINGPARAMS_OFFSET))(this);
	}
};
