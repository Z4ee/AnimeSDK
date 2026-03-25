#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StoryAtlasRow; }

#define CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1793F200)
#define CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_STORYATLASROW__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1793F2C0)
#define CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1793F320)
#define CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1793F2D0)
#define CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1793F1E0)
#define CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x1793F090)

inline static constexpr unsigned int Class_1_E588DAA75C373A19__GetEnumeratorByAvatarID_d__17_TypeDefinitionIndex = 11574;

class Class_1_E588DAA75C373A19__GetEnumeratorByAvatarID_d__17 : public ::System::Object
{
public:
	::RPG::GameCore::StoryAtlasRow* __2__current; // 0x10
	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*> _iter_5__2; // 0x18
	::System::Int32 __1__state; // 0x58
	::System::UInt32 avatarID; // 0x5C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17_MOVENEXT_OFFSET))(this);
	}

	::RPG::GameCore::StoryAtlasRow* System_Collections_Generic_IEnumerator_RPG_GameCore_StoryAtlasRow__get_Current()
	{
		return ((::RPG::GameCore::StoryAtlasRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_STORYATLASROW__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
