#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_34A1AEF043DDEE76_OFFSET UNITYSDK_OFFSET(0x19C85030)
#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_D4D541A930AD6525_OFFSET UNITYSDK_OFFSET(0x19C84FA0)
#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x19C85000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialBlockMask_TypeDefinitionIndex = 23016;

	class ShowTutorialBlockMask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::Il2CppArray<::System::String*>* NodeWhiteList; // 0x20
		::System::Single Scale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALBLOCKMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D4D541A930AD6525(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialBlockMask*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialBlockMask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_D4D541A930AD6525_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_34A1AEF043DDEE76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialBlockMask* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialBlockMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_34A1AEF043DDEE76_OFFSET))(a1, a2);
		}
	};
}
