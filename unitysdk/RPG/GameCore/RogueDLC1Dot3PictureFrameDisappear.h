#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_METHOD_3_75AB15D4C7695BCD_OFFSET UNITYSDK_OFFSET(0x19B232D0)
#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_METHOD_3_AD135083C4B890C1_OFFSET UNITYSDK_OFFSET(0x19B233E0)
#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x19B233B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3PictureFrameDisappear_TypeDefinitionIndex = 19663;

	class RogueDLC1Dot3PictureFrameDisappear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75AB15D4C7695BCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_METHOD_3_75AB15D4C7695BCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD135083C4B890C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_METHOD_3_AD135083C4B890C1_OFFSET))(a1, a2);
		}
	};
}
