#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_115.h"
#include "unitysdk/Class_2_15C826D7FEDBA8E8_GridFightPropertyDisplayType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class String; }

#define CLASS_2_15C826D7FEDBA8E8_METHOD_2_02006ABAC431F084_OFFSET UNITYSDK_OFFSET(0x15BA2DC0)
#define CLASS_2_15C826D7FEDBA8E8_METHOD_2_655D4C98B937D0EC_OFFSET UNITYSDK_OFFSET(0x15BA2BE0)
#define CLASS_2_15C826D7FEDBA8E8_METHOD_2_A2B1F027583587F0_OFFSET UNITYSDK_OFFSET(0x15BA2AE0)
#define CLASS_2_15C826D7FEDBA8E8_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x15BA2A90)
#define CLASS_2_15C826D7FEDBA8E8__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA3030)

inline static constexpr unsigned int Class_2_15C826D7FEDBA8E8_TypeDefinitionIndex = 65350;

class Class_2_15C826D7FEDBA8E8 : public ::Class_1_43BD383C98B4C0C5_115
{
public:
	::Class_1_2350AF62BA84EDFD* EEFMDEHLLFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C826D7FEDBA8E8__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C826D7FEDBA8E8_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_2_A2B1F027583587F0(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_15C826D7FEDBA8E8_METHOD_2_A2B1F027583587F0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_655D4C98B937D0EC(::Class_1_2670985A37556FEA* a1, ::RPG::GameCore::AvatarPropertyType& a2, ::Class_2_15C826D7FEDBA8E8_GridFightPropertyDisplayType& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::RPG::GameCore::AvatarPropertyType&, ::Class_2_15C826D7FEDBA8E8_GridFightPropertyDisplayType&))((::PBYTE)hIl2Cpp + CLASS_2_15C826D7FEDBA8E8_METHOD_2_655D4C98B937D0EC_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_02006ABAC431F084(::RPG::GameCore::AvatarPropertyType a1, ::Class_2_15C826D7FEDBA8E8_GridFightPropertyDisplayType a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::Class_2_15C826D7FEDBA8E8_GridFightPropertyDisplayType))((::PBYTE)hIl2Cpp + CLASS_2_15C826D7FEDBA8E8_METHOD_2_02006ABAC431F084_OFFSET))(this, a1, a2);
	}
};
