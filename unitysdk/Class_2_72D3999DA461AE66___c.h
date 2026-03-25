#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameProp; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_2_72D3999DA461AE66___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11582430)
#define CLASS_2_72D3999DA461AE66___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11582470)
#define CLASS_2_72D3999DA461AE66___C__ONEXECUTE_B__2_0_OFFSET UNITYSDK_OFFSET(0x11582480)

inline static constexpr unsigned int Class_2_72D3999DA461AE66___c_TypeDefinitionIndex = 53500;

class Class_2_72D3999DA461AE66___c : public ::System::Object
{
public:
	static ::System::Func_3<::RPG::Client::MatchThreeGameProp*, ::System::UInt32, ::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Func_3<::RPG::Client::MatchThreeGameProp*, ::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_72D3999DA461AE66___c_TypeDefinitionIndex)->GetStaticField(0x44120);
	}
	static ::Class_2_72D3999DA461AE66___c** StaticGet___9()
	{
		return (::Class_2_72D3999DA461AE66___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_72D3999DA461AE66___c_TypeDefinitionIndex)->GetStaticField(0x44128);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_72D3999DA461AE66___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D3999DA461AE66___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnExecute_b__2_0(::RPG::Client::MatchThreeGameProp* info, ::System::UInt32 id)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_72D3999DA461AE66___C__ONEXECUTE_B__2_0_OFFSET))(this, info, id);
	}
};
