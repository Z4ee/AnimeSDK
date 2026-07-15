#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SlotMachineController; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_FAA972067EA57B58_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x18F0E370)
#define CLASS_1_FAA972067EA57B58_METHOD_1_2BC4AD67E9BBFED6_OFFSET UNITYSDK_OFFSET(0x18F0DC50)
#define CLASS_1_FAA972067EA57B58_METHOD_1_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x18F0E2E0)
#define CLASS_1_FAA972067EA57B58_METHOD_1_E374F6C9CEE8E680_OFFSET UNITYSDK_OFFSET(0x18F0E240)
#define CLASS_1_FAA972067EA57B58_METHOD_1_F65A075E3E402475_OFFSET UNITYSDK_OFFSET(0x18F0DDE0)
#define CLASS_1_FAA972067EA57B58__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0DC40)

inline static constexpr unsigned int Class_1_FAA972067EA57B58_TypeDefinitionIndex = 67599;

class Class_1_FAA972067EA57B58 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::UnityEngine::Coroutine* Field_1_1; // 0x18
	::RPG::Client::SlotMachineController* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor(::RPG::Client::SlotMachineController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SlotMachineController*))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2BC4AD67E9BBFED6(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58_METHOD_1_2BC4AD67E9BBFED6_OFFSET))(this, a1);
	}

	::System::Void Method_1_F65A075E3E402475(::Il2CppArray<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58_METHOD_1_F65A075E3E402475_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58_METHOD_1_E374F6C9CEE8E680_OFFSET))(this, a1);
	}

	::System::Single Method_1_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58_METHOD_1_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58_METHOD_1_1F130271093617A5_OFFSET))(this);
	}
};
