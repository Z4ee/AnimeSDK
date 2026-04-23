#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_METHOD_3_DAC19FFF97974E9A_OFFSET UNITYSDK_OFFSET(0x18EC2300)
#define RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_METHOD_3_DF0EA5D6AFA30773_OFFSET UNITYSDK_OFFSET(0x18EC2380)
#define RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC2350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingCheckStoryLineFinished_TypeDefinitionIndex = 19272;

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

		static ::System::Void Method_3_DAC19FFF97974E9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_METHOD_3_DAC19FFF97974E9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF0EA5D6AFA30773(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_METHOD_3_DF0EA5D6AFA30773_OFFSET))(a1, a2);
		}
	};
}
