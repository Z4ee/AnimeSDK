#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_BE37E8E5B7815649;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_89123708156D4446_METHOD_2_6C9963159B9A9A14_OFFSET UNITYSDK_OFFSET(0x177CD4E0)
#define CLASS_2_89123708156D4446_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x177CCD20)
#define CLASS_2_89123708156D4446_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x177CD160)
#define CLASS_2_89123708156D4446_METHOD_2_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x177CCBB0)
#define CLASS_2_89123708156D4446_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x177CCC70)
#define CLASS_2_89123708156D4446_ONRETURN_OFFSET UNITYSDK_OFFSET(0x177CD110)
#define CLASS_2_89123708156D4446__CTOR_OFFSET UNITYSDK_OFFSET(0x177CD7E0)
#define CLASS_2_89123708156D4446__ONBIND_OFFSET UNITYSDK_OFFSET(0x177CC980)

inline static constexpr unsigned int Class_2_89123708156D4446_TypeDefinitionIndex = 71842;

class Class_2_89123708156D4446 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
	::System::Collections::Generic::List_1<::Class_2_BE37E8E5B7815649*>* MLJDAEMEBFJ; // 0x68
	::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0x70
	::System::Int32 CIAIBKIAHLB; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89123708156D4446__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89123708156D4446__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F26CE4FC4BEDB222(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_89123708156D4446_METHOD_2_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_89123708156D4446_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89123708156D4446_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89123708156D4446_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89123708156D4446_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_6C9963159B9A9A14(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_89123708156D4446_METHOD_2_6C9963159B9A9A14_OFFSET))(this, a1);
	}
};
