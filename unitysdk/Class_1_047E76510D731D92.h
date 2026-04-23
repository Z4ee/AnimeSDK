#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_36399DCF74B23261.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_047E76510D731D92__CTOR_OFFSET UNITYSDK_OFFSET(0xECC0370)

inline static constexpr unsigned int Class_1_047E76510D731D92_TypeDefinitionIndex = 53255;

class Class_1_047E76510D731D92 : public ::System::Object
{
public:
	::Struct_2_36399DCF74B23261 Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_1_2; // 0x28
	::System::String* Field_1_0; // 0x30
	::Struct_2_36399DCF74B23261 Field_1_4; // 0x38
	::Struct_2_36399DCF74B23261 Field_1_3; // 0x50
	::RPG::GameCore::TaskContext* Field_1_7; // 0x68
	::Struct_2_36399DCF74B23261 Field_1_5; // 0x70
	::System::Boolean Field_1_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_047E76510D731D92__CTOR_OFFSET))(this);
	}
};
