#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_FD0167EB507B9435_8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x881A120)
#define CLASS_2_FD0167EB507B9435_8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x881A160)
#define CLASS_2_FD0167EB507B9435_8___C__GET_PROPERTYTYPES_B__3_0_OFFSET UNITYSDK_OFFSET(0x881A170)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_8___c_TypeDefinitionIndex = 52801;

class Class_2_FD0167EB507B9435_8___c : public ::System::Object
{
public:
	static ::Class_2_FD0167EB507B9435_8___c** StaticGet___9()
	{
		return (::Class_2_FD0167EB507B9435_8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD0167EB507B9435_8___c_TypeDefinitionIndex)->GetStaticField(0x48BD0);
	}
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::AvatarPropertyType>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD0167EB507B9435_8___c_TypeDefinitionIndex)->GetStaticField(0x48BD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarPropertyType _get_PropertyTypes_b__3_0(::System::UInt32 x)
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8___C__GET_PROPERTYTYPES_B__3_0_OFFSET))(this, x);
	}
};
