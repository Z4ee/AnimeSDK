#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_723;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4B3762E9E6279A5_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x16C95A80)
#define CLASS_1_F4B3762E9E6279A5_METHOD_1_914776014D7A0A2E_OFFSET UNITYSDK_OFFSET(0x16C95BF0)
#define CLASS_1_F4B3762E9E6279A5_METHOD_1_D1B1E19AC459D83C_OFFSET UNITYSDK_OFFSET(0x16C95B60)
#define CLASS_1_F4B3762E9E6279A5__CTOR_OFFSET UNITYSDK_OFFSET(0x16C95F30)

inline static constexpr unsigned int Class_1_F4B3762E9E6279A5_TypeDefinitionIndex = 59763;

class Class_1_F4B3762E9E6279A5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_723*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4B3762E9E6279A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_723* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_723*))((::PBYTE)hIl2Cpp + CLASS_1_F4B3762E9E6279A5_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1B1E19AC459D83C(::Class_0_16E4307DCC419505_723* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_723*))((::PBYTE)hIl2Cpp + CLASS_1_F4B3762E9E6279A5_METHOD_1_D1B1E19AC459D83C_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_914776014D7A0A2E(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F4B3762E9E6279A5_METHOD_1_914776014D7A0A2E_OFFSET))(this, a1);
	}
};
