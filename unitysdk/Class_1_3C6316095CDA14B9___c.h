#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconItemViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3C6316095CDA14B9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19915000)
#define CLASS_1_3C6316095CDA14B9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19915040)
#define CLASS_1_3C6316095CDA14B9___C___SETICONLISTTARGETSTATEBYPARTCONFIG_B__40_0_OFFSET UNITYSDK_OFFSET(0x19915050)

inline static constexpr unsigned int Class_1_3C6316095CDA14B9___c_TypeDefinitionIndex = 80658;

class Class_1_3C6316095CDA14B9___c : public ::System::Object
{
public:
	static ::Class_1_3C6316095CDA14B9___c** StaticGet___9()
	{
		return (::Class_1_3C6316095CDA14B9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C6316095CDA14B9___c_TypeDefinitionIndex)->GetStaticField(0x52480);
	}
	static ::System::Func_2<::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*, ::System::Boolean>** StaticGet___9__40_0()
	{
		return (::System::Func_2<::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C6316095CDA14B9___c_TypeDefinitionIndex)->GetStaticField(0x52488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __SetIconListTargetStateByPartConfig_b__40_0(::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9___C___SETICONLISTTARGETSTATEBYPARTCONFIG_B__40_0_OFFSET))(this, a1);
	}
};
