#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/Struct_2_36399DCF74B23261.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_812813014E8C3777_CLEAR_OFFSET UNITYSDK_OFFSET(0x10383A60)
#define CLASS_1_812813014E8C3777__CTOR_OFFSET UNITYSDK_OFFSET(0x10383AD0)

inline static constexpr unsigned int Class_1_812813014E8C3777_TypeDefinitionIndex = 46566;

class Class_1_812813014E8C3777 : public ::System::Object
{
public:
	::Struct_2_36399DCF74B23261 Field_1_4; // 0x10
	::Struct_2_36399DCF74B23261 Field_1_3; // 0x28
	::System::String* Field_1_0; // 0x40
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_1_1; // 0x48
	::Struct_2_36399DCF74B23261 Field_1_5; // 0x50
	::Struct_2_36399DCF74B23261 Field_1_2; // 0x68
	::RPG::GameCore::TaskContext* Field_1_6; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_812813014E8C3777__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_812813014E8C3777_CLEAR_OFFSET))(this);
	}
};
