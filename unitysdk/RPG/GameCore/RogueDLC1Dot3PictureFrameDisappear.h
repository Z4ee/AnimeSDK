#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_METHOD_3_AD135083C4B890C1_OFFSET UNITYSDK_OFFSET(0x1D91A1A0)
#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_METHOD_3_CBFF625C1DF06944_OFFSET UNITYSDK_OFFSET(0x1D91A0D0)
#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D91A190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3PictureFrameDisappear_TypeDefinitionIndex = 20569;

	class RogueDLC1Dot3PictureFrameDisappear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CBFF625C1DF06944(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_METHOD_3_CBFF625C1DF06944_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD135083C4B890C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAMEDISAPPEAR_METHOD_3_AD135083C4B890C1_OFFSET))(a1, a2);
		}
	};
}
