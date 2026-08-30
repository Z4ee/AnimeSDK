#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F1278B810B98680F;
namespace RPG::Client::NavMap { class MappingInfoNode; }

#define CLASS_1_0F98E9AF592164E3_GET_MAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x19ABFBD0)
#define CLASS_1_0F98E9AF592164E3_GET_SHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x19ABFBF0)
#define CLASS_1_0F98E9AF592164E3_SET_MAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x19ABFBE0)
#define CLASS_1_0F98E9AF592164E3_SET_SHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x19ABFC00)
#define CLASS_1_0F98E9AF592164E3__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABFC10)

inline static constexpr unsigned int Class_1_0F98E9AF592164E3_TypeDefinitionIndex = 74453;

class Class_1_0F98E9AF592164E3 : public ::System::Object
{
public:
	::Class_1_F1278B810B98680F* _ShortestPath_k__BackingField; // 0x10
	::RPG::Client::NavMap::MappingInfoNode* _MappingInfoNode_k__BackingField; // 0x18

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

	::Class_1_F1278B810B98680F* get_ShortestPath()
	{
		return ((::Class_1_F1278B810B98680F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F98E9AF592164E3_GET_SHORTESTPATH_OFFSET))(this);
	}

	::System::Void set_ShortestPath(::Class_1_F1278B810B98680F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1278B810B98680F*))((::PBYTE)hIl2Cpp + CLASS_1_0F98E9AF592164E3_SET_SHORTESTPATH_OFFSET))(this, a1);
	}
};
