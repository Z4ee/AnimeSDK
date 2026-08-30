#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomCueSheet; }
namespace CriWare { class CriAtomExAcbLoader; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CB7B830)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CB7BF60)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CB7BFC0)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CB7BF70)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB7B6F0)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7A690)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1CB7B7A0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom__LoadAcbFileCoroutine_d__73_TypeDefinitionIndex = 38614;

	class CriAtom__LoadAcbFileCoroutine_d__73 : public ::System::Object
	{
	public:
		::CriWare::CriAtomExAcbLoader* _asyncLoader_5__2; // 0x10
		::CriWare::CriAtom* __4__this; // 0x18
		::CriWare::CriAtomCueSheet* cueSheet; // 0x20
		::System::String* awbPath; // 0x28
		::System::String* acbPath; // 0x30
		::CriWare::CriFsBinder* binder; // 0x38
		::System::Object* __2__current; // 0x40
		::System::Boolean loadAwbOnMemory; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
