#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_04E8A8CB715F95A7;
class Class_2_049053A9DCD26B56;
class Class_2_4CDC13220E4CDFEE;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3399D5FC362D6A3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA76F710)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0xA771770)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_1DFECA8DFE36D287_OFFSET UNITYSDK_OFFSET(0xA770F20)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_2A721CD8A312A4BD_OFFSET UNITYSDK_OFFSET(0xA770D30)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA76F590)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_5301FF3DE3F6D502_OFFSET UNITYSDK_OFFSET(0xA771490)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_9A02E516F70AF0A1_OFFSET UNITYSDK_OFFSET(0xA7718C0)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_9ADFAA56C4A0B186_OFFSET UNITYSDK_OFFSET(0xA770BB0)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_ABCB0D056BBEA65C_OFFSET UNITYSDK_OFFSET(0xA7703A0)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_D0ABCE4BDCCED030_OFFSET UNITYSDK_OFFSET(0xA770260)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_E38C98E831C483D3_OFFSET UNITYSDK_OFFSET(0xA771050)
#define CLASS_2_3399D5FC362D6A3F_METHOD_2_F08676EA64B106D4_OFFSET UNITYSDK_OFFSET(0xA770C80)
#define CLASS_2_3399D5FC362D6A3F_TICK_OFFSET UNITYSDK_OFFSET(0xA76FB70)
#define CLASS_2_3399D5FC362D6A3F__CTOR_OFFSET UNITYSDK_OFFSET(0xA771900)
#define CLASS_2_3399D5FC362D6A3F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA771950)

inline static constexpr unsigned int Class_2_3399D5FC362D6A3F_TypeDefinitionIndex = 53657;

class Class_2_3399D5FC362D6A3F : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::Class_1_04E8A8CB715F95A7*>* Field_2_0; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_2_1; // 0x20
	::RPG::Client::MockAnimator* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0ABCE4BDCCED030(::System::String* a1, ::System::Single a2, ::Class_2_4CDC13220E4CDFEE* a3, ::Il2CppArray<::Class_2_049053A9DCD26B56*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::Class_2_4CDC13220E4CDFEE*, ::Il2CppArray<::Class_2_049053A9DCD26B56*>*))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_D0ABCE4BDCCED030_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9ADFAA56C4A0B186(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_9ADFAA56C4A0B186_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1DFECA8DFE36D287(::System::String* a1, ::System::UInt32 a2, ::RPG::GameCore::PlayNPCBubbleTalk* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_1DFECA8DFE36D287_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E38C98E831C483D3(::System::String* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_E38C98E831C483D3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5301FF3DE3F6D502(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_5301FF3DE3F6D502_OFFSET))(this, a1);
	}

	::Class_1_04E8A8CB715F95A7* Method_2_ABCB0D056BBEA65C(::System::String* a1, ::System::Single a2)
	{
		return ((::Class_1_04E8A8CB715F95A7*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_ABCB0D056BBEA65C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F08676EA64B106D4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_F08676EA64B106D4_OFFSET))(this, a1);
	}

	::Class_1_04E8A8CB715F95A7* Method_2_2A721CD8A312A4BD(::System::String* a1)
	{
		return ((::Class_1_04E8A8CB715F95A7*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_2A721CD8A312A4BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_0D3455A2B8A3E6D4_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* Method_2_9A02E516F70AF0A1()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F_METHOD_2_9A02E516F70AF0A1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3399D5FC362D6A3F___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
