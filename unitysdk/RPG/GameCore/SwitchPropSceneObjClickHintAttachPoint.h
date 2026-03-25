#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT_METHOD_3_E629190B9966A347_OFFSET UNITYSDK_OFFSET(0x17798620)
#define RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT_METHOD_3_EC3A0E60E8D7B668_OFFSET UNITYSDK_OFFSET(0x177984D0)
#define RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x17798590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchPropSceneObjClickHintAttachPoint_TypeDefinitionIndex = 20435;

	class SwitchPropSceneObjClickHintAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AttachPointIndex; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC3A0E60E8D7B668(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT_METHOD_3_EC3A0E60E8D7B668_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E629190B9966A347(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT_METHOD_3_E629190B9966A347_OFFSET))(a1, a2);
		}
	};
}
