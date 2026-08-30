#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_52DE58AEA447C9CD;
class Class_1_7DE30353A96A8E09;
class Class_1_B10D9DB4D3D8BBA7;
class Class_1_FAC024BF6BF908E1;
class Class_1_FAC024BF6BF908E1_1;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16EBD250)
#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCECONFIG___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16EBD8B0)
#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCECONFIG___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16EBD800)
#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16EBD920)
#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16EBD860)
#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16EBD810)
#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EBD150)
#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBBD50)
#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x16EBD1F0)
#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x16EBD210)
#define CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x16EBD230)

inline static constexpr unsigned int Class_1_7DE30353A96A8E09__CreateConfigs_d__4_TypeDefinitionIndex = 80169;

class Class_1_7DE30353A96A8E09__CreateConfigs_d__4 : public ::System::Object
{
public:
	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_B10D9DB4D3D8BBA7*> _iter_5__4; // 0x10
	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_FAC024BF6BF908E1_1*> _iter_5__3; // 0x50
	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_FAC024BF6BF908E1*> _iter_5__2; // 0x90
	::System::ValueTuple_2<::System::UInt32, ::Class_1_52DE58AEA447C9CD*> __2__current; // 0xD0
	::Class_1_7DE30353A96A8E09* __4__this; // 0xE0
	::System::Int32 __1__state; // 0xE8
	::System::Int32 __l__initialThreadId; // 0xEC

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4___M__FINALLY2_OFFSET))(this);
	}

	::System::Void __m__Finally3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4___M__FINALLY3_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::Class_1_52DE58AEA447C9CD*> System_Collections_Generic_IEnumerator_System_ValueTuple_System_UInt32_RPG_Client_Challenge_Tierce_ChallengeTierceConfig___get_Current()
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::Class_1_52DE58AEA447C9CD*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCECONFIG___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::Class_1_52DE58AEA447C9CD*>>* System_Collections_Generic_IEnumerable_System_ValueTuple_System_UInt32_RPG_Client_Challenge_Tierce_ChallengeTierceConfig___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::Class_1_52DE58AEA447C9CD*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCECONFIG___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DE30353A96A8E09__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
