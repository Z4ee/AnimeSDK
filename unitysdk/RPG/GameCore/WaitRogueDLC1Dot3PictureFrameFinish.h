#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH_METHOD_3_345BDF0BFBB47DAA_OFFSET UNITYSDK_OFFSET(0x191067E0)
#define RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH_METHOD_3_DA55A11187678876_OFFSET UNITYSDK_OFFSET(0x191068F0)
#define RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x191068C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueDLC1Dot3PictureFrameFinish_TypeDefinitionIndex = 21164;

	class WaitRogueDLC1Dot3PictureFrameFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_345BDF0BFBB47DAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH_METHOD_3_345BDF0BFBB47DAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA55A11187678876(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEDLC1DOT3PICTUREFRAMEFINISH_METHOD_3_DA55A11187678876_OFFSET))(a1, a2);
		}
	};
}
