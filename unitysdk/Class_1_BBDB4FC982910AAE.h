#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_0_16E4307DCC419505_31;
class Class_1_F878001C4B922748;
class Class_3_C66DEDBB208C643C;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BBDB4FC982910AAE_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9888F10)
#define CLASS_1_BBDB4FC982910AAE_GET_INSTANCECLIENT_OFFSET UNITYSDK_OFFSET(0x9888F00)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_18CE1970D42ACC70_OFFSET UNITYSDK_OFFSET(0x9888B70)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_5DBE0D8848C75126_OFFSET UNITYSDK_OFFSET(0x9888860)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_8B933DECC394D41D_OFFSET UNITYSDK_OFFSET(0x9888D10)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_971DAF87368385CC_OFFSET UNITYSDK_OFFSET(0x9888620)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_A913AABBB5B75EFA_OFFSET UNITYSDK_OFFSET(0x9888990)
#define CLASS_1_BBDB4FC982910AAE_METHOD_1_B5E70EA91188B770_OFFSET UNITYSDK_OFFSET(0x9888A70)
#define CLASS_1_BBDB4FC982910AAE_SET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9888F20)
#define CLASS_1_BBDB4FC982910AAE__CTOR_OFFSET UNITYSDK_OFFSET(0x9888570)

inline static constexpr unsigned int Class_1_BBDB4FC982910AAE_TypeDefinitionIndex = 70304;

class Class_1_BBDB4FC982910AAE : public ::System::Object
{
public:
	::Class_3_C66DEDBB208C643C* _InstanceClient_k__BackingField; // 0x10
	::Entitas::IContext* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F878001C4B922748*>* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_31* _GameInstance_k__BackingField; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_31* a1, ::Entitas::IContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_31*, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_971DAF87368385CC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_971DAF87368385CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_5DBE0D8848C75126(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_5DBE0D8848C75126_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_29* Method_1_A913AABBB5B75EFA(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_29*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_A913AABBB5B75EFA_OFFSET))(this, a1);
	}

	::Entitas::IEntity* Method_1_B5E70EA91188B770(::System::Int32 a1)
	{
		return ((::Entitas::IEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_B5E70EA91188B770_OFFSET))(this, a1);
	}

	::System::Void Method_1_18CE1970D42ACC70(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_18CE1970D42ACC70_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B933DECC394D41D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_METHOD_1_8B933DECC394D41D_OFFSET))(this);
	}

	::Class_3_C66DEDBB208C643C* get_InstanceClient()
	{
		return ((::Class_3_C66DEDBB208C643C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_GET_INSTANCECLIENT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_31* get_GameInstance()
	{
		return ((::Class_0_16E4307DCC419505_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_GET_GAMEINSTANCE_OFFSET))(this);
	}

	::System::Void set_GameInstance(::Class_0_16E4307DCC419505_31* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_31*))((::PBYTE)hIl2Cpp + CLASS_1_BBDB4FC982910AAE_SET_GAMEINSTANCE_OFFSET))(this, value);
	}
};
