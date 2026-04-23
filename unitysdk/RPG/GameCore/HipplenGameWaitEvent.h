#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMEWAITEVENT_METHOD_3_A4440D6CD58E6275_OFFSET UNITYSDK_OFFSET(0x18A02720)
#define RPG_GAMECORE_HIPPLENGAMEWAITEVENT_METHOD_3_FE8CEFC866ED1A29_OFFSET UNITYSDK_OFFSET(0x18A027A0)
#define RPG_GAMECORE_HIPPLENGAMEWAITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A02770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameWaitEvent_TypeDefinitionIndex = 20300;

	class HipplenGameWaitEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EventName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEWAITEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A4440D6CD58E6275(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameWaitEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameWaitEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEWAITEVENT_METHOD_3_A4440D6CD58E6275_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FE8CEFC866ED1A29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameWaitEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameWaitEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEWAITEVENT_METHOD_3_FE8CEFC866ED1A29_OFFSET))(a1, a2);
		}
	};
}
