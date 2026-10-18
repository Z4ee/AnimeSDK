#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SlotMachineController; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_8FD766342995C65F_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xB774970)
#define CLASS_1_8FD766342995C65F_METHOD_1_3DD2FD0EE11D6502_OFFSET UNITYSDK_OFFSET(0xB7744B0)
#define CLASS_1_8FD766342995C65F_METHOD_1_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0xB7748E0)
#define CLASS_1_8FD766342995C65F_METHOD_1_D4338479DFAA7F52_OFFSET UNITYSDK_OFFSET(0xB774390)
#define CLASS_1_8FD766342995C65F_METHOD_1_E374F6C9CEE8E680_OFFSET UNITYSDK_OFFSET(0xB774840)
#define CLASS_1_8FD766342995C65F__CTOR_OFFSET UNITYSDK_OFFSET(0xB774380)

inline static constexpr unsigned int Class_1_8FD766342995C65F_TypeDefinitionIndex = 70758;

class Class_1_8FD766342995C65F : public ::System::Object
{
public:
	::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x10
	::RPG::Client::SlotMachineController* CEODOONOFBM; // 0x18
	::System::Action* MPKAFEJFNKN; // 0x20
	::System::Single PGMIOKKLHIE; // 0x28

	::System::Void _ctor(::RPG::Client::SlotMachineController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SlotMachineController*))((::PBYTE)hIl2Cpp + CLASS_1_8FD766342995C65F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D4338479DFAA7F52(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8FD766342995C65F_METHOD_1_D4338479DFAA7F52_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DD2FD0EE11D6502(::Il2CppArray<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8FD766342995C65F_METHOD_1_3DD2FD0EE11D6502_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8FD766342995C65F_METHOD_1_E374F6C9CEE8E680_OFFSET))(this, a1);
	}

	::System::Single Method_1_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8FD766342995C65F_METHOD_1_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FD766342995C65F_METHOD_1_1F130271093617A5_OFFSET))(this);
	}
};
