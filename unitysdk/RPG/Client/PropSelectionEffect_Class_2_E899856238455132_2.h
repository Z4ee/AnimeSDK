#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionEffect_Class_1_F34E36657A6030BD.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"

class Class_1_5DF5F62C68EF718F;
namespace RPG::Client { class PropSelectionEffect; }
namespace System { class Object; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2_METHOD_2_6E99CED32AC0888E_OFFSET UNITYSDK_OFFSET(0xDDEF240)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDDEF350)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2_METHOD_2_DFBF5BEB9829FFF2_OFFSET UNITYSDK_OFFSET(0xDDEEDD0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2_METHOD_2_E21C0AC5CD43B5BD_OFFSET UNITYSDK_OFFSET(0xDDEEFF0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2__CTOR_OFFSET UNITYSDK_OFFSET(0xDDED6B0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2__EXIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xDDEF400)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_Class_2_E899856238455132_2_TypeDefinitionIndex = 60262;

	class PropSelectionEffect_Class_2_E899856238455132_2 : public ::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD
	{
	public:
		::Class_1_5DF5F62C68EF718F* BOMJIBEFLGN; // 0x20

		::System::Void _ctor(::RPG::Client::PropSelectionEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_2_DFBF5BEB9829FFF2(::RPG::Client::PropSelectionState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2_METHOD_2_DFBF5BEB9829FFF2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E21C0AC5CD43B5BD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2_METHOD_2_E21C0AC5CD43B5BD_OFFSET))(this, a1);
		}

		::System::Void Method_2_6E99CED32AC0888E(::RPG::Client::PropSelectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2_METHOD_2_6E99CED32AC0888E_OFFSET))(this, a1);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::System::Void _Exit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_E899856238455132_2__EXIT_B__3_0_OFFSET))(this);
		}
	};
}
