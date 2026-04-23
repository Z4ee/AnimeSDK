#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

class Class_1_9671734BA1DFB3F8;
class Class_1_D975FC0407AA8C9D;
class Class_2_78C8EAAA63C4635F;
namespace RPG::GameCore { class MarbleLaunchAIConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17EA0F00)
#define CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17EA4660)
#define CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17EA46C0)
#define CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17EA4670)
#define CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EA0C60)
#define CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA0B70)
#define CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x17EA0DA0)
#define CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x17EA0E50)

inline static constexpr unsigned int Class_2_78C8EAAA63C4635F__GetLaunchResult_d__8_TypeDefinitionIndex = 38941;

class Class_2_78C8EAAA63C4635F__GetLaunchResult_d__8 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::Class_1_9671734BA1DFB3F8*>* __7__wrap4; // 0x10
	::Class_1_D975FC0407AA8C9D* _selfTeam_5__3; // 0x18
	::RPG::GameCore::MarbleLaunchAIConfig* _aiConfig_5__4; // 0x20
	::Class_1_9671734BA1DFB3F8* _enemyItem_5__6; // 0x28
	::System::Object* __2__current; // 0x30
	::Class_2_78C8EAAA63C4635F* __4__this; // 0x38
	::Class_1_9671734BA1DFB3F8* _selfItem_5__2; // 0x40
	::System::UInt32 aiRank; // 0x48
	::System::Single _angle_5__8; // 0x4C
	::System::Int32 _i_5__10; // 0x50
	::System::Int32 __1__state; // 0x54
	::System::UInt32 itemId; // 0x58
	::RPG::MVector2 _toTarget_5__7; // 0x5C
	::System::Single _interval_5__9; // 0x64
	::System::UInt32 playerId; // 0x68

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8___M__FINALLY2_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F__GETLAUNCHRESULT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
