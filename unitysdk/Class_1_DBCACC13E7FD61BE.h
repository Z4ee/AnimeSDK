#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DBCACC13E7FD61BE_EQUALS_OFFSET UNITYSDK_OFFSET(0x191565E0)
#define CLASS_1_DBCACC13E7FD61BE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x191565F0)
#define CLASS_1_DBCACC13E7FD61BE_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x19156590)
#define CLASS_1_DBCACC13E7FD61BE__CTOR_OFFSET UNITYSDK_OFFSET(0x191565D0)

inline static constexpr unsigned int Class_1_DBCACC13E7FD61BE_TypeDefinitionIndex = 14692;

class Class_1_DBCACC13E7FD61BE : public ::System::Object
{
public:
	static ::Class_1_DBCACC13E7FD61BE** StaticGet_Field_1_0()
	{
		return (::Class_1_DBCACC13E7FD61BE**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DBCACC13E7FD61BE_TypeDefinitionIndex)->GetStaticField(0x4A110);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBCACC13E7FD61BE__CTOR_OFFSET))(this);
	}

	static ::Class_1_DBCACC13E7FD61BE* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_DBCACC13E7FD61BE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DBCACC13E7FD61BE_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	::System::Boolean Equals(::RPG::GameCore::SpaceZooChannelType a1, ::RPG::GameCore::SpaceZooChannelType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpaceZooChannelType, ::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + CLASS_1_DBCACC13E7FD61BE_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::RPG::GameCore::SpaceZooChannelType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + CLASS_1_DBCACC13E7FD61BE_GETHASHCODE_OFFSET))(this, a1);
	}
};
