#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITFORNOTIFYNOPARAM_METHOD_3_40F3C73944094534_OFFSET UNITYSDK_OFFSET(0x190FE080)
#define RPG_GAMECORE_WAITFORNOTIFYNOPARAM_METHOD_3_F161AB0EC066D1AD_OFFSET UNITYSDK_OFFSET(0x190FE000)
#define RPG_GAMECORE_WAITFORNOTIFYNOPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x190FE050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitForNotifyNoParam_TypeDefinitionIndex = 19900;

	class WaitForNotifyNoParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NotifyTypeName; // 0x18
		::System::Boolean IsLoop; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotify; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORNOTIFYNOPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F161AB0EC066D1AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitForNotifyNoParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitForNotifyNoParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORNOTIFYNOPARAM_METHOD_3_F161AB0EC066D1AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40F3C73944094534(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitForNotifyNoParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitForNotifyNoParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORNOTIFYNOPARAM_METHOD_3_40F3C73944094534_OFFSET))(a1, a2);
		}
	};
}
