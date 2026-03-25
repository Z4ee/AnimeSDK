#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_D6E9A038FA23103A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A45950)
#define CLASS_3_D6E9A038FA23103A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A45990)
#define CLASS_3_D6E9A038FA23103A___C__REPORTGAMEEND_B__176_0_OFFSET UNITYSDK_OFFSET(0x8A459A0)

inline static constexpr unsigned int Class_3_D6E9A038FA23103A___c_TypeDefinitionIndex = 62444;

class Class_3_D6E9A038FA23103A___c : public ::System::Object
{
public:
	static ::Class_3_D6E9A038FA23103A___c** StaticGet___9()
	{
		return (::Class_3_D6E9A038FA23103A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6E9A038FA23103A___c_TypeDefinitionIndex)->GetStaticField(0x45C10);
	}
	static ::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>** StaticGet___9__176_0()
	{
		return (::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6E9A038FA23103A___c_TypeDefinitionIndex)->GetStaticField(0x45C18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__CTOR_OFFSET))(this);
	}

	::System::String* _ReportGameEnd_b__176_0(::RPG::GameCore::LittleGameEntityConfig* v)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__REPORTGAMEEND_B__176_0_OFFSET))(this, v);
	}
};
