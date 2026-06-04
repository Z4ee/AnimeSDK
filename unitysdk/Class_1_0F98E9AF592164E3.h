#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44D5AE5377975AEE;
namespace RPG::Client::NavMap { class MappingInfoNode; }

#define CLASS_1_0F98E9AF592164E3_GET_MAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x138CEBA0)
#define CLASS_1_0F98E9AF592164E3_GET_SHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x138CEBC0)
#define CLASS_1_0F98E9AF592164E3_SET_MAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x138CEBB0)
#define CLASS_1_0F98E9AF592164E3_SET_SHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x138CEBD0)
#define CLASS_1_0F98E9AF592164E3__CTOR_OFFSET UNITYSDK_OFFSET(0x138CEBE0)

inline static constexpr unsigned int Class_1_0F98E9AF592164E3_TypeDefinitionIndex = 69631;

class Class_1_0F98E9AF592164E3 : public ::System::Object
{
public:
	::RPG::Client::NavMap::MappingInfoNode* _MappingInfoNode_k__BackingField; // 0x10
	::Class_1_44D5AE5377975AEE* _ShortestPath_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F98E9AF592164E3__CTOR_OFFSET))(this);
	}

	::RPG::Client::NavMap::MappingInfoNode* get_MappingInfoNode()
	{
		return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F98E9AF592164E3_GET_MAPPINGINFONODE_OFFSET))(this);
	}

	::System::Void set_MappingInfoNode(::RPG::Client::NavMap::MappingInfoNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + CLASS_1_0F98E9AF592164E3_SET_MAPPINGINFONODE_OFFSET))(this, a1);
	}

	::Class_1_44D5AE5377975AEE* get_ShortestPath()
	{
		return ((::Class_1_44D5AE5377975AEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F98E9AF592164E3_GET_SHORTESTPATH_OFFSET))(this);
	}

	::System::Void set_ShortestPath(::Class_1_44D5AE5377975AEE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44D5AE5377975AEE*))((::PBYTE)hIl2Cpp + CLASS_1_0F98E9AF592164E3_SET_SHORTESTPATH_OFFSET))(this, a1);
	}
};
