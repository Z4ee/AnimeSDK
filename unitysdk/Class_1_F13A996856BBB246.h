#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_413D5A0FF338BAB8;
class Class_1_D2C97E5E9F60802E;
class Class_2_68CB91321C3E76A7;

#define CLASS_1_F13A996856BBB246_METHOD_1_46EE940080492D6E_OFFSET UNITYSDK_OFFSET(0x15899540)
#define CLASS_1_F13A996856BBB246_METHOD_1_59D4E1569D7B14FF_OFFSET UNITYSDK_OFFSET(0x158991E0)
#define CLASS_1_F13A996856BBB246__CCTOR_OFFSET UNITYSDK_OFFSET(0x158998A0)
#define CLASS_1_F13A996856BBB246__CTOR_OFFSET UNITYSDK_OFFSET(0x15899890)

inline static constexpr unsigned int Class_1_F13A996856BBB246_TypeDefinitionIndex = 73348;

class Class_1_F13A996856BBB246 : public ::System::Object
{
public:
	static ::Class_1_F13A996856BBB246** StaticGet_Field_1_0()
	{
		return (::Class_1_F13A996856BBB246**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13A996856BBB246_TypeDefinitionIndex)->GetStaticField(0x2AF90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F13A996856BBB246__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13A996856BBB246__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_59D4E1569D7B14FF(::Class_1_413D5A0FF338BAB8* a1, ::Class_1_D2C97E5E9F60802E* a2, ::Class_2_68CB91321C3E76A7* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_413D5A0FF338BAB8*, ::Class_1_D2C97E5E9F60802E*, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_F13A996856BBB246_METHOD_1_59D4E1569D7B14FF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_46EE940080492D6E(::Class_2_68CB91321C3E76A7* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_68CB91321C3E76A7*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F13A996856BBB246_METHOD_1_46EE940080492D6E_OFFSET))(this, a1, a2);
	}
};
