#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_3E0553BA6D3E680F_OFFSET UNITYSDK_OFFSET(0x1D55F2C0)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_66428440DA99740A_OFFSET UNITYSDK_OFFSET(0x1D55F670)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_A87870A41735DA06_OFFSET UNITYSDK_OFFSET(0x1D55FD90)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_F3AEEDCAC183F672_OFFSET UNITYSDK_OFFSET(0x1D5602B0)
#define RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D55F660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVolumeComponentData_TypeDefinitionIndex = 18893;

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

		static ::System::Void Method_2_A87870A41735DA06(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_A87870A41735DA06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F3AEEDCAC183F672(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECOMPONENTDATA_METHOD_2_F3AEEDCAC183F672_OFFSET))(a1, a2);
		}
	};
}
