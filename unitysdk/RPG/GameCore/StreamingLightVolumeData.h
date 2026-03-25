#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLightMode.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_METHOD_4_C6C31034EBC555D3_OFFSET UNITYSDK_OFFSET(0x17781D60)
#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_METHOD_4_F6607DBDF82A3D20_OFFSET UNITYSDK_OFFSET(0x17782560)
#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17782550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingLightVolumeData_TypeDefinitionIndex = 17538;

	class StreamingLightVolumeData : public ::RPG::GameCore::StreamingVolumeComponentData
	{
	public:
		::RPG::GameCore::StreamingLightMode LightMode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C6C31034EBC555D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingLightVolumeData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingLightVolumeData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_METHOD_4_C6C31034EBC555D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6607DBDF82A3D20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingLightVolumeData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingLightVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_METHOD_4_F6607DBDF82A3D20_OFFSET))(a1, a2);
		}
	};
}
