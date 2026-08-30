#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A19B9FA10333DE11_METHOD_1_164E362B5208DDA4_OFFSET UNITYSDK_OFFSET(0x1A6BBB90)
#define CLASS_1_A19B9FA10333DE11_METHOD_1_A8FB362C5C09DA77_OFFSET UNITYSDK_OFFSET(0x1A6BBC80)
#define CLASS_1_A19B9FA10333DE11__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6BBEF0)

inline static constexpr unsigned int Class_1_A19B9FA10333DE11_TypeDefinitionIndex = 62617;

class Class_1_A19B9FA10333DE11 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_758*>* IAFNNMFIMOI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A19B9FA10333DE11__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_164E362B5208DDA4(::Il2CppArray<::Class_0_16E4307DCC419505_758*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_758*>*))((::PBYTE)hIl2Cpp + CLASS_1_A19B9FA10333DE11_METHOD_1_164E362B5208DDA4_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_A8FB362C5C09DA77(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A19B9FA10333DE11_METHOD_1_A8FB362C5C09DA77_OFFSET))(this, a1);
	}
};
