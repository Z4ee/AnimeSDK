#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_2_CFFB97812D9F404D_BarType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_CFFB97812D9F404D_METHOD_2_1EBC69662BB0DE70_OFFSET UNITYSDK_OFFSET(0xBBB6460)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBBB61C0)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xBBB5D90)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0xBBB6340)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xBBB6160)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xBBB6120)
#define CLASS_2_CFFB97812D9F404D_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBBB5D40)
#define CLASS_2_CFFB97812D9F404D_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBBB60D0)
#define CLASS_2_CFFB97812D9F404D__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB6680)
#define CLASS_2_CFFB97812D9F404D__ONBIND_OFFSET UNITYSDK_OFFSET(0xBBB62E0)

inline static constexpr unsigned int Class_2_CFFB97812D9F404D_TypeDefinitionIndex = 71559;

class Class_2_CFFB97812D9F404D : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 GENGIPLJKEG = 0x4B1; // 0x0
	// static const ::System::Int32 HKINBFAJHFA = 0x4C4; // 0x0
	// static const ::System::Int32 PJMPLMNKIHK = 0x57E; // 0x0
	// static const ::System::Int32 LJBIEMGJGBI = 0x3F7; // 0x0
	// static const ::System::String* OMKOHJDEIAI; // 0x0
	// static const ::System::String* HNIJMOIBJGH; // 0x0
	// static const ::System::String* MNEEHHBPLFM; // 0x0
	// static const ::System::String* KKKELDLCKEH; // 0x0
	// static const ::System::String* PEHOGBGBAFO; // 0x0
	// static const ::System::String* PNNOCABOKLG; // 0x0
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
	::System::String* GEJIJFFILEB; // 0x68
	::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x70
	::Class_1_34917908B7833130* HEBFHCBPMFI; // 0x78
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x80

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

	::Class_1_34917908B7833130* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_34917908B7833130*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_1EBC69662BB0DE70(::Class_2_CFFB97812D9F404D_BarType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CFFB97812D9F404D_BarType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_1EBC69662BB0DE70_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_5BF0E61BD5CA40A5_OFFSET))(this);
	}
};
