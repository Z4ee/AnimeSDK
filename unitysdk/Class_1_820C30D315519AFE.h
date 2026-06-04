#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_874;
namespace RPG::GameCore { class RogueTournWeeklyDisplayRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_820C30D315519AFE_GET_HYPERPARAMS_OFFSET UNITYSDK_OFFSET(0x13A5CAC0)
#define CLASS_1_820C30D315519AFE_METHOD_1_335E9336B4B017B6_OFFSET UNITYSDK_OFFSET(0x13A5C870)
#define CLASS_1_820C30D315519AFE_METHOD_1_73C20AB211F3C819_OFFSET UNITYSDK_OFFSET(0x13A5C8D0)
#define CLASS_1_820C30D315519AFE_METHOD_1_CD5C08A2521794A0_OFFSET UNITYSDK_OFFSET(0x13A5CAD0)
#define CLASS_1_820C30D315519AFE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A5C7F0)

inline static constexpr unsigned int Class_1_820C30D315519AFE_TypeDefinitionIndex = 63502;

class Class_1_820C30D315519AFE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_874*>* _HyperParams_k__BackingField; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_820C30D315519AFE__CTOR_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_820C30D315519AFE*>* Method_1_73C20AB211F3C819(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_820C30D315519AFE*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_820C30D315519AFE_METHOD_1_73C20AB211F3C819_OFFSET))(a1);
	}

	::RPG::GameCore::RogueTournWeeklyDisplayRow* Method_1_335E9336B4B017B6()
	{
		return ((::RPG::GameCore::RogueTournWeeklyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_820C30D315519AFE_METHOD_1_335E9336B4B017B6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_874*>* get_HyperParams()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_874*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_820C30D315519AFE_GET_HYPERPARAMS_OFFSET))(this);
	}

	::System::String* Method_1_CD5C08A2521794A0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_820C30D315519AFE_METHOD_1_CD5C08A2521794A0_OFFSET))(this);
	}
};
