#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"

class Class_1_A49494282F3F2BD0;
namespace System { class String; }

#define CLASS_1_72677B87675A3398_GET_ATTRIBUTELEVEL_OFFSET UNITYSDK_OFFSET(0xBC00D10)
#define CLASS_1_72677B87675A3398_GET_MESHJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBC00D30)
#define CLASS_1_72677B87675A3398_GET_PARTTYPE_OFFSET UNITYSDK_OFFSET(0xBC00D20)
#define CLASS_1_72677B87675A3398__CTOR_OFFSET UNITYSDK_OFFSET(0xBC00D40)

inline static constexpr unsigned int Class_1_72677B87675A3398_TypeDefinitionIndex = 80130;

class Class_1_72677B87675A3398 : public ::System::Object
{
public:
	::System::String* _MeshJsonConfigPath_k__BackingField; // 0x10
	::System::UInt32 _AttributeLevel_k__BackingField; // 0x18
	::RPG::Client::MechCraft::MechCraftPartType _PartType_k__BackingField; // 0x1C

	::System::Void _ctor(::Class_1_A49494282F3F2BD0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A49494282F3F2BD0*))((::PBYTE)hIl2Cpp + CLASS_1_72677B87675A3398__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_AttributeLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72677B87675A3398_GET_ATTRIBUTELEVEL_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftPartType get_PartType()
	{
		return ((::RPG::Client::MechCraft::MechCraftPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72677B87675A3398_GET_PARTTYPE_OFFSET))(this);
	}

	::System::String* get_MeshJsonConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72677B87675A3398_GET_MESHJSONCONFIGPATH_OFFSET))(this);
	}
};
