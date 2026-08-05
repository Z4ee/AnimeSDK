#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_13AC300048CDEA17__CTOR_OFFSET UNITYSDK_OFFSET(0x12323E90)

inline static constexpr unsigned int Class_1_13AC300048CDEA17_TypeDefinitionIndex = 72410;

class Class_1_13AC300048CDEA17 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13AC300048CDEA17__CTOR_OFFSET))(this);
	}
};
