#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_C5E5FE6832D0C155_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EF0680)
#define CLASS_2_C5E5FE6832D0C155_DOONENTER_OFFSET UNITYSDK_OFFSET(0x16EF0780)
#define CLASS_2_C5E5FE6832D0C155_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x16EF0840)
#define CLASS_2_C5E5FE6832D0C155_DOONTICK_OFFSET UNITYSDK_OFFSET(0x16EF0910)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16EF1050)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16EF0AE0)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0x16EF0DC0)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0x16EF0A20)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0x16EF0B40)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16EF1210)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_D7D514A57F13FD3D_OFFSET UNITYSDK_OFFSET(0x16EF12A0)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16EF0A10)
#define CLASS_2_C5E5FE6832D0C155__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EF19A0)
#define CLASS_2_C5E5FE6832D0C155__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF02F0)

inline static constexpr unsigned int Class_2_C5E5FE6832D0C155_TypeDefinitionIndex = 78312;

class Class_2_C5E5FE6832D0C155 : public ::Class_1_29B23DDF98AF43AC
{
public:
	static ::System::String** StaticGet_MJACCEBBOOF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C5E5FE6832D0C155_TypeDefinitionIndex)->GetStaticField(0x41E0);
	}
	// static const ::System::Single JKOJMLHLCEL; // 0x0
	::System::Func_1<::System::Boolean>* CJNMKFKLPBO; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* PLOIEGDDOKF; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* KINLCNAJDMC; // 0xA8
	::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0xB0
	::System::Boolean EPBLHFIDDEI; // 0xB8
	::System::Boolean KIAFGDOOKHL; // 0xB9
	::System::Boolean EGNEMDJGBEM; // 0xBA
	::System::Single EIDFFKGFFIO; // 0xBC

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_DOONTICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_93190E731E31C79A_OFFSET))(this);
	}

	::System::Void Method_2_46E030E6F5465A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_46E030E6F5465A66_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_D7D514A57F13FD3D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_D7D514A57F13FD3D_OFFSET))(this, a1);
	}
};
