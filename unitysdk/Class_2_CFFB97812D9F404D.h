#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_CFFB97812D9F404D_BarType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_CFFB97812D9F404D_METHOD_2_1EBC69662BB0DE70_OFFSET UNITYSDK_OFFSET(0xA841F70)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA841CC0)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA842220)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0xA841E50)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xA8421C0)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xA841C60)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xA841940)
#define CLASS_2_CFFB97812D9F404D_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xA841C20)
#define CLASS_2_CFFB97812D9F404D_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xA8418F0)
#define CLASS_2_CFFB97812D9F404D_ONRETURN_OFFSET UNITYSDK_OFFSET(0xA841BD0)
#define CLASS_2_CFFB97812D9F404D__CTOR_OFFSET UNITYSDK_OFFSET(0xA842190)
#define CLASS_2_CFFB97812D9F404D__ONBIND_OFFSET UNITYSDK_OFFSET(0xA841DE0)
#define CLASS_2_CFFB97812D9F404D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA842280)

inline static constexpr unsigned int Class_2_CFFB97812D9F404D_TypeDefinitionIndex = 66933;

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
	::Class_1_CA217ABF4E3B4F3F* Field_2_10; // 0x60
	::System::String* Field_2_11; // 0x68
	::RPG::GameCore::GameEntity* Field_2_12; // 0x70
	::RPG::GameCore::BattleInstance* Field_2_13; // 0x78
	::RPG::Client::PrefabLoadMeta* Field_2_14; // 0x80

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

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_1EBC69662BB0DE70(::Class_2_CFFB97812D9F404D_BarType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CFFB97812D9F404D_BarType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_1EBC69662BB0DE70_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_CFFB97812D9F404D_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
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
