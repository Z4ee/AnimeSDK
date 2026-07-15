#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHAREDBOOL_METHOD_3_2082EC9BFB86A0C3_OFFSET UNITYSDK_OFFSET(0x1BE32AD0)
#define RPG_GAMECORE_SHAREDBOOL_METHOD_3_97073A57071BA0FC_OFFSET UNITYSDK_OFFSET(0x1BE32A90)
#define RPG_GAMECORE_SHAREDBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE32AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedBool_TypeDefinitionIndex = 17574;

	class SharedBool : public ::RPG::GameCore::SharedValue
	{
	public:
		::System::Boolean Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_97073A57071BA0FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDBOOL_METHOD_3_97073A57071BA0FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2082EC9BFB86A0C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDBOOL_METHOD_3_2082EC9BFB86A0C3_OFFSET))(a1, a2);
		}
	};
}
