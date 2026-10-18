#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/Struct_2_36399DCF74B23261.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_812813014E8C3777_CLEAR_OFFSET UNITYSDK_OFFSET(0xB8AD230)
#define CLASS_1_812813014E8C3777__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AD2A0)

inline static constexpr unsigned int Class_1_812813014E8C3777_TypeDefinitionIndex = 57756;

class Class_1_812813014E8C3777 : public ::System::Object
{
public:
	::Struct_2_36399DCF74B23261 FMIINGDFPKN; // 0x10
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* DMFMNGOGDOH; // 0x28
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x30
	::Struct_2_36399DCF74B23261 KIPAGNCANAJ; // 0x38
	::System::String* KKPCDKKLMIO; // 0x50
	::Struct_2_36399DCF74B23261 LKFNPPCHCII; // 0x58
	::Struct_2_36399DCF74B23261 CFKOIAGCFDA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_812813014E8C3777__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_812813014E8C3777_CLEAR_OFFSET))(this);
	}
};
