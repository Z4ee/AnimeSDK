#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D35BA2EA23BF8587_METHOD_1_1EE490B83659DEF5_OFFSET UNITYSDK_OFFSET(0x116C54E0)
#define CLASS_1_D35BA2EA23BF8587_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x116C5470)
#define CLASS_1_D35BA2EA23BF8587__CTOR_OFFSET UNITYSDK_OFFSET(0x116C5400)

inline static constexpr unsigned int Class_1_D35BA2EA23BF8587_TypeDefinitionIndex = 54575;

class Class_1_D35BA2EA23BF8587 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D35BA2EA23BF8587__CTOR_OFFSET))(this, a1);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35BA2EA23BF8587_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_1EE490B83659DEF5()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35BA2EA23BF8587_METHOD_1_1EE490B83659DEF5_OFFSET))(this);
	}
};
