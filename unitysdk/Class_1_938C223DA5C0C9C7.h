#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectType.h"
#include "unitysdk/System/Object.h"

class Class_1_97AF24F8EB6B0441;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_938C223DA5C0C9C7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C5FC120)
#define CLASS_1_938C223DA5C0C9C7_METHOD_1_29986BDBF21EF100_OFFSET UNITYSDK_OFFSET(0x1C5FC1B0)
#define CLASS_1_938C223DA5C0C9C7_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1C5FC310)
#define CLASS_1_938C223DA5C0C9C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FC420)

inline static constexpr unsigned int Class_1_938C223DA5C0C9C7_TypeDefinitionIndex = 40486;

class Class_1_938C223DA5C0C9C7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_97AF24F8EB6B0441*>* JJJNPLOLJGE; // 0x10
	::System::Int32 OOFOCLJKNCM; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x1C
	::RPG::GameCore::LittleGameSmartObjectType GMPGDEINODK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_938C223DA5C0C9C7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_938C223DA5C0C9C7_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_29986BDBF21EF100(::RPG::GameCore::LittleGameEntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_938C223DA5C0C9C7_METHOD_1_29986BDBF21EF100_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_938C223DA5C0C9C7_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
