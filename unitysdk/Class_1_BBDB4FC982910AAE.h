#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_28;
class Class_0_16E4307DCC419505_30;
class Class_1_F878001C4B922748;
class Class_3_C66DEDBB208C643C;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BBDB4FC982910AAE_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD17E290)
#define CLASS_1_BBDB4FC982910AAE_GET_INSTANCECLIENT_OFFSET UNITYSDK_OFFSET(0xD17E280)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_00DB1B1197C37C43_OFFSET UNITYSDK_OFFSET(0xD17DC80)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_0FFCA426B159D768_OFFSET UNITYSDK_OFFSET(0xD17DB90)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_1F1C98D6DF492EBF_OFFSET UNITYSDK_OFFSET(0xD17DE40)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_41EF9FDF8B1D6495_OFFSET UNITYSDK_OFFSET(0xD17D980)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0xD17E040)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_B5E70EA91188B770_OFFSET UNITYSDK_OFFSET(0xD17DD30)
#define CLASS_1_BBDB4FC982910AAE_SET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD17E2A0)
#define CLASS_1_BBDB4FC982910AAE__CTOR_OFFSET UNITYSDK_OFFSET(0xD17D8D0)

inline static constexpr unsigned int Class_1_BBDB4FC982910AAE_TypeDefinitionIndex = 71120;

class Class_1_BBDB4FC982910AAE : public ::System::Object
{
public:
	::Entitas::IContext* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_30* _GameInstance_k__BackingField; // 0x18
	::Class_3_C66DEDBB208C643C* _InstanceClient_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F878001C4B922748*>* Field_1_3; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_30* a1, ::Entitas::IContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_30*, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41EF9FDF8B1D6495(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_41EF9FDF8B1D6495_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FFCA426B159D768(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_0FFCA426B159D768_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_28* Method_1_00DB1B1197C37C43(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_28*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_00DB1B1197C37C43_OFFSET))(this, a1);
	}

	::Entitas::IEntity* Method_1_B5E70EA91188B770(::System::Int32 a1)
	{
		return ((::Entitas::IEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_B5E70EA91188B770_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F1C98D6DF492EBF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_1F1C98D6DF492EBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_686221D5DF498040_OFFSET))(this);
	}

	::Class_3_C66DEDBB208C643C* get_InstanceClient()
	{
		return ((::Class_3_C66DEDBB208C643C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_GET_INSTANCECLIENT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_30* get_GameInstance()
	{
		return ((::Class_0_16E4307DCC419505_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_GET_GAMEINSTANCE_OFFSET))(this);
	}

	::System::Void set_GameInstance(::Class_0_16E4307DCC419505_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_SET_GAMEINSTANCE_OFFSET))(this, a1);
	}
};
