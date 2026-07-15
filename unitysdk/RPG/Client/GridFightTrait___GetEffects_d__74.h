#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A5F94B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IGRIDFIGHTTRAITEFFECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A5F9B30)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IGRIDFIGHTTRAITEFFECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A5F9AC0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A5F9BB0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A5F9B20)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A5F9AD0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5F92C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F88C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1A5F94A0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1A5F93A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait___GetEffects_d__74_TypeDefinitionIndex = 62507;

	class GridFightTrait___GetEffects_d__74 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* __4__this; // 0x10
		::RPG::Client::IGridFightTraitEffect* _effect_5__3; // 0x18
		::RPG::Client::IGridFightTraitEffect* __2__current; // 0x20
		::System::Collections::Generic::IEnumerator_1<::RPG::Client::IGridFightTraitEffect*>* __7__wrap3; // 0x28
		::System::Collections::Generic::List_1_Enumerator<::RPG::Client::IGridFightTraitEffect*> __7__wrap1; // 0x30
		::System::Int32 __l__initialThreadId; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74___M__FINALLY2_OFFSET))(this);
		}

		::RPG::Client::IGridFightTraitEffect* System_Collections_Generic_IEnumerator_RPG_Client_IGridFightTraitEffect__get_Current()
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IGRIDFIGHTTRAITEFFECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::IGridFightTraitEffect*>* System_Collections_Generic_IEnumerable_RPG_Client_IGridFightTraitEffect__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IGRIDFIGHTTRAITEFFECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
