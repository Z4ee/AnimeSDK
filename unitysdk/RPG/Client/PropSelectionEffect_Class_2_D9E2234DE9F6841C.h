#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionEffect_Class_1_F34E36657A6030BD.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class PropSelectionEffect; }
namespace System { class Object; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_METHOD_2_6E99CED32AC0888E_OFFSET UNITYSDK_OFFSET(0xDD719D0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_METHOD_2_936D3806939567E8_OFFSET UNITYSDK_OFFSET(0xDD71720)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDD71B00)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_METHOD_2_BD113E53DBE8810D_OFFSET UNITYSDK_OFFSET(0xDD71560)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C__CTOR_OFFSET UNITYSDK_OFFSET(0xDD6F6E0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C__EXIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xDD71B80)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_Class_2_D9E2234DE9F6841C_TypeDefinitionIndex = 60372;

	class PropSelectionEffect_Class_2_D9E2234DE9F6841C : public ::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD
	{
	public:
		::Class_1_D27BF54F25500E5F* BOMJIBEFLGN; // 0x20

		::System::Void _ctor(::RPG::Client::PropSelectionEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_2_BD113E53DBE8810D(::RPG::Client::PropSelectionState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_METHOD_2_BD113E53DBE8810D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_936D3806939567E8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_METHOD_2_936D3806939567E8_OFFSET))(this, a1);
		}

		::System::Void Method_2_6E99CED32AC0888E(::RPG::Client::PropSelectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_METHOD_2_6E99CED32AC0888E_OFFSET))(this, a1);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::System::Void _Exit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C__EXIT_B__3_0_OFFSET))(this);
		}
	};
}
