#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_FD0167EB507B9435_7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156F62E0)
#define CLASS_2_FD0167EB507B9435_7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156F6320)
#define CLASS_2_FD0167EB507B9435_7___C__GET_PROPERTYTYPES_B__3_0_OFFSET UNITYSDK_OFFSET(0x156F6330)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_7___c_TypeDefinitionIndex = 65077;

class Class_2_FD0167EB507B9435_7___c : public ::System::Object
{
public:
	static ::Class_2_FD0167EB507B9435_7___c** StaticGet___9()
	{
		return (::Class_2_FD0167EB507B9435_7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD0167EB507B9435_7___c_TypeDefinitionIndex)->GetStaticField(0x294A0);
	}
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::AvatarPropertyType>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD0167EB507B9435_7___c_TypeDefinitionIndex)->GetStaticField(0x294A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_7___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarPropertyType _get_PropertyTypes_b__3_0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_7___C__GET_PROPERTYTYPES_B__3_0_OFFSET))(this, a1);
	}
};
