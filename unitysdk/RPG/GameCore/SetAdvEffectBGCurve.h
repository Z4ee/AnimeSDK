#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETADVEFFECTBGCURVE_METHOD_3_0DEE85CFF2A6FE66_OFFSET UNITYSDK_OFFSET(0x19C27090)
#define RPG_GAMECORE_SETADVEFFECTBGCURVE_METHOD_3_C5AD9082C7A27939_OFFSET UNITYSDK_OFFSET(0x19C27010)
#define RPG_GAMECORE_SETADVEFFECTBGCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C27060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvEffectBGCurve_TypeDefinitionIndex = 21096;

	class SetAdvEffectBGCurve : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ConfigName; // 0x20
		::RPG::GameCore::DynamicJson* TargetCurve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTBGCURVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5AD9082C7A27939(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvEffectBGCurve*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvEffectBGCurve*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTBGCURVE_METHOD_3_C5AD9082C7A27939_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0DEE85CFF2A6FE66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvEffectBGCurve* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvEffectBGCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTBGCURVE_METHOD_3_0DEE85CFF2A6FE66_OFFSET))(a1, a2);
		}
	};
}
