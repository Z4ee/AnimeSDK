#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::NavMap { class ITrackPointInfo; }

#define CLASS_1_9194BBDBA275531E_METHOD_1_15F129B6504944DD_OFFSET UNITYSDK_OFFSET(0x19FC6710)
#define CLASS_1_9194BBDBA275531E_METHOD_1_843F05DDCA6D04E7_OFFSET UNITYSDK_OFFSET(0x19FC6790)
#define CLASS_1_9194BBDBA275531E_METHOD_1_B1EA10686C4EB3A3_OFFSET UNITYSDK_OFFSET(0x19FC6680)

inline static constexpr unsigned int Class_1_9194BBDBA275531E_TypeDefinitionIndex = 74461;

class Class_1_9194BBDBA275531E : public ::System::Object
{
public:
	static ::RPG::Client::NavMap::ITrackPointInfo* Method_1_B1EA10686C4EB3A3(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9194BBDBA275531E_METHOD_1_B1EA10686C4EB3A3_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::NavMap::ITrackPointInfo* Method_1_15F129B6504944DD(::UnityEngine::Vector3 a1)
	{
		return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9194BBDBA275531E_METHOD_1_15F129B6504944DD_OFFSET))(a1);
	}

	static ::RPG::Client::NavMap::ITrackPointInfo* Method_1_843F05DDCA6D04E7(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9194BBDBA275531E_METHOD_1_843F05DDCA6D04E7_OFFSET))(a1, a2, a3);
	}
};
