#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EFEAEB43E55695E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC28410)

inline static constexpr unsigned int Class_1_EFEAEB43E55695E2_TypeDefinitionIndex = 86963;

class Class_1_EFEAEB43E55695E2 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_7; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFEAEB43E55695E2__CTOR_OFFSET))(this);
	}
};
