#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_0ACD750B03AB21B7_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1656EA20)
#define CLASS_1_0ACD750B03AB21B7_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x1656E7F0)
#define CLASS_1_0ACD750B03AB21B7_METHOD_1_1199693281FD42B5_OFFSET UNITYSDK_OFFSET(0x1656E740)
#define CLASS_1_0ACD750B03AB21B7_METHOD_1_D9767523F83272CD_OFFSET UNITYSDK_OFFSET(0x1656E640)
#define CLASS_1_0ACD750B03AB21B7_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1656EA30)
#define CLASS_1_0ACD750B03AB21B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1656E7E0)

inline static constexpr unsigned int Class_1_0ACD750B03AB21B7_TypeDefinitionIndex = 63003;

class Class_1_0ACD750B03AB21B7 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x10
	::RPG::Client::MapMappingInfoData* KHDMDJELPPL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACD750B03AB21B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D9767523F83272CD(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_0ACD750B03AB21B7_METHOD_1_D9767523F83272CD_OFFSET))(this, a1);
	}

	static ::Class_1_0ACD750B03AB21B7* Method_1_1199693281FD42B5(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::Class_1_0ACD750B03AB21B7*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_0ACD750B03AB21B7_METHOD_1_1199693281FD42B5_OFFSET))(a1);
	}

	::System::UInt32 get_IconType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACD750B03AB21B7_GET_ICONTYPE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ACD750B03AB21B7_GET_ENTITY_OFFSET))(this);
	}

	::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0ACD750B03AB21B7_SET_ENTITY_OFFSET))(this, a1);
	}
};
