#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MonopolyGameState.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_40B4F44059E8FC53;
class Class_2_9850514C0F89B91A;
class Class_2_F3C4BC00835CFDCA;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class MonopolyMapConfig; }
namespace System { class String; }

#define CLASS_1_986E02EAAD6E5770_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9EE2AC0)
#define CLASS_1_986E02EAAD6E5770_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9EE2880)
#define CLASS_1_986E02EAAD6E5770_METHOD_1_03F3E8B89AA38AF9_OFFSET UNITYSDK_OFFSET(0x9EE3160)
#define CLASS_1_986E02EAAD6E5770_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x9EE3C50)
#define CLASS_1_986E02EAAD6E5770_METHOD_1_13CC54082E9757C7_OFFSET UNITYSDK_OFFSET(0x9EE2FD0)
#define CLASS_1_986E02EAAD6E5770_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9EE3470)
#define CLASS_1_986E02EAAD6E5770_METHOD_1_4BFE35B60B92FC83_OFFSET UNITYSDK_OFFSET(0x9EE3700)
#define CLASS_1_986E02EAAD6E5770_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x9EE28D0)
#define CLASS_1_986E02EAAD6E5770_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x9EE3850)
#define CLASS_1_986E02EAAD6E5770_METHOD_1_943E1EFDF67DA624_OFFSET UNITYSDK_OFFSET(0x9EE3520)
#define CLASS_1_986E02EAAD6E5770_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x9EE36A0)
#define CLASS_1_986E02EAAD6E5770_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9EE3410)
#define CLASS_1_986E02EAAD6E5770__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE27F0)

inline static constexpr unsigned int Class_1_986E02EAAD6E5770_TypeDefinitionIndex = 61839;

class Class_1_986E02EAAD6E5770 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	::RPG::Client::UIController* Field_1_2; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18
	::Class_2_9850514C0F89B91A* Field_1_7; // 0x20
	::Class_2_F3C4BC00835CFDCA* Field_1_1; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::RPG::Client::LittleGame::MonopolyGameState Field_1_6; // 0x34
	::System::Single Field_1_3; // 0x38

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_2_40B4F44059E8FC53* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_2_40B4F44059E8FC53*))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_03F3E8B89AA38AF9(::Class_2_9850514C0F89B91A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_METHOD_1_03F3E8B89AA38AF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_943E1EFDF67DA624(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_METHOD_1_943E1EFDF67DA624_OFFSET))(this, a1);
	}

	::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_METHOD_1_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::RPG::GameCore::MonopolyMapConfig* Method_1_4BFE35B60B92FC83()
	{
		return ((::RPG::GameCore::MonopolyMapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_METHOD_1_4BFE35B60B92FC83_OFFSET))(this);
	}

	::Class_2_9850514C0F89B91A* Method_1_13CC54082E9757C7()
	{
		return ((::Class_2_9850514C0F89B91A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_986E02EAAD6E5770_METHOD_1_13CC54082E9757C7_OFFSET))(this);
	}
};
