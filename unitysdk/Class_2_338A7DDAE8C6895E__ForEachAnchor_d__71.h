#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PamAnchorRow; }

#define CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xABEA100)
#define CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_PAMANCHORROW__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xABEA2B0)
#define CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xABEA310)
#define CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xABEA2C0)
#define CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABEA0E0)
#define CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71__CTOR_OFFSET UNITYSDK_OFFSET(0xABE9D20)

inline static constexpr unsigned int Class_2_338A7DDAE8C6895E__ForEachAnchor_d__71_TypeDefinitionIndex = 62105;

class Class_2_338A7DDAE8C6895E__ForEachAnchor_d__71 : public ::System::Object
{
public:
	::RPG::GameCore::PamAnchorRow* __2__current; // 0x10
	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*> _e_5__3; // 0x18
	::System::UInt32 _floorID_5__2; // 0x58
	::System::Int32 __1__state; // 0x5C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71_MOVENEXT_OFFSET))(this);
	}

	::RPG::GameCore::PamAnchorRow* System_Collections_Generic_IEnumerator_RPG_GameCore_PamAnchorRow__get_Current()
	{
		return ((::RPG::GameCore::PamAnchorRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_PAMANCHORROW__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_338A7DDAE8C6895E__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
