#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomSource; }
namespace System { class String; }

#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C30CD20)
#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C30CEB0)
#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C30CF10)
#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C30CEC0)
#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C30CD10)
#define CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x1C30CD00)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomSource__PlayAsync_d__11_TypeDefinitionIndex = 32698;

	class CriAtomSource__PlayAsync_d__11 : public ::System::Object
	{
	public:
		::CriWare::CriAtomExAcb* _acb_5__2; // 0x10
		::System::String* cueName; // 0x18
		::CriWare::CriAtomSource* __4__this; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE__PLAYASYNC_D__11__CTOR_OFFSET))(this, __1__state);
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
