#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_FBC1E64DC5B2C441___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1623ABB0)
#define CLASS_2_FBC1E64DC5B2C441___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1623ABF0)
#define CLASS_2_FBC1E64DC5B2C441___C__KICKUNCONNECTEDPLAYERS_B__13_0_OFFSET UNITYSDK_OFFSET(0x1623AC60)
#define CLASS_2_FBC1E64DC5B2C441___C___INITROBOT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1623AC00)

inline static constexpr unsigned int Class_2_FBC1E64DC5B2C441___c_TypeDefinitionIndex = 36527;

class Class_2_FBC1E64DC5B2C441___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::String*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FBC1E64DC5B2C441___c_TypeDefinitionIndex)->GetStaticField(0x58460);
	}
	static ::Class_2_FBC1E64DC5B2C441___c** StaticGet___9()
	{
		return (::Class_2_FBC1E64DC5B2C441___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FBC1E64DC5B2C441___c_TypeDefinitionIndex)->GetStaticField(0x58468);
	}
	static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FBC1E64DC5B2C441___c_TypeDefinitionIndex)->GetStaticField(0x58470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FBC1E64DC5B2C441___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBC1E64DC5B2C441___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __initRobot_b__8_0(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_2_FBC1E64DC5B2C441___C___INITROBOT_B__8_0_OFFSET))(this, a1);
	}

	::System::String* _KickUnconnectedPlayers_b__13_0(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FBC1E64DC5B2C441___C__KICKUNCONNECTEDPLAYERS_B__13_0_OFFSET))(this, a1);
	}
};
