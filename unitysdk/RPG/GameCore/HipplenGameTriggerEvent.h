#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT_METHOD_3_08A1D262F1233F7A_OFFSET UNITYSDK_OFFSET(0x1D190C70)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT_METHOD_3_21F7CD227714EE71_OFFSET UNITYSDK_OFFSET(0x1D190C30)
#define RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D190C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameTriggerEvent_TypeDefinitionIndex = 21075;

	class HipplenGameTriggerEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21F7CD227714EE71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameTriggerEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameTriggerEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT_METHOD_3_21F7CD227714EE71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08A1D262F1233F7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameTriggerEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameTriggerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMETRIGGEREVENT_METHOD_3_08A1D262F1233F7A_OFFSET))(a1, a2);
		}
	};
}
