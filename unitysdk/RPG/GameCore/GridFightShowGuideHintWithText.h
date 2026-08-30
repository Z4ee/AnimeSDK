#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_METHOD_3_7B83BA0E4E43F25B_OFFSET UNITYSDK_OFFSET(0x1D3B98C0)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_METHOD_3_AC22F530756F4632_OFFSET UNITYSDK_OFFSET(0x1D3B9900)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B98F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowGuideHintWithText_TypeDefinitionIndex = 19744;

	class GridFightShowGuideHintWithText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TalkID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TargetEvent; // 0x20
		::System::Boolean IsBegin; // 0x28
		::System::Boolean IsEnd; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7B83BA0E4E43F25B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowGuideHintWithText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowGuideHintWithText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_METHOD_3_7B83BA0E4E43F25B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC22F530756F4632(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowGuideHintWithText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowGuideHintWithText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_METHOD_3_AC22F530756F4632_OFFSET))(a1, a2);
		}
	};
}
