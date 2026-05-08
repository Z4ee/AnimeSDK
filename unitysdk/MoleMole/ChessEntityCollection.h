#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/GetSetDataStructBaset_2.h"

class Class_0_16E4307DCC419505_292;
namespace MoleMole { class ChessEntity; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_CHESSENTITYCOLLECTION_ADDENTITY_OFFSET UNITYSDK_OFFSET(0x17431620)
#define MOLEMOLE_CHESSENTITYCOLLECTION_COUNT_OFFSET UNITYSDK_OFFSET(0x17431CE0)
#define MOLEMOLE_CHESSENTITYCOLLECTION_GETCOUNTINNER_OFFSET UNITYSDK_OFFSET(0x17431B80)
#define MOLEMOLE_CHESSENTITYCOLLECTION_GETENTITY_OFFSET UNITYSDK_OFFSET(0x174318E0)
#define MOLEMOLE_CHESSENTITYCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17431D30)
#define MOLEMOLE_CHESSENTITYCOLLECTION_GETVALUE_OFFSET UNITYSDK_OFFSET(0x17431A80)
#define MOLEMOLE_CHESSENTITYCOLLECTION_GET_TOREMOVECHESSENTITY_OFFSET UNITYSDK_OFFSET(0x17431540)
#define MOLEMOLE_CHESSENTITYCOLLECTION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x17431B30)
#define MOLEMOLE_CHESSENTITYCOLLECTION_REMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x174317A0)
#define MOLEMOLE_CHESSENTITYCOLLECTION_SETMODIFY_OFFSET UNITYSDK_OFFSET(0x17431DF0)
#define MOLEMOLE_CHESSENTITYCOLLECTION_SETVALUE_OFFSET UNITYSDK_OFFSET(0x17431AD0)
#define MOLEMOLE_CHESSENTITYCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17431E40)
#define MOLEMOLE_CHESSENTITYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17431E90)

namespace MoleMole
{
	inline static constexpr unsigned int ChessEntityCollection_TypeDefinitionIndex = 43283;

	class ChessEntityCollection : public ::MoleMole::FlowCanvas::Nodes::GetSetDataStructBaset_2<::MoleMole::ChessEntity*, ::System::Int32>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* _allChessEntity; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* _cachedForEnumerator; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* _toRemoveChessEntity; // 0x20
		::Class_0_16E4307DCC419505_292* _modify; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* get_toRemoveChessEntity()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_GET_TOREMOVECHESSENTITY_OFFSET))(this);
		}

		::System::Void AddEntity(::MoleMole::ChessEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_ADDENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveEntity(::MoleMole::ChessEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_REMOVEENTITY_OFFSET))(this, entity);
		}

		::MoleMole::ChessEntity* GetEntity(::System::Int32 runtimeID)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_GETENTITY_OFFSET))(this, runtimeID);
		}

		::MoleMole::ChessEntity* GetValue(::System::Int32 runtimeID)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_GETVALUE_OFFSET))(this, runtimeID);
		}

		::System::Boolean SetValue(::System::Int32 key, ::MoleMole::ChessEntity* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_SETVALUE_OFFSET))(this, key, value);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_ISEMPTY_OFFSET))(this);
		}

		::System::Int32 Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_COUNT_OFFSET))(this);
		}

		::System::Int32 GetCountInner()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_GETCOUNTINNER_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MoleMole::ChessEntity*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::ChessEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void SetModify(::Class_0_16E4307DCC419505_292* modify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_292*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_SETMODIFY_OFFSET))(this, modify);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
