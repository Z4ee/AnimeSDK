#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_934291CCF12CB02E_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x13F6F7B0)
#define CLASS_1_934291CCF12CB02E_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13F6F7C0)
#define CLASS_1_934291CCF12CB02E__CTOR_OFFSET UNITYSDK_OFFSET(0x13F6F6C0)

inline static constexpr unsigned int Class_1_934291CCF12CB02E_TypeDefinitionIndex = 77606;

class Class_1_934291CCF12CB02E : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934291CCF12CB02E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_934291CCF12CB02E_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_934291CCF12CB02E_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
