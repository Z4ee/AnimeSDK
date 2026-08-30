#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CA5EC10)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_GRIDFIGHTTRAIT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CA5ED80)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTTRAIT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CA5ED10)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CA5EE00)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CA5ED70)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CA5ED20)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CA5EC00)
#define RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA5EBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProjection__GetAllDummyTrait_d__49_TypeDefinitionIndex = 65138;

	class GridFightProjection__GetAllDummyTrait_d__49 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* __2__current; // 0x10
		::RPG::Client::GridFightProjection* __4__this; // 0x18
		::Il2CppArray<::System::UInt32>* __7__wrap1; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Int32 __7__wrap2; // 0x2C
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_MOVENEXT_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* System_Collections_Generic_IEnumerator_RPG_Client_GridFightTrait__get_Current()
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_GRIDFIGHTTRAIT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightTrait*>* System_Collections_Generic_IEnumerable_RPG_Client_GridFightTrait__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_GRIDFIGHTTRAIT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTION__GETALLDUMMYTRAIT_D__49_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
