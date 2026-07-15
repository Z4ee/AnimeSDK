#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionEffect_Class_1_F34E36657A6030BD.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class PropSelectionEffect; }
namespace System { class Object; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2_METHOD_2_6E99CED32AC0888E_OFFSET UNITYSDK_OFFSET(0x1614B930)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2_METHOD_2_936D3806939567E8_OFFSET UNITYSDK_OFFSET(0x1614B680)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1614BA50)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2_METHOD_2_BD113E53DBE8810D_OFFSET UNITYSDK_OFFSET(0x1614B4D0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16149DF0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2__EXIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1614BAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_Class_2_D9E2234DE9F6841C_2_TypeDefinitionIndex = 57557;

	class PropSelectionEffect_Class_2_D9E2234DE9F6841C_2 : public ::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD
	{
	public:
		::Class_1_D27BF54F25500E5F* Field_2_0; // 0x20

		::System::Void _ctor(::RPG::Client::PropSelectionEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_2_BD113E53DBE8810D(::RPG::Client::PropSelectionState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2_METHOD_2_BD113E53DBE8810D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_936D3806939567E8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2_METHOD_2_936D3806939567E8_OFFSET))(this, a1);
		}

		::System::Void Method_2_6E99CED32AC0888E(::RPG::Client::PropSelectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2_METHOD_2_6E99CED32AC0888E_OFFSET))(this, a1);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::System::Void _Exit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_D9E2234DE9F6841C_2__EXIT_B__3_0_OFFSET))(this);
		}
	};
}
