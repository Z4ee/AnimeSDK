#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D4199A51D677042_CLASS_1_EDB1B2AFE5C288BF__CTOR_OFFSET UNITYSDK_OFFSET(0x171A0450)

inline static constexpr unsigned int Class_1_3D4199A51D677042_Class_1_EDB1B2AFE5C288BF_TypeDefinitionIndex = 44799;

class Class_1_3D4199A51D677042_Class_1_EDB1B2AFE5C288BF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3D4199A51D677042_CLASS_1_EDB1B2AFE5C288BF__CTOR_OFFSET))(this, a1, a2);
	}
};
