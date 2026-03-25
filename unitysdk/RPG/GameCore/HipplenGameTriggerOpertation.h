#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameOpertationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_METHOD_3_EF9D89A89D793689_OFFSET UNITYSDK_OFFSET(0x172AD930)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_METHOD_3_F10166A8FED27B6A_OFFSET UNITYSDK_OFFSET(0x172AD9B0)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x172AD980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameTriggerOpertation_TypeDefinitionIndex = 19622;

	class HipplenGameTriggerOpertation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HipplenGameOpertationType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EF9D89A89D793689(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameTriggerOpertation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameTriggerOpertation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_METHOD_3_EF9D89A89D793689_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F10166A8FED27B6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameTriggerOpertation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameTriggerOpertation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEROPERTATION_METHOD_3_F10166A8FED27B6A_OFFSET))(a1, a2);
		}
	};
}
