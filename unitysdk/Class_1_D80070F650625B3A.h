#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D80070F650625B3A_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xB9D1910)
#define CLASS_1_D80070F650625B3A_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xB9D16F0)
#define CLASS_1_D80070F650625B3A_METHOD_1_C21F0C1F7C280806_OFFSET UNITYSDK_OFFSET(0xB9D15E0)
#define CLASS_1_D80070F650625B3A_METHOD_1_E7B4C3778DD6D6A7_OFFSET UNITYSDK_OFFSET(0xB9D1550)
#define CLASS_1_D80070F650625B3A_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0xB9D1920)
#define CLASS_1_D80070F650625B3A__CTOR_OFFSET UNITYSDK_OFFSET(0xB9D16E0)

inline static constexpr unsigned int Class_1_D80070F650625B3A_TypeDefinitionIndex = 58886;

class Class_1_D80070F650625B3A : public ::System::Object
{
public:
	::RPG::Client::MapMappingInfoData* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80070F650625B3A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7B4C3778DD6D6A7(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_D80070F650625B3A_METHOD_1_E7B4C3778DD6D6A7_OFFSET))(this, a1);
	}

	static ::Class_1_D80070F650625B3A* Method_1_C21F0C1F7C280806(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::Class_1_D80070F650625B3A*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_D80070F650625B3A_METHOD_1_C21F0C1F7C280806_OFFSET))(a1);
	}

	::System::UInt32 get_IconType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80070F650625B3A_GET_ICONTYPE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D80070F650625B3A_GET_ENTITY_OFFSET))(this);
	}

	::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D80070F650625B3A_SET_ENTITY_OFFSET))(this, a1);
	}
};
