#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByInTrackCameraByPathID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5F7FA0DBFE6BD917_EVALUATE_OFFSET UNITYSDK_OFFSET(0xECA71A0)
#define CLASS_3_5F7FA0DBFE6BD917__CTOR_OFFSET UNITYSDK_OFFSET(0xECA7170)

inline static constexpr unsigned int Class_3_5F7FA0DBFE6BD917_TypeDefinitionIndex = 49001;

class Class_3_5F7FA0DBFE6BD917 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByInTrackCameraByPathID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + CLASS_3_5F7FA0DBFE6BD917__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F7FA0DBFE6BD917_EVALUATE_OFFSET))(this);
	}
};
