#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/AlchemyLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client::Prop { class AlchemyItem; }

#define RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC4C76D0)
#define RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC4C7AC0)
#define RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC4C7B20)
#define RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC4C7AD0)
#define RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4C76C0)
#define RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0xC4C75D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AlchemyItem__DoAnimChangeValue_d__11_TypeDefinitionIndex = 72719;

	class AlchemyItem__DoAnimChangeValue_d__11 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::AlchemyItem* __4__this; // 0x18
		::RPG::Client::Prop::AlchemyLogicType _lastColor_5__7; // 0x20
		::System::Int32 value; // 0x24
		::System::Single _animTime_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C
		::RPG::Client::Prop::AlchemyLogicType color; // 0x30
		::System::Single _totalTime_5__4; // 0x34
		::System::Int32 _oriValue_5__3; // 0x38
		::UnityEngine::Color _targetColor_5__6; // 0x3C
		::UnityEngine::Color _oriColor_5__5; // 0x4C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM__DOANIMCHANGEVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
