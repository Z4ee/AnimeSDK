#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PointerClickForwarder; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30EDD259435FA28A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C94770)
#define CLASS_1_30EDD259435FA28A__CTOR_OFFSET UNITYSDK_OFFSET(0x14C94760)

inline static constexpr unsigned int Class_1_30EDD259435FA28A_TypeDefinitionIndex = 82892;

class Class_1_30EDD259435FA28A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::PointerClickForwarder*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::PointerClickForwarder*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::PointerClickForwarder*>*))((::PBYTE)hIl2Cpp + CLASS_1_30EDD259435FA28A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30EDD259435FA28A_DISPOSE_OFFSET))(this);
	}
};
