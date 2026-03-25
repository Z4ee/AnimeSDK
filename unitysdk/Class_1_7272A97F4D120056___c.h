#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4127FF4C06B070D3.h"
#include "unitysdk/System/Object.h"

class Class_1_7272A97F4D120056;
class Class_2_9DD8A46984F1AFFD;
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_7272A97F4D120056___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116EA050)
#define CLASS_1_7272A97F4D120056___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116EA080)
#define CLASS_1_7272A97F4D120056___C__GET__FIXEDUPDATEACTION_B__18_0_OFFSET UNITYSDK_OFFSET(0x116EA0C0)
#define CLASS_1_7272A97F4D120056___C__GET__LATEFIXEDUPDATEACTION_B__20_0_OFFSET UNITYSDK_OFFSET(0x116EA0E0)
#define CLASS_1_7272A97F4D120056___C___ONCLEANERBOTREMOVED_B__16_0_OFFSET UNITYSDK_OFFSET(0x116EA090)

inline static constexpr unsigned int Class_1_7272A97F4D120056___c_TypeDefinitionIndex = 62820;

class Class_1_7272A97F4D120056___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7272A97F4D120056*>** StaticGet___9__20_0()
	{
		return (::System::Action_1<::Class_1_7272A97F4D120056*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7272A97F4D120056___c_TypeDefinitionIndex)->GetStaticField(0x40D10);
	}
	static ::System::Action_4<::Class_1_7272A97F4D120056*, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IEntity*, ::Struct_2_4127FF4C06B070D3>** StaticGet___9__16_0()
	{
		return (::System::Action_4<::Class_1_7272A97F4D120056*, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IEntity*, ::Struct_2_4127FF4C06B070D3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7272A97F4D120056___c_TypeDefinitionIndex)->GetStaticField(0x40D18);
	}
	static ::Class_1_7272A97F4D120056___c** StaticGet___9()
	{
		return (::Class_1_7272A97F4D120056___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7272A97F4D120056___c_TypeDefinitionIndex)->GetStaticField(0x40D20);
	}
	static ::System::Action_1<::Class_1_7272A97F4D120056*>** StaticGet___9__18_0()
	{
		return (::System::Action_1<::Class_1_7272A97F4D120056*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7272A97F4D120056___c_TypeDefinitionIndex)->GetStaticField(0x40D28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7272A97F4D120056___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7272A97F4D120056___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnCleanerBotRemoved_b__16_0(::Class_1_7272A97F4D120056* self, ::Class_2_9DD8A46984F1AFFD* effectEntity, ::Entitas::IEntity* ent, ::Struct_2_4127FF4C06B070D3 param)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7272A97F4D120056*, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IEntity*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_1_7272A97F4D120056___C___ONCLEANERBOTREMOVED_B__16_0_OFFSET))(this, self, effectEntity, ent, param);
	}

	::System::Void _get__FixedUpdateAction_b__18_0(::Class_1_7272A97F4D120056* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7272A97F4D120056*))((::PBYTE)hIl2Cpp + CLASS_1_7272A97F4D120056___C__GET__FIXEDUPDATEACTION_B__18_0_OFFSET))(this, self);
	}

	::System::Void _get__LateFixedUpdateAction_b__20_0(::Class_1_7272A97F4D120056* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7272A97F4D120056*))((::PBYTE)hIl2Cpp + CLASS_1_7272A97F4D120056___C__GET__LATEFIXEDUPDATEACTION_B__20_0_OFFSET))(this, self);
	}
};
