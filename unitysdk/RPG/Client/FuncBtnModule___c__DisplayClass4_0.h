#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class NotifyShowFuncBtnParam; }

#define RPG_CLIENT_FUNCBTNMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA4C10)
#define RPG_CLIENT_FUNCBTNMODULE___C__DISPLAYCLASS4_0__IFMAINMISSIONISOCCUPIED_B__0_OFFSET UNITYSDK_OFFSET(0xBAA4C40)

namespace RPG::Client
{
	inline static constexpr unsigned int FuncBtnModule___c__DisplayClass4_0_TypeDefinitionIndex = 56597;

	class FuncBtnModule___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCBTNMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IfMainMissionIsOccupied_b__0(::RPG::GameCore::NotifyShowFuncBtnParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NotifyShowFuncBtnParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCBTNMODULE___C__DISPLAYCLASS4_0__IFMAINMISSIONISOCCUPIED_B__0_OFFSET))(this, a1);
		}
	};
}
