#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4D20E7B3D5ABE35_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x16C0D430)
#define CLASS_1_C4D20E7B3D5ABE35_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x16C0D4E0)
#define CLASS_1_C4D20E7B3D5ABE35__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0D580)

inline static constexpr unsigned int Class_1_C4D20E7B3D5ABE35_TypeDefinitionIndex = 65239;

class Class_1_C4D20E7B3D5ABE35 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* KEDCGMHGHHO; // 0x10
	::RPG::Client::GridFightRole* PGAGGENDODD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D20E7B3D5ABE35__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D20E7B3D5ABE35_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D20E7B3D5ABE35_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
