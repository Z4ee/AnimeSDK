#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_BE37E8E5B7815649;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_118359CD98107FEA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x114A4F50)
#define CLASS_2_118359CD98107FEA_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x114A4480)
#define CLASS_2_118359CD98107FEA_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x114A48A0)
#define CLASS_2_118359CD98107FEA_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x114A4EE0)
#define CLASS_2_118359CD98107FEA_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x114A45C0)
#define CLASS_2_118359CD98107FEA_METHOD_2_FDCC5B03083ECBA7_OFFSET UNITYSDK_OFFSET(0x114A4BA0)
#define CLASS_2_118359CD98107FEA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x114A4510)
#define CLASS_2_118359CD98107FEA_ONRETURN_OFFSET UNITYSDK_OFFSET(0x114A4850)
#define CLASS_2_118359CD98107FEA__CTOR_OFFSET UNITYSDK_OFFSET(0x114A4E10)
#define CLASS_2_118359CD98107FEA__ONBIND_OFFSET UNITYSDK_OFFSET(0x114A4330)
#define CLASS_2_118359CD98107FEA___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x114A4E80)

inline static constexpr unsigned int Class_2_118359CD98107FEA_TypeDefinitionIndex = 58886;

class Class_2_118359CD98107FEA : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_4; // 0x60
	::System::Collections::Generic::List_1<::Class_2_BE37E8E5B7815649*>* Field_2_0; // 0x68
	::RPG::GameCore::GameEntity* Field_2_3; // 0x70
	::System::Int32 Field_2_2; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Void Method_2_FDCC5B03083ECBA7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA_METHOD_2_FDCC5B03083ECBA7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_118359CD98107FEA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
