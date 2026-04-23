#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceBlockType.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_METHOD_4_825C561560251423_OFFSET UNITYSDK_OFFSET(0x18EA7B00)
#define RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_METHOD_4_9F594A72A83781F0_OFFSET UNITYSDK_OFFSET(0x18EA7B80)
#define RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA7B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingForceHLODVolumeData_TypeDefinitionIndex = 18146;

	class StreamingForceHLODVolumeData : public ::RPG::GameCore::StreamingVolumeComponentData
	{
	public:
		::RPG::GameCore::ForceBlockType ForceBlockType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_825C561560251423(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingForceHLODVolumeData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingForceHLODVolumeData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_METHOD_4_825C561560251423_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9F594A72A83781F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingForceHLODVolumeData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingForceHLODVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGFORCEHLODVOLUMEDATA_METHOD_4_9F594A72A83781F0_OFFSET))(a1, a2);
		}
	};
}
