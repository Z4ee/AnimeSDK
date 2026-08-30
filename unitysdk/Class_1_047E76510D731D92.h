#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_36399DCF74B23261.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_047E76510D731D92__CTOR_OFFSET UNITYSDK_OFFSET(0xC009890)

inline static constexpr unsigned int Class_1_047E76510D731D92_TypeDefinitionIndex = 57909;

class Class_1_047E76510D731D92 : public ::System::Object
{
public:
	::Struct_2_36399DCF74B23261 KIPAGNCANAJ; // 0x10
	::System::String* OENAMINOLLF; // 0x28
	::Struct_2_36399DCF74B23261 CFKOIAGCFDA; // 0x30
	::Struct_2_36399DCF74B23261 FMIINGDFPKN; // 0x48
	::Struct_2_36399DCF74B23261 LKFNPPCHCII; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x78
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x80
	::System::Boolean BBBAJEEMOIE; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_047E76510D731D92__CTOR_OFFSET))(this);
	}
};
