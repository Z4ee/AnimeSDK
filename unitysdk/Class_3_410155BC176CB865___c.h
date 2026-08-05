#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_410155BC176CB865___C_METHOD_1_F9149887D189BDB4_OFFSET UNITYSDK_OFFSET(0x13774D40)
#define CLASS_3_410155BC176CB865___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13774CF0)
#define CLASS_3_410155BC176CB865___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13774D30)

inline static constexpr unsigned int Class_3_410155BC176CB865___c_TypeDefinitionIndex = 59958;

class Class_3_410155BC176CB865___c : public ::System::Object
{
public:
	static ::Class_3_410155BC176CB865___c** StaticGet___9()
	{
		return (::Class_3_410155BC176CB865___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_410155BC176CB865___c_TypeDefinitionIndex)->GetStaticField(0x442D0);
	}
	static ::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_410155BC176CB865___c_TypeDefinitionIndex)->GetStaticField(0x442D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_410155BC176CB865___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_410155BC176CB865___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F9149887D189BDB4(::MoleMole::Config::ConfigViewObjectTraitBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectTraitBase*))((::PBYTE)hIl2Cpp + CLASS_3_410155BC176CB865___C_METHOD_1_F9149887D189BDB4_OFFSET))(this, a1);
	}
};
