#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_1C30CE192ABE4C54_Class_0_16E7307DCC43CB2C_1;
class Class_2_DFCE341CCFEBAEC2;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16B9E7D0)
#define CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16B9ED10)
#define CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16B9EC60)
#define CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16B9ED90)
#define CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16B9ECC0)
#define CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16B9EC70)
#define CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B9E7B0)
#define CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x16B9E6B0)
#define CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x16B9E7C0)

inline static constexpr unsigned int Class_2_DFCE341CCFEBAEC2__GetAllValuesWithOverride_d__8_TypeDefinitionIndex = 54309;

class Class_2_DFCE341CCFEBAEC2__GetAllValuesWithOverride_d__8 : public ::System::Object
{
public:
	::Class_2_DFCE341CCFEBAEC2* __4__this; // 0x10
	::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::GameCore::StringHash, ::Class_1_1C30CE192ABE4C54_Class_0_16E7307DCC43CB2C_1*> __7__wrap1; // 0x18
	::System::Int32 __1__state; // 0x40
	::System::Int32 __l__initialThreadId; // 0x44
	::RPG::GameCore::StringHash _key_5__3; // 0x48
	::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint> __2__current; // 0x50

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8___M__FINALLY1_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_RPG_GameCore_StringHash_RPG_GameCore_FixPoint___get_Current()
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_RPG_GameCore_StringHash_RPG_GameCore_FixPoint___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFCE341CCFEBAEC2__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
