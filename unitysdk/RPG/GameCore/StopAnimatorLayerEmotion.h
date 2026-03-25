#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STOPANIMATORLAYEREMOTION_METHOD_3_34F10874F020884D_OFFSET UNITYSDK_OFFSET(0x1777C7B0)
#define RPG_GAMECORE_STOPANIMATORLAYEREMOTION_METHOD_3_8990A079CAD4B661_OFFSET UNITYSDK_OFFSET(0x1777C840)
#define RPG_GAMECORE_STOPANIMATORLAYEREMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1777C810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopAnimatorLayerEmotion_TypeDefinitionIndex = 18908;

	class StopAnimatorLayerEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TransitTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPANIMATORLAYEREMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34F10874F020884D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopAnimatorLayerEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopAnimatorLayerEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPANIMATORLAYEREMOTION_METHOD_3_34F10874F020884D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8990A079CAD4B661(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopAnimatorLayerEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopAnimatorLayerEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPANIMATORLAYEREMOTION_METHOD_3_8990A079CAD4B661_OFFSET))(a1, a2);
		}
	};
}
