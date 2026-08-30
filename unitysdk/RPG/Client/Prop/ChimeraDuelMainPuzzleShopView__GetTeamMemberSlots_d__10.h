#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleShopView; }
namespace RPG::Client::Prop { class ChimeraDuelTeamMemberSlotView; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDC224D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDC22720)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC226B0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDC227A0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC22710)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDC226C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC224C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0xDC22450)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleShopView__GetTeamMemberSlots_d__10_TypeDefinitionIndex = 77919;

	class ChimeraDuelMainPuzzleShopView__GetTeamMemberSlots_d__10 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelMainPuzzleShopView* __4__this; // 0x10
		::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Int32 _i_5__2; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_MOVENEXT_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView* System_Collections_Generic_IEnumerator_RPG_Client_Prop_ChimeraDuelTeamMemberSlotView__get_Current()
		{
			return ((::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView*>* System_Collections_Generic_IEnumerable_RPG_Client_Prop_ChimeraDuelTeamMemberSlotView__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPVIEW__GETTEAMMEMBERSLOTS_D__10_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
