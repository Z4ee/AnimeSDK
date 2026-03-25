#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FreelookCameraDragMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE_METHOD_3_4C8CDD76ED0D6A0A_OFFSET UNITYSDK_OFFSET(0x17198500)
#define RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE_METHOD_3_92FAB2D29A3D7CCD_OFFSET UNITYSDK_OFFSET(0x17198480)
#define RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x171984D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableFreelookCameraDragMode_TypeDefinitionIndex = 19154;

	class EnableFreelookCameraDragMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::RPG::GameCore::FreelookCameraDragMode Mode; // 0x1C
		::RPG::GameCore::TargetEvaluator* AimTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_92FAB2D29A3D7CCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableFreelookCameraDragMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableFreelookCameraDragMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE_METHOD_3_92FAB2D29A3D7CCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C8CDD76ED0D6A0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableFreelookCameraDragMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableFreelookCameraDragMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFREELOOKCAMERADRAGMODE_METHOD_3_4C8CDD76ED0D6A0A_OFFSET))(a1, a2);
		}
	};
}
