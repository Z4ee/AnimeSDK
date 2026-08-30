#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameOpertationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_METHOD_3_F10166A8FED27B6A_OFFSET UNITYSDK_OFFSET(0x1D190DC0)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_METHOD_3_FC4541F8EE65FEA9_OFFSET UNITYSDK_OFFSET(0x1D190D80)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D190DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameTriggerOpertation_TypeDefinitionIndex = 21076;

	class HipplenGameTriggerOpertation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HipplenGameOpertationType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC4541F8EE65FEA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameTriggerOpertation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameTriggerOpertation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_METHOD_3_FC4541F8EE65FEA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F10166A8FED27B6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameTriggerOpertation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameTriggerOpertation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_METHOD_3_F10166A8FED27B6A_OFFSET))(a1, a2);
		}
	};
}
