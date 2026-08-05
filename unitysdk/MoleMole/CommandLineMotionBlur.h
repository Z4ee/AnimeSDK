#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class MotionBlurProfileContext; }

#define MOLEMOLE_COMMANDLINEMOTIONBLUR_METHOD_2_3807E61C224E8F21_OFFSET UNITYSDK_OFFSET(0x177C2800)
#define MOLEMOLE_COMMANDLINEMOTIONBLUR_METHOD_2_8478238C93615013_OFFSET UNITYSDK_OFFSET(0x177C2910)
#define MOLEMOLE_COMMANDLINEMOTIONBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x177C28D0)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineMotionBlur_TypeDefinitionIndex = 54288;

	class CommandLineMotionBlur : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::MotionBlurProfileContext*, ::MoleMole::CommandLineMotionBlur*>
	{
	public:
		::System::Nullable_1<::System::Boolean> enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMOTIONBLUR__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineMotionBlur* Method_2_3807E61C224E8F21(::MoleMole::MotionBlurProfileContext* a1)
		{
			return ((::MoleMole::CommandLineMotionBlur*(*)(::PVOID, ::MoleMole::MotionBlurProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMOTIONBLUR_METHOD_2_3807E61C224E8F21_OFFSET))(this, a1);
		}

		::MoleMole::MotionBlurProfileContext* Method_2_8478238C93615013(::MoleMole::MotionBlurProfileContext* a1)
		{
			return ((::MoleMole::MotionBlurProfileContext*(*)(::PVOID, ::MoleMole::MotionBlurProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMOTIONBLUR_METHOD_2_8478238C93615013_OFFSET))(this, a1);
		}
	};
}
