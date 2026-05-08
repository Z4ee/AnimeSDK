#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace System { class Object; }

#define MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x76EFD0)
#define MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x76EF70)
#define MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76EF50)
#define MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x76EF60)
#define MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x76EF80)
#define MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x76EF40)

namespace MoleMole
{
	inline static constexpr unsigned int ChessEntityCollection_Enumerator_TypeDefinitionIndex = 43284;

	struct alignas(8) ChessEntityCollection_Enumerator
	{
		::MoleMole::ChessEntityCollection* _innerCollection; // 0x10
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::Int32, ::MoleMole::ChessEntity*> _innerEnumerator; // 0x18

		::System::Void _ctor(::MoleMole::ChessEntityCollection* collection)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntityCollection*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR__CTOR_OFFSET))(this, collection);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR_RESET_OFFSET))(this);
		}

		::MoleMole::ChessEntity* get_Current()
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSENTITYCOLLECTION_ENUMERATOR_DISPOSE_OFFSET))(this);
		}
	};
}
