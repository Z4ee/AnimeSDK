#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_METHOD_3_DE418EA7BBDDBEB5_OFFSET UNITYSDK_OFFSET(0x17283490)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_METHOD_3_E10363977A67381C_OFFSET UNITYSDK_OFFSET(0x17283510)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x172834E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowGuideHintWithText_TypeDefinitionIndex = 18247;

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

		static ::System::Void Method_3_DE418EA7BBDDBEB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowGuideHintWithText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowGuideHintWithText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_METHOD_3_DE418EA7BBDDBEB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E10363977A67381C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowGuideHintWithText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowGuideHintWithText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXT_METHOD_3_E10363977A67381C_OFFSET))(a1, a2);
		}
	};
}
