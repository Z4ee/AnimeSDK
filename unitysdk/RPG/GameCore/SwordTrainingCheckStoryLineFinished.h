#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_METHOD_3_5F8A0E74CE9A8B69_OFFSET UNITYSDK_OFFSET(0x1E155960)
#define RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_METHOD_3_8E5BDC8095A82944_OFFSET UNITYSDK_OFFSET(0x1E155920)
#define RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E155950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingCheckStoryLineFinished_TypeDefinitionIndex = 20091;

	class SwordTrainingCheckStoryLineFinished : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StoryID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinished; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotFinished; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8E5BDC8095A82944(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_METHOD_3_8E5BDC8095A82944_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F8A0E74CE9A8B69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_METHOD_3_5F8A0E74CE9A8B69_OFFSET))(a1, a2);
		}
	};
}
