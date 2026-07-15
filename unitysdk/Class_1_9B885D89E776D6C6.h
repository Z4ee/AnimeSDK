#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CSVRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9B885D89E776D6C6_METHOD_1_FC513BFB4DDB9C61_OFFSET UNITYSDK_OFFSET(0x1B3AD5A0)
#define CLASS_1_9B885D89E776D6C6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B3AD680)
#define CLASS_1_9B885D89E776D6C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3AD540)

inline static constexpr unsigned int Class_1_9B885D89E776D6C6_TypeDefinitionIndex = 10465;

class Class_1_9B885D89E776D6C6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::CSVRow*>* Field_1_0; // 0x10
	::Il2CppArray<::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B885D89E776D6C6__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::CSVRow* Method_1_FC513BFB4DDB9C61()
	{
		return ((::RPG::GameCore::CSVRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B885D89E776D6C6_METHOD_1_FC513BFB4DDB9C61_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B885D89E776D6C6_TOSTRING_OFFSET))(this);
	}
};
