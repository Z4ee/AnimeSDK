#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_37;
class Class_0_16E4307DCC419505_39;
class Class_1_F878001C4B922748;
class Class_3_9F40BD36E5F30CAE;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BBDB4FC982910AAE_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x189A25E0)
#define CLASS_1_BBDB4FC982910AAE_GET_INSTANCECLIENT_OFFSET UNITYSDK_OFFSET(0x189A25D0)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_00DB1B1197C37C43_OFFSET UNITYSDK_OFFSET(0x189A1F00)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x189A2300)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_0FFCA426B159D768_OFFSET UNITYSDK_OFFSET(0x189A1E10)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_1F1C98D6DF492EBF_OFFSET UNITYSDK_OFFSET(0x189A2100)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_41EF9FDF8B1D6495_OFFSET UNITYSDK_OFFSET(0x189A1C00)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_B5E70EA91188B770_OFFSET UNITYSDK_OFFSET(0x189A1FB0)
#define CLASS_1_BBDB4FC982910AAE_SET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x189A25F0)
#define CLASS_1_BBDB4FC982910AAE__CTOR_OFFSET UNITYSDK_OFFSET(0x189A1B50)

inline static constexpr unsigned int Class_1_BBDB4FC982910AAE_TypeDefinitionIndex = 76069;

class Class_1_BBDB4FC982910AAE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F878001C4B922748*>* HAMONNEFNHN; // 0x10
	::Class_3_9F40BD36E5F30CAE* _InstanceClient_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_39* _GameInstance_k__BackingField; // 0x20
	::Entitas::IContext* EEFMDEHLLFI; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_39* a1, ::Entitas::IContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_39*, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41EF9FDF8B1D6495(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_41EF9FDF8B1D6495_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FFCA426B159D768(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_0FFCA426B159D768_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_37* Method_1_00DB1B1197C37C43(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_37*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_00DB1B1197C37C43_OFFSET))(this, a1);
	}

	::Entitas::IEntity* Method_1_B5E70EA91188B770(::System::Int32 a1)
	{
		return ((::Entitas::IEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_B5E70EA91188B770_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F1C98D6DF492EBF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_1F1C98D6DF492EBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::Class_3_9F40BD36E5F30CAE* get_InstanceClient()
	{
		return ((::Class_3_9F40BD36E5F30CAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_GET_INSTANCECLIENT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_39* get_GameInstance()
	{
		return ((::Class_0_16E4307DCC419505_39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_GET_GAMEINSTANCE_OFFSET))(this);
	}

	::System::Void set_GameInstance(::Class_0_16E4307DCC419505_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_39*))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_SET_GAMEINSTANCE_OFFSET))(this, a1);
	}
};
