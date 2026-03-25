#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_A9B82EC48E1E38AF_CLASS_1_C59A10619F3AB0D2__CTOR_OFFSET UNITYSDK_OFFSET(0x16B67100)

inline static constexpr unsigned int Class_1_A9B82EC48E1E38AF_Class_1_C59A10619F3AB0D2_TypeDefinitionIndex = 12078;

class Class_1_A9B82EC48E1E38AF_Class_1_C59A10619F3AB0D2 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::DynamicValue*>* Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_CLASS_1_C59A10619F3AB0D2__CTOR_OFFSET))(this, a1, a2);
	}
};
