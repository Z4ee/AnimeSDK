#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_C5E5FE6832D0C155_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10606DB0)
#define CLASS_2_C5E5FE6832D0C155_DOONENTER_OFFSET UNITYSDK_OFFSET(0x10606E50)
#define CLASS_2_C5E5FE6832D0C155_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x10606EB0)
#define CLASS_2_C5E5FE6832D0C155_DOONTICK_OFFSET UNITYSDK_OFFSET(0x10606F20)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_0C10FA1DF29251F5_OFFSET UNITYSDK_OFFSET(0x10607090)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10607030)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_2A1DB0895CBA0AB6_OFFSET UNITYSDK_OFFSET(0x106073F0)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x10607170)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x10606FD0)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x10607370)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10607260)
#define CLASS_2_C5E5FE6832D0C155_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10606FC0)
#define CLASS_2_C5E5FE6832D0C155__CCTOR_OFFSET UNITYSDK_OFFSET(0x10607860)
#define CLASS_2_C5E5FE6832D0C155__CTOR_OFFSET UNITYSDK_OFFSET(0x10606A10)
#define CLASS_2_C5E5FE6832D0C155___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106078C0)
#define CLASS_2_C5E5FE6832D0C155___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x106078A0)
#define CLASS_2_C5E5FE6832D0C155___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x106078B0)

inline static constexpr unsigned int Class_2_C5E5FE6832D0C155_TypeDefinitionIndex = 64233;

class Class_2_C5E5FE6832D0C155 : public ::Class_1_87854DF4F09D42E1
{
public:
	static ::System::String** StaticGet_Field_2_9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C5E5FE6832D0C155_TypeDefinitionIndex)->GetStaticField(0x205A0);
	}
	// static const ::System::Single Field_2_2; // 0x0
	::System::Func_1<::System::Boolean>* Field_2_4; // 0x98
	::RPG::GameCore::PropOptionTrigger_ButtonParam* Field_2_0; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_5; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* Field_2_3; // 0xB0
	::System::Single Field_2_7; // 0xB8
	::System::Boolean Field_2_6; // 0xBC
	::System::Boolean Field_2_1; // 0xBD
	::System::Boolean Field_2_8; // 0xBE

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

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C10FA1DF29251F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_0C10FA1DF29251F5_OFFSET))(this);
	}

	::System::Void Method_2_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_2A1DB0895CBA0AB6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155_METHOD_2_2A1DB0895CBA0AB6_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5E5FE6832D0C155___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
