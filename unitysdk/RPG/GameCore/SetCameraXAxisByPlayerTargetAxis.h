#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS_METHOD_3_04555DE31D6395EC_OFFSET UNITYSDK_OFFSET(0x18E0EFF0)
#define RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS_METHOD_3_FEBC4424C431F6B6_OFFSET UNITYSDK_OFFSET(0x18E0F080)
#define RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0F050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCameraXAxisByPlayerTargetAxis_TypeDefinitionIndex = 19811;

	class SetCameraXAxisByPlayerTargetAxis : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Single XAxisOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04555DE31D6395EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS_METHOD_3_04555DE31D6395EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEBC4424C431F6B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS_METHOD_3_FEBC4424C431F6B6_OFFSET))(a1, a2);
		}
	};
}
