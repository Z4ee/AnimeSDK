#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLightMode.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_METHOD_4_1511A825EEA6BEFB_OFFSET UNITYSDK_OFFSET(0x1CAEDF20)
#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_METHOD_4_A2383201951BBBAA_OFFSET UNITYSDK_OFFSET(0x1CB01E60)
#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_METHOD_4_C6C31034EBC555D3_OFFSET UNITYSDK_OFFSET(0x1CB01530)
#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_METHOD_4_F6607DBDF82A3D20_OFFSET UNITYSDK_OFFSET(0x1CAED600)
#define RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAED5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingLightVolumeData_TypeDefinitionIndex = 18899;

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

		static ::System::Void Method_4_1511A825EEA6BEFB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingLightVolumeData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingLightVolumeData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_METHOD_4_1511A825EEA6BEFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2383201951BBBAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingLightVolumeData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingLightVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGLIGHTVOLUMEDATA_METHOD_4_A2383201951BBBAA_OFFSET))(a1, a2);
		}
	};
}
