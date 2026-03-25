#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessMoveStopReason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_422;
class Class_0_16E4307DCC419505_423;
class Class_2_702836419F2A50E6;
class Class_2_EA46C5F9F8D34AB4;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B5BF53FFA523B5C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88947E0)
#define CLASS_2_B5BF53FFA523B5C8_METHOD_2_2B6CDED0FD57C301_OFFSET UNITYSDK_OFFSET(0x8894840)
#define CLASS_2_B5BF53FFA523B5C8_METHOD_2_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0x8894A70)
#define CLASS_2_B5BF53FFA523B5C8_METHOD_2_584A02FA9B54C648_OFFSET UNITYSDK_OFFSET(0x8895570)
#define CLASS_2_B5BF53FFA523B5C8_METHOD_2_7EA127DE55AAA205_OFFSET UNITYSDK_OFFSET(0x88949B0)
#define CLASS_2_B5BF53FFA523B5C8_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8894740)
#define CLASS_2_B5BF53FFA523B5C8_METHOD_2_C4B58FE69BAA9EA7_OFFSET UNITYSDK_OFFSET(0x8894B00)
#define CLASS_2_B5BF53FFA523B5C8_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x8895500)
#define CLASS_2_B5BF53FFA523B5C8_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x88954F0)
#define CLASS_2_B5BF53FFA523B5C8_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x88954E0)
#define CLASS_2_B5BF53FFA523B5C8_METHOD_2_FEDE09C198114DBE_OFFSET UNITYSDK_OFFSET(0x8895510)
#define CLASS_2_B5BF53FFA523B5C8_TICK_OFFSET UNITYSDK_OFFSET(0x8894C00)
#define CLASS_2_B5BF53FFA523B5C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x88955F0)
#define CLASS_2_B5BF53FFA523B5C8__CTOR_OFFSET UNITYSDK_OFFSET(0x88955E0)
#define CLASS_2_B5BF53FFA523B5C8___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8895710)

inline static constexpr unsigned int Class_2_B5BF53FFA523B5C8_TypeDefinitionIndex = 45244;

class Class_2_B5BF53FFA523B5C8 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::GameCore::FixPoint* StaticGet_Field_2_5()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B5BF53FFA523B5C8_TypeDefinitionIndex)->GetStaticField(0x13020);
	}
	::Class_2_EA46C5F9F8D34AB4* Field_2_3; // 0x18
	::Class_0_16E4307DCC419505_422* Field_2_1; // 0x20
	::Class_2_702836419F2A50E6* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_423*>* Field_2_4; // 0x30
	::System::Boolean Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7EA127DE55AAA205(::Class_0_16E4307DCC419505_423* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_423*))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_METHOD_2_7EA127DE55AAA205_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FED925376FD83FF(::Class_0_16E4307DCC419505_423* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_423*))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_METHOD_2_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C4B58FE69BAA9EA7(::Class_0_16E4307DCC419505_422* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_422*))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_METHOD_2_C4B58FE69BAA9EA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B6CDED0FD57C301(::Class_0_16E4307DCC419505_422* a1, ::RPG::GameCore::ChessMoveStopReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_422*, ::RPG::GameCore::ChessMoveStopReason))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_METHOD_2_2B6CDED0FD57C301_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_FEDE09C198114DBE()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_METHOD_2_FEDE09C198114DBE_OFFSET))(this);
	}

	::RPG::GameCore::FixVec2 Method_2_584A02FA9B54C648()
	{
		return ((::RPG::GameCore::FixVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8_METHOD_2_584A02FA9B54C648_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5BF53FFA523B5C8___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
