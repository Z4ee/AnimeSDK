#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPFASTDELIVERINITENTITY_METHOD_3_5617476D6DB14198_OFFSET UNITYSDK_OFFSET(0x19A8F1B0)
#define RPG_GAMECORE_PROPFASTDELIVERINITENTITY_METHOD_3_6495D8DFBA155D22_OFFSET UNITYSDK_OFFSET(0x19A8F360)
#define RPG_GAMECORE_PROPFASTDELIVERINITENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8F1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropFastDeliverInitEntity_TypeDefinitionIndex = 20925;

	class PropFastDeliverInitEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* TargetSaveName; // 0x20
		::RPG::GameCore::DynamicString* OverrideTargetSaveName; // 0x28
		::RPG::GameCore::TargetEvaluator* InitFaceToInstance; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERINITENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5617476D6DB14198(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropFastDeliverInitEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropFastDeliverInitEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERINITENTITY_METHOD_3_5617476D6DB14198_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6495D8DFBA155D22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropFastDeliverInitEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropFastDeliverInitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERINITENTITY_METHOD_3_6495D8DFBA155D22_OFFSET))(a1, a2);
		}
	};
}
