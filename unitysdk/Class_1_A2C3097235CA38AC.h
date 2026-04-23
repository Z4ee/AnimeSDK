#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_823;
namespace RPG::GameCore { class RogueTournWeeklyDisplayRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A2C3097235CA38AC_GET_HYPERPARAMS_OFFSET UNITYSDK_OFFSET(0x9924B50)
#define CLASS_1_A2C3097235CA38AC_METHOD_1_A15511C16BAB4E1B_OFFSET UNITYSDK_OFFSET(0x9924950)
#define CLASS_1_A2C3097235CA38AC_METHOD_1_CD5C08A2521794A0_OFFSET UNITYSDK_OFFSET(0x9924B60)
#define CLASS_1_A2C3097235CA38AC_METHOD_1_F9F6D6E5A8732245_OFFSET UNITYSDK_OFFSET(0x99249B0)
#define CLASS_1_A2C3097235CA38AC__CTOR_OFFSET UNITYSDK_OFFSET(0x99248D0)

inline static constexpr unsigned int Class_1_A2C3097235CA38AC_TypeDefinitionIndex = 62569;

class Class_1_A2C3097235CA38AC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_823*>* _HyperParams_k__BackingField; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2C3097235CA38AC__CTOR_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_A2C3097235CA38AC*>* Method_1_F9F6D6E5A8732245(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A2C3097235CA38AC*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A2C3097235CA38AC_METHOD_1_F9F6D6E5A8732245_OFFSET))(a1);
	}

	::RPG::GameCore::RogueTournWeeklyDisplayRow* Method_1_A15511C16BAB4E1B()
	{
		return ((::RPG::GameCore::RogueTournWeeklyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C3097235CA38AC_METHOD_1_A15511C16BAB4E1B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_823*>* get_HyperParams()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_823*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C3097235CA38AC_GET_HYPERPARAMS_OFFSET))(this);
	}

	::System::String* Method_1_CD5C08A2521794A0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C3097235CA38AC_METHOD_1_CD5C08A2521794A0_OFFSET))(this);
	}
};
