#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_METHOD_3_575A94908D88E6E1_OFFSET UNITYSDK_OFFSET(0x18EA8CD0)
#define RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_METHOD_3_F6C3BB9787EE5DBF_OFFSET UNITYSDK_OFFSET(0x18EA8990)
#define RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA7C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingVolumeComponentData_TypeDefinitionIndex = 18143;

	class StreamingVolumeComponentData : public ::RPG::GameCore::StageVolumeComponentData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F6C3BB9787EE5DBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_METHOD_3_F6C3BB9787EE5DBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_575A94908D88E6E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGVOLUMECOMPONENTDATA_METHOD_3_575A94908D88E6E1_OFFSET))(a1, a2);
		}
	};
}
