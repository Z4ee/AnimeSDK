#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_CFFB97812D9F404D_BarType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_CFFB97812D9F404D_METHOD_2_1EBC69662BB0DE70_OFFSET UNITYSDK_OFFSET(0x11186080)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11185D90)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11186350)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x11185F60)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x11185A10)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x11185D20)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x111862E0)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x11185CE0)
#define CLASS_2_CFFB97812D9F404D_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x111859B0)
#define CLASS_2_CFFB97812D9F404D_ONRETURN_OFFSET UNITYSDK_OFFSET(0x11185C90)
#define CLASS_2_CFFB97812D9F404D__CTOR_OFFSET UNITYSDK_OFFSET(0x111862B0)
#define CLASS_2_CFFB97812D9F404D__ONBIND_OFFSET UNITYSDK_OFFSET(0x11185EA0)
#define CLASS_2_CFFB97812D9F404D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x111863B0)

inline static constexpr unsigned int Class_2_CFFB97812D9F404D_TypeDefinitionIndex = 58676;

class Class_2_CFFB97812D9F404D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x4B1; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x4C4; // 0x0
	// static const ::System::Int32 Field_2_2 = 0x57E; // 0x0
	// static const ::System::Int32 Field_2_3 = 0x3F7; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	::System::String* Field_2_14; // 0x60
	::RPG::GameCore::BattleInstance* Field_2_13; // 0x68
	::RPG::Client::PrefabLoadMeta* Field_2_10; // 0x70
	::Class_1_CA217ABF4E3B4F3F* Field_2_11; // 0x78
	::RPG::GameCore::GameEntity* Field_2_12; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D__CTOR_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_ONRETURN_OFFSET))(this);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_1EBC69662BB0DE70(::Class_2_CFFB97812D9F404D_BarType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CFFB97812D9F404D_BarType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_1EBC69662BB0DE70_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
