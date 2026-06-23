#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_011F5F8CC4313C2D_CLASS_1_BA28808B5689C202__CTOR_OFFSET UNITYSDK_OFFSET(0x148282E0)

inline static constexpr unsigned int Class_4_011F5F8CC4313C2D_Class_1_BA28808B5689C202_TypeDefinitionIndex = 54956;

class Class_4_011F5F8CC4313C2D_Class_1_BA28808B5689C202 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D_CLASS_1_BA28808B5689C202__CTOR_OFFSET))(this);
	}
};
