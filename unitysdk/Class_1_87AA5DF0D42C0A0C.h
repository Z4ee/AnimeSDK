#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44D5AE5377975AEE;
namespace RPG::Client::NavMap { class MappingInfoNode; }

#define CLASS_1_87AA5DF0D42C0A0C_GET_MAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x9122490)
#define CLASS_1_87AA5DF0D42C0A0C_GET_SHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x91224B0)
#define CLASS_1_87AA5DF0D42C0A0C_SET_MAPPINGINFONODE_OFFSET UNITYSDK_OFFSET(0x91224A0)
#define CLASS_1_87AA5DF0D42C0A0C_SET_SHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x91224C0)
#define CLASS_1_87AA5DF0D42C0A0C__CTOR_OFFSET UNITYSDK_OFFSET(0x91224D0)

inline static constexpr unsigned int Class_1_87AA5DF0D42C0A0C_TypeDefinitionIndex = 68819;

class Class_1_87AA5DF0D42C0A0C : public ::System::Object
{
public:
	::Class_1_44D5AE5377975AEE* _ShortestPath_k__BackingField; // 0x10
	::RPG::Client::NavMap::MappingInfoNode* _MappingInfoNode_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87AA5DF0D42C0A0C__CTOR_OFFSET))(this);
	}

	::RPG::Client::NavMap::MappingInfoNode* get_MappingInfoNode()
	{
		return ((::RPG::Client::NavMap::MappingInfoNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87AA5DF0D42C0A0C_GET_MAPPINGINFONODE_OFFSET))(this);
	}

	::System::Void set_MappingInfoNode(::RPG::Client::NavMap::MappingInfoNode* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + CLASS_1_87AA5DF0D42C0A0C_SET_MAPPINGINFONODE_OFFSET))(this, value);
	}

	::Class_1_44D5AE5377975AEE* get_ShortestPath()
	{
		return ((::Class_1_44D5AE5377975AEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87AA5DF0D42C0A0C_GET_SHORTESTPATH_OFFSET))(this);
	}

	::System::Void set_ShortestPath(::Class_1_44D5AE5377975AEE* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44D5AE5377975AEE*))((::PBYTE)hIl2Cpp + CLASS_1_87AA5DF0D42C0A0C_SET_SHORTESTPATH_OFFSET))(this, value);
	}
};
