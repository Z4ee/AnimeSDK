#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_34A1AEF043DDEE76_OFFSET UNITYSDK_OFFSET(0x1D531990)
#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_40948BD1837F08F7_OFFSET UNITYSDK_OFFSET(0x1D531940)
#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D531980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialBlockMask_TypeDefinitionIndex = 24065;

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

		static ::System::Void Method_3_40948BD1837F08F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialBlockMask*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialBlockMask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_40948BD1837F08F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_34A1AEF043DDEE76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialBlockMask* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialBlockMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_34A1AEF043DDEE76_OFFSET))(a1, a2);
		}
	};
}
