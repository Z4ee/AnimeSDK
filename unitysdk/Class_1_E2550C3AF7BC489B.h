#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E2550C3AF7BC489B_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x9BCBD90)
#define CLASS_1_E2550C3AF7BC489B_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x9BCBBE0)
#define CLASS_1_E2550C3AF7BC489B_METHOD_1_C21F0C1F7C280806_OFFSET UNITYSDK_OFFSET(0x9BCBAE0)
#define CLASS_1_E2550C3AF7BC489B_METHOD_1_E7B4C3778DD6D6A7_OFFSET UNITYSDK_OFFSET(0x9BCBA50)
#define CLASS_1_E2550C3AF7BC489B_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x9BCBDA0)
#define CLASS_1_E2550C3AF7BC489B__CTOR_OFFSET UNITYSDK_OFFSET(0x9BCBBD0)

inline static constexpr unsigned int Class_1_E2550C3AF7BC489B_TypeDefinitionIndex = 57970;

class Class_1_E2550C3AF7BC489B : public ::System::Object
{
public:
	::RPG::Client::MapMappingInfoData* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2550C3AF7BC489B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7B4C3778DD6D6A7(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_E2550C3AF7BC489B_METHOD_1_E7B4C3778DD6D6A7_OFFSET))(this, a1);
	}

	static ::Class_1_E2550C3AF7BC489B* Method_1_C21F0C1F7C280806(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::Class_1_E2550C3AF7BC489B*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_E2550C3AF7BC489B_METHOD_1_C21F0C1F7C280806_OFFSET))(a1);
	}

	::System::UInt32 get_IconType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2550C3AF7BC489B_GET_ICONTYPE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2550C3AF7BC489B_GET_ENTITY_OFFSET))(this);
	}

	::System::Void set_Entity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E2550C3AF7BC489B_SET_ENTITY_OFFSET))(this, value);
	}
};
