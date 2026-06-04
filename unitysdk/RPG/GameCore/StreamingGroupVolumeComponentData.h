#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_01E9D8687F4BCB09_OFFSET UNITYSDK_OFFSET(0x19CC4C20)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_1F1CF4239D5E1E54_OFFSET UNITYSDK_OFFSET(0x19CC4D10)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_AABA8BEBF1F53AB1_OFFSET UNITYSDK_OFFSET(0x19CC4D40)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_BF896F808D9AF642_OFFSET UNITYSDK_OFFSET(0x19CC4C60)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC4C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingGroupVolumeComponentData_TypeDefinitionIndex = 18137;

	class StreamingGroupVolumeComponentData : public ::RPG::GameCore::StageVolumeComponentData
	{
	public:
		::Il2CppArray<::RPG::GameCore::StreamingBlockVolumeComponentData*>* StreamingVolumeGroup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01E9D8687F4BCB09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingGroupVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_01E9D8687F4BCB09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF896F808D9AF642(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingGroupVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_BF896F808D9AF642_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F1CF4239D5E1E54(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_1F1CF4239D5E1E54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AABA8BEBF1F53AB1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_AABA8BEBF1F53AB1_OFFSET))(a1, a2);
		}
	};
}
