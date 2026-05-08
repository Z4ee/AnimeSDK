#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GameEngine; }

#define MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1604E7E0)
#define MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1604EBB0)
#define MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1604EC10)
#define MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1604EBC0)
#define MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1604E7D0)
#define MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40__CTOR_OFFSET UNITYSDK_OFFSET(0x1604E7C0)

namespace MoleMole
{
	inline static constexpr unsigned int GameEngine_Class_1_48FC0950BDBA8F40_TypeDefinitionIndex = 59749;

	class GameEngine_Class_1_48FC0950BDBA8F40 : public ::System::Object
	{
	public:
		::MoleMole::GameEngine* Field_1_2; // 0x10
		::System::Object* Field_1_1; // 0x18
		::System::Int32 Field_1_0; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CLASS_1_48FC0950BDBA8F40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
