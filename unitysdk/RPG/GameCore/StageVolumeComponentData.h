#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_044687400A577648_OFFSET UNITYSDK_OFFSET(0x19CB08F0)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_3E0553BA6D3E680F_OFFSET UNITYSDK_OFFSET(0x19CB0300)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_66428440DA99740A_OFFSET UNITYSDK_OFFSET(0x19CB06B0)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_F3AEEDCAC183F672_OFFSET UNITYSDK_OFFSET(0x19CB0CE0)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB06A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVolumeComponentData_TypeDefinitionIndex = 18136;

	class StageVolumeComponentData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3E0553BA6D3E680F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_3E0553BA6D3E680F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_66428440DA99740A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_66428440DA99740A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_044687400A577648(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_044687400A577648_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F3AEEDCAC183F672(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_F3AEEDCAC183F672_OFFSET))(a1, a2);
		}
	};
}
