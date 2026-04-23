#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DestroyRootPuzzleChess; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xADFF300)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xADFF890)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xADFF8F0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xADFF8A0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADFF2F0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0xADFE940)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleChess___DoMove_d__17_TypeDefinitionIndex = 72043;

	class DestroyRootPuzzleChess___DoMove_d__17 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* trailAnimObject; // 0x10
		::RPG::Client::Prop::DestroyRootPuzzleChess* __4__this; // 0x18
		::UnityEngine::Material* _trailMaterial_5__4; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Single _t_5__3; // 0x34
		::System::Single _height_5__5; // 0x38
		::System::Int32 _i_5__2; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS___DOMOVE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
