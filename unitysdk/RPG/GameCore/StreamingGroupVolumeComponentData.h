#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_01E9D8687F4BCB09_OFFSET UNITYSDK_OFFSET(0x1D574110)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_2A17435B120EDACA_OFFSET UNITYSDK_OFFSET(0x1D574140)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_47765121E61C1EE3_OFFSET UNITYSDK_OFFSET(0x1D560330)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_BF896F808D9AF642_OFFSET UNITYSDK_OFFSET(0x1D55F980)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D55F970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingGroupVolumeComponentData_TypeDefinitionIndex = 18894;

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

		static ::System::Void Method_3_47765121E61C1EE3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_47765121E61C1EE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A17435B120EDACA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_2A17435B120EDACA_OFFSET))(a1, a2);
		}
	};
}
