#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7181E085C4BBA0EE_METHOD_1_EC63BBE23B4A2074_OFFSET UNITYSDK_OFFSET(0x141AD0A0)
#define CLASS_1_7181E085C4BBA0EE__CTOR_OFFSET UNITYSDK_OFFSET(0x141AD010)

inline static constexpr unsigned int Class_1_7181E085C4BBA0EE_TypeDefinitionIndex = 74121;

class Class_1_7181E085C4BBA0EE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7181E085C4BBA0EE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* Method_1_EC63BBE23B4A2074(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7181E085C4BBA0EE_METHOD_1_EC63BBE23B4A2074_OFFSET))(this, a1);
	}
};
