#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameProp; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_2_1D069F5B0141B581___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE2CFED0)
#define CLASS_2_1D069F5B0141B581___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE2CFF10)
#define CLASS_2_1D069F5B0141B581___C__ONEXECUTE_B__2_0_OFFSET UNITYSDK_OFFSET(0xE2CFF20)

inline static constexpr unsigned int Class_2_1D069F5B0141B581___c_TypeDefinitionIndex = 65925;

class Class_2_1D069F5B0141B581___c : public ::System::Object
{
public:
	static ::System::Func_3<::RPG::Client::MatchThreeGameProp*, ::System::UInt32, ::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Func_3<::RPG::Client::MatchThreeGameProp*, ::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1D069F5B0141B581___c_TypeDefinitionIndex)->GetStaticField(0x67280);
	}
	static ::Class_2_1D069F5B0141B581___c** StaticGet___9()
	{
		return (::Class_2_1D069F5B0141B581___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1D069F5B0141B581___c_TypeDefinitionIndex)->GetStaticField(0x67288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1D069F5B0141B581___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D069F5B0141B581___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnExecute_b__2_0(::RPG::Client::MatchThreeGameProp* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1D069F5B0141B581___C__ONEXECUTE_B__2_0_OFFSET))(this, a1, a2);
	}
};
