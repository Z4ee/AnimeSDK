#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByInTrackCameraByPathID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_43E694A10900B65C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17E00A40)
#define CLASS_3_43E694A10900B65C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E00A10)

inline static constexpr unsigned int Class_3_43E694A10900B65C_TypeDefinitionIndex = 53403;

class Class_3_43E694A10900B65C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByInTrackCameraByPathID*>
{
public:
	// static const ::System::Single LHPIKEBIPEF; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + CLASS_3_43E694A10900B65C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43E694A10900B65C_EVALUATE_OFFSET))(this);
	}
};
