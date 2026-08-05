#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomCueSheet; }
namespace CriWare { class CriAtomExAcbLoader; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F900010)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F9003C0)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F900420)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F9003D0)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F8FFF20)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FFF10)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F8FFFA0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom__LoadAcbFileCoroutine_d__72_TypeDefinitionIndex = 34885;

	class CriAtom__LoadAcbFileCoroutine_d__72 : public ::System::Object
	{
	public:
		::CriWare::CriAtomCueSheet* cueSheet; // 0x10
		::System::String* acbPath; // 0x18
		::System::Object* __2__current; // 0x20
		::System::String* awbPath; // 0x28
		::CriWare::CriAtomExAcbLoader* _asyncLoader_5__2; // 0x30
		::CriWare::CriFsBinder* binder; // 0x38
		::CriWare::CriAtom* __4__this; // 0x40
		::System::Boolean loadAwbOnMemory; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__72_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
