#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_64F446B04AA329E4_CLASS_1_649009C7AFC75085__CTOR_OFFSET UNITYSDK_OFFSET(0xBDBADB0)

inline static constexpr unsigned int Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085_TypeDefinitionIndex = 75170;

class Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085 : public ::System::Object
{
public:
	::System::String* JDEMDGHJOGM; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* EJHODPJIFIN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_CLASS_1_649009C7AFC75085__CTOR_OFFSET))(this);
	}
};
