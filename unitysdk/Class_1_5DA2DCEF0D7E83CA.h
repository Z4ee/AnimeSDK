#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BubbleGraphStruct.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5DA2DCEF0D7E83CA__CTOR_OFFSET UNITYSDK_OFFSET(0x169D68C0)

inline static constexpr unsigned int Class_1_5DA2DCEF0D7E83CA_TypeDefinitionIndex = 51042;

class Class_1_5DA2DCEF0D7E83CA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::BubbleGraphStruct>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DA2DCEF0D7E83CA__CTOR_OFFSET))(this);
	}
};
