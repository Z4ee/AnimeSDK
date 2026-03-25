#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_1A3239354F9648CA_GET_CURACTION_OFFSET UNITYSDK_OFFSET(0x8CACA20)
#define CLASS_1_1A3239354F9648CA_GET_ISCURACTIONRUNNING_OFFSET UNITYSDK_OFFSET(0x8CACA60)
#define CLASS_1_1A3239354F9648CA_GET_MAXACTION_OFFSET UNITYSDK_OFFSET(0x8CACA40)
#define CLASS_1_1A3239354F9648CA_METHOD_1_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0x8CAC7C0)
#define CLASS_1_1A3239354F9648CA_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8CAC9E0)
#define CLASS_1_1A3239354F9648CA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CAC770)
#define CLASS_1_1A3239354F9648CA_SET_CURACTION_OFFSET UNITYSDK_OFFSET(0x8CACA30)
#define CLASS_1_1A3239354F9648CA_SET_ISCURACTIONRUNNING_OFFSET UNITYSDK_OFFSET(0x8CACA70)
#define CLASS_1_1A3239354F9648CA_SET_MAXACTION_OFFSET UNITYSDK_OFFSET(0x8CACA50)
#define CLASS_1_1A3239354F9648CA__CTOR_OFFSET UNITYSDK_OFFSET(0x8CAC710)

inline static constexpr unsigned int Class_1_1A3239354F9648CA_TypeDefinitionIndex = 46451;

class Class_1_1A3239354F9648CA : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_3; // 0x10
	::System::Int32 _CurAction_k__BackingField; // 0x18
	::System::Boolean _IsCurActionRunning_k__BackingField; // 0x1C
	::System::Int32 _MaxAction_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_1A3239354F9648CA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A3239354F9648CA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A3239354F9648CA_METHOD_1_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A3239354F9648CA_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Int32 get_CurAction()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A3239354F9648CA_GET_CURACTION_OFFSET))(this);
	}

	::System::Void set_CurAction(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1A3239354F9648CA_SET_CURACTION_OFFSET))(this, value);
	}

	::System::Int32 get_MaxAction()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A3239354F9648CA_GET_MAXACTION_OFFSET))(this);
	}

	::System::Void set_MaxAction(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1A3239354F9648CA_SET_MAXACTION_OFFSET))(this, value);
	}

	::System::Boolean get_IsCurActionRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A3239354F9648CA_GET_ISCURACTIONRUNNING_OFFSET))(this);
	}

	::System::Void set_IsCurActionRunning(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1A3239354F9648CA_SET_ISCURACTIONRUNNING_OFFSET))(this, value);
	}
};
