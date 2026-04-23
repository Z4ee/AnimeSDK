#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_FBC1E64DC5B2C441___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D95350)
#define CLASS_2_FBC1E64DC5B2C441___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D95390)
#define CLASS_2_FBC1E64DC5B2C441___C__KICKUNCONNECTEDPLAYERS_B__13_0_OFFSET UNITYSDK_OFFSET(0x17D95400)
#define CLASS_2_FBC1E64DC5B2C441___C___INITROBOT_B__8_0_OFFSET UNITYSDK_OFFSET(0x17D953A0)

inline static constexpr unsigned int Class_2_FBC1E64DC5B2C441___c_TypeDefinitionIndex = 34601;

class Class_2_FBC1E64DC5B2C441___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::String*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FBC1E64DC5B2C441___c_TypeDefinitionIndex)->GetStaticField(0x63040);
	}
	static ::Class_2_FBC1E64DC5B2C441___c** StaticGet___9()
	{
		return (::Class_2_FBC1E64DC5B2C441___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FBC1E64DC5B2C441___c_TypeDefinitionIndex)->GetStaticField(0x63048);
	}
	static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FBC1E64DC5B2C441___c_TypeDefinitionIndex)->GetStaticField(0x63050);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FBC1E64DC5B2C441___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBC1E64DC5B2C441___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __initRobot_b__8_0(::RPG::GameCore::DynamicValue* s)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_2_FBC1E64DC5B2C441___C___INITROBOT_B__8_0_OFFSET))(this, s);
	}

	::System::String* _KickUnconnectedPlayers_b__13_0(::System::UInt32 p)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FBC1E64DC5B2C441___C__KICKUNCONNECTEDPLAYERS_B__13_0_OFFSET))(this, p);
	}
};
