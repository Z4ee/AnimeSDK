#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomCueSheet; }
namespace CriWare { class CriAtomExAcbLoader; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CB7AC20)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CB7B680)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CB7B6E0)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CB7B690)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB7AAE0)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7A720)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1CB7AB90)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom__LoadAcbDataCoroutine_d__75_TypeDefinitionIndex = 38613;

	class CriAtom__LoadAcbDataCoroutine_d__75 : public ::System::Object
	{
	public:
		::CriWare::CriFsBinder* awbBinder; // 0x10
		::CriWare::CriAtom* __4__this; // 0x18
		::CriWare::CriAtomExAcbLoader* _asyncLoader_5__2; // 0x20
		::CriWare::CriAtomCueSheet* cueSheet; // 0x28
		::System::Object* __2__current; // 0x30
		::System::String* awbPath; // 0x38
		::Il2CppArray<::System::Byte>* acbData; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean loadAwbOnMemory; // 0x4C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
