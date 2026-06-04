#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class VoiceAtlasRow; }

#define CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19179E90)
#define CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_VOICEATLASROW__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19179FB0)
#define CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1917A010)
#define CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19179FC0)
#define CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19179E70)
#define CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x19179D10)

inline static constexpr unsigned int Class_1_84E3E13EA17EF8EA__GetEnumeratorByAvatarID_d__17_TypeDefinitionIndex = 12071;

class Class_1_84E3E13EA17EF8EA__GetEnumeratorByAvatarID_d__17 : public ::System::Object
{
public:
	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VoiceAtlasRow*> _iter_5__2; // 0x10
	::RPG::GameCore::VoiceAtlasRow* __2__current; // 0x50
	::System::UInt32 avatarID; // 0x58
	::System::Int32 __1__state; // 0x5C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17_MOVENEXT_OFFSET))(this);
	}

	::RPG::GameCore::VoiceAtlasRow* System_Collections_Generic_IEnumerator_RPG_GameCore_VoiceAtlasRow__get_Current()
	{
		return ((::RPG::GameCore::VoiceAtlasRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_VOICEATLASROW__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84E3E13EA17EF8EA__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
