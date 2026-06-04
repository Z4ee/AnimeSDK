#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_688;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1B569C1D822105CC_1_METHOD_1_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0x14171150)
#define CLASS_1_1B569C1D822105CC_1_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x14171070)
#define CLASS_1_1B569C1D822105CC_1_METHOD_1_914776014D7A0A2E_OFFSET UNITYSDK_OFFSET(0x141711E0)
#define CLASS_1_1B569C1D822105CC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14171480)

inline static constexpr unsigned int Class_1_1B569C1D822105CC_1_TypeDefinitionIndex = 58492;

class Class_1_1B569C1D822105CC_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_688*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B569C1D822105CC_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_688* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_688*))((::PBYTE)hIl2Cpp + CLASS_1_1B569C1D822105CC_1_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FED925376FD83FF(::Class_0_16E4307DCC419505_688* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_688*))((::PBYTE)hIl2Cpp + CLASS_1_1B569C1D822105CC_1_METHOD_1_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_914776014D7A0A2E(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_1B569C1D822105CC_1_METHOD_1_914776014D7A0A2E_OFFSET))(this, a1);
	}
};
