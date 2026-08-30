#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F96B92B05C740DB;
namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_B4A29038FEECBAF0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFA77C0)
#define CLASS_1_B4A29038FEECBAF0___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA77F0)
#define CLASS_1_B4A29038FEECBAF0___C__GET_ISINASYNCINITIALIZE_B__36_0_OFFSET UNITYSDK_OFFSET(0xBFA7800)
#define CLASS_1_B4A29038FEECBAF0___C__UNREGISTERTSCIRIRENDERERS_B__155_0_OFFSET UNITYSDK_OFFSET(0xBFA7820)
#define CLASS_1_B4A29038FEECBAF0___C__UNREGISTERTSCIRIRENDERERS_B__155_1_OFFSET UNITYSDK_OFFSET(0xBFA78B0)

inline static constexpr unsigned int Class_1_B4A29038FEECBAF0___c_TypeDefinitionIndex = 70186;

class Class_1_B4A29038FEECBAF0___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_5F96B92B05C740DB*>** StaticGet___9__155_0()
	{
		return (::System::Predicate_1<::Class_1_5F96B92B05C740DB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0___c_TypeDefinitionIndex)->GetStaticField(0x67470);
	}
	static ::Class_1_B4A29038FEECBAF0___c** StaticGet___9()
	{
		return (::Class_1_B4A29038FEECBAF0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0___c_TypeDefinitionIndex)->GetStaticField(0x67478);
	}
	static ::System::Predicate_1<::Class_1_5F96B92B05C740DB*>** StaticGet___9__155_1()
	{
		return (::System::Predicate_1<::Class_1_5F96B92B05C740DB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0___c_TypeDefinitionIndex)->GetStaticField(0x67480);
	}
	static ::System::Func_2<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*, ::System::Boolean>** StaticGet___9__36_0()
	{
		return (::System::Func_2<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0___c_TypeDefinitionIndex)->GetStaticField(0x67488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_IsInAsyncInitialize_b__36_0(::RPG::Client::TimeSpaceCrisscrossGroupBehavior* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0___C__GET_ISINASYNCINITIALIZE_B__36_0_OFFSET))(this, a1);
	}

	::System::Boolean _UnregisterTscIRIRenderers_b__155_0(::Class_1_5F96B92B05C740DB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5F96B92B05C740DB*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0___C__UNREGISTERTSCIRIRENDERERS_B__155_0_OFFSET))(this, a1);
	}

	::System::Boolean _UnregisterTscIRIRenderers_b__155_1(::Class_1_5F96B92B05C740DB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5F96B92B05C740DB*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0___C__UNREGISTERTSCIRIRENDERERS_B__155_1_OFFSET))(this, a1);
	}
};
