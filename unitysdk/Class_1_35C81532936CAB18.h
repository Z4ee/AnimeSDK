#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_35C81532936CAB18_METHOD_1_434C9123FAAC94F2_OFFSET UNITYSDK_OFFSET(0xB7FA0B0)
#define CLASS_1_35C81532936CAB18_METHOD_1_FDCE57C3E05D13CE_OFFSET UNITYSDK_OFFSET(0xB7FA480)

inline static constexpr unsigned int Class_1_35C81532936CAB18_TypeDefinitionIndex = 59828;

class Class_1_35C81532936CAB18 : public ::System::Object
{
public:
	// static const ::System::String* FPLNHPOCLCE; // 0x0
	// static const ::System::String* HNGGEJAAKGD; // 0x0

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_434C9123FAAC94F2()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_35C81532936CAB18_METHOD_1_434C9123FAAC94F2_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_FDCE57C3E05D13CE()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_35C81532936CAB18_METHOD_1_FDCE57C3E05D13CE_OFFSET))();
	}
};
