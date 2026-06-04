#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_8520D8479D0CC855_GET_CURACTION_OFFSET UNITYSDK_OFFSET(0xA777200)
#define CLASS_1_8520D8479D0CC855_GET_ISCURACTIONRUNNING_OFFSET UNITYSDK_OFFSET(0xA777240)
#define CLASS_1_8520D8479D0CC855_GET_MAXACTION_OFFSET UNITYSDK_OFFSET(0xA777220)
#define CLASS_1_8520D8479D0CC855_METHOD_1_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0xA776F00)
#define CLASS_1_8520D8479D0CC855_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA7771C0)
#define CLASS_1_8520D8479D0CC855_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA776EB0)
#define CLASS_1_8520D8479D0CC855_SET_CURACTION_OFFSET UNITYSDK_OFFSET(0xA777210)
#define CLASS_1_8520D8479D0CC855_SET_ISCURACTIONRUNNING_OFFSET UNITYSDK_OFFSET(0xA777250)
#define CLASS_1_8520D8479D0CC855_SET_MAXACTION_OFFSET UNITYSDK_OFFSET(0xA777230)
#define CLASS_1_8520D8479D0CC855__CTOR_OFFSET UNITYSDK_OFFSET(0xA776E60)

inline static constexpr unsigned int Class_1_8520D8479D0CC855_TypeDefinitionIndex = 53849;

class Class_1_8520D8479D0CC855 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x10
	::System::Boolean _IsCurActionRunning_k__BackingField; // 0x18
	::System::Int32 _CurAction_k__BackingField; // 0x1C
	::System::Int32 _MaxAction_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_METHOD_1_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Int32 get_CurAction()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_GET_CURACTION_OFFSET))(this);
	}

	::System::Void set_CurAction(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_SET_CURACTION_OFFSET))(this, a1);
	}

	::System::Int32 get_MaxAction()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_GET_MAXACTION_OFFSET))(this);
	}

	::System::Void set_MaxAction(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_SET_MAXACTION_OFFSET))(this, a1);
	}

	::System::Boolean get_IsCurActionRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_GET_ISCURACTIONRUNNING_OFFSET))(this);
	}

	::System::Void set_IsCurActionRunning(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_SET_ISCURACTIONRUNNING_OFFSET))(this, a1);
	}
};
