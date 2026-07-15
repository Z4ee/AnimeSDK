#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_CFFB97812D9F404D_BarType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_CFFB97812D9F404D_METHOD_2_1EBC69662BB0DE70_OFFSET UNITYSDK_OFFSET(0x186E7A40)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x186E77A0)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x186E7370)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x186E7920)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x186E7740)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x186E7700)
#define CLASS_2_CFFB97812D9F404D_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x186E7320)
#define CLASS_2_CFFB97812D9F404D_ONRETURN_OFFSET UNITYSDK_OFFSET(0x186E76B0)
#define CLASS_2_CFFB97812D9F404D__CTOR_OFFSET UNITYSDK_OFFSET(0x186E7C60)
#define CLASS_2_CFFB97812D9F404D__ONBIND_OFFSET UNITYSDK_OFFSET(0x186E78C0)

inline static constexpr unsigned int Class_2_CFFB97812D9F404D_TypeDefinitionIndex = 68377;

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
	::RPG::Client::PrefabLoadMeta* Field_2_10; // 0x60
	::System::String* Field_2_11; // 0x68
	::Class_1_CA217ABF4E3B4F3F* Field_2_12; // 0x70
	::RPG::GameCore::GameEntity* Field_2_13; // 0x78
	::RPG::GameCore::BattleInstance* Field_2_14; // 0x80

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
