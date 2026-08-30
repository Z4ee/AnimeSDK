#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_286;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_58F7C510A0EB2163_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C514EF0)
#define CLASS_1_58F7C510A0EB2163__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5150A0)

inline static constexpr unsigned int Class_1_58F7C510A0EB2163_TypeDefinitionIndex = 42011;

class Class_1_58F7C510A0EB2163 : public ::System::Object
{
public:
	::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean> PKDKLMCDLAE; // 0x10
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_286*>* JNKMGENNMDJ; // 0xA0
	::System::UInt32 OKEFEBGFHBB; // 0xA8
	::System::Boolean BOECFAMLMEH; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58F7C510A0EB2163__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58F7C510A0EB2163_CLEAR_OFFSET))(this);
	}
};
