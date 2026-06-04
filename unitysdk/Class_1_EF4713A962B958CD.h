#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SlotMachineController; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_EF4713A962B958CD_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xA5F1CF0)
#define CLASS_1_EF4713A962B958CD_METHOD_1_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0xA5F1C60)
#define CLASS_1_EF4713A962B958CD_METHOD_1_75E1995964C63B95_OFFSET UNITYSDK_OFFSET(0xA5F1730)
#define CLASS_1_EF4713A962B958CD_METHOD_1_8941F45EA744C8C1_OFFSET UNITYSDK_OFFSET(0xA5F1570)
#define CLASS_1_EF4713A962B958CD_METHOD_1_E374F6C9CEE8E680_OFFSET UNITYSDK_OFFSET(0xA5F1BC0)
#define CLASS_1_EF4713A962B958CD__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F1560)

inline static constexpr unsigned int Class_1_EF4713A962B958CD_TypeDefinitionIndex = 66174;

class Class_1_EF4713A962B958CD : public ::System::Object
{
public:
	::UnityEngine::Coroutine* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::RPG::Client::SlotMachineController* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor(::RPG::Client::SlotMachineController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SlotMachineController*))((::PBYTE)hIl2Cpp + CLASS_1_EF4713A962B958CD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_8941F45EA744C8C1(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_EF4713A962B958CD_METHOD_1_8941F45EA744C8C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_75E1995964C63B95(::Il2CppArray<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_EF4713A962B958CD_METHOD_1_75E1995964C63B95_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF4713A962B958CD_METHOD_1_E374F6C9CEE8E680_OFFSET))(this, a1);
	}

	::System::Single Method_1_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF4713A962B958CD_METHOD_1_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF4713A962B958CD_METHOD_1_1F130271093617A5_OFFSET))(this);
	}
};
