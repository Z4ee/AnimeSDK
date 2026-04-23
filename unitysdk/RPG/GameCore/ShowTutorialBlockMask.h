#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_55ADE0AD0526495F_OFFSET UNITYSDK_OFFSET(0x18E692F0)
#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_992FC7772A15E344_OFFSET UNITYSDK_OFFSET(0x18E69380)
#define RPG_GAMECORE_SHOWTUTORIALBLOCKMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x18E69350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialBlockMask_TypeDefinitionIndex = 23358;

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

		static ::System::Void Method_3_55ADE0AD0526495F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialBlockMask*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialBlockMask*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_55ADE0AD0526495F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_992FC7772A15E344(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialBlockMask* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialBlockMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALBLOCKMASK_METHOD_3_992FC7772A15E344_OFFSET))(a1, a2);
		}
	};
}
