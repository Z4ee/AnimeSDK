#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME_METHOD_3_3608C3B5B8E65B93_OFFSET UNITYSDK_OFFSET(0x1D919F90)
#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME_METHOD_3_BAE020826E345900_OFFSET UNITYSDK_OFFSET(0x1D919F50)
#define RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D919F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3PictureFrame_TypeDefinitionIndex = 22038;

	class RogueDLC1Dot3PictureFrame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceUsePicture; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BAE020826E345900(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3PictureFrame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME_METHOD_3_BAE020826E345900_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3608C3B5B8E65B93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3PictureFrame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3PICTUREFRAME_METHOD_3_3608C3B5B8E65B93_OFFSET))(a1, a2);
		}
	};
}
