#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4D20E7B3D5ABE35_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x9945150)
#define CLASS_1_C4D20E7B3D5ABE35_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9945200)
#define CLASS_1_C4D20E7B3D5ABE35__CTOR_OFFSET UNITYSDK_OFFSET(0x9945270)

inline static constexpr unsigned int Class_1_C4D20E7B3D5ABE35_TypeDefinitionIndex = 60006;

class Class_1_C4D20E7B3D5ABE35 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* Field_1_1; // 0x10
	::RPG::Client::GridFightRole* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D20E7B3D5ABE35__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D20E7B3D5ABE35_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D20E7B3D5ABE35_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
