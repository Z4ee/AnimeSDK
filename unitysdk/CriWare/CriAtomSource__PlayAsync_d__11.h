#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomSource; }
namespace System { class String; }

#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x164E2B90)
#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164E2E50)
#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164E2EB0)
#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x164E2E60)
#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164E2B80)
#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x164E2A30)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomSource__PlayAsync_d__11_TypeDefinitionIndex = 38645;

	class CriAtomSource__PlayAsync_d__11 : public ::System::Object
	{
	public:
		::System::String* cueName; // 0x10
		::CriWare::CriAtomExAcb* _acb_5__2; // 0x18
		::System::Object* __2__current; // 0x20
		::CriWare::CriAtomSource* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
