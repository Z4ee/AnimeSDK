#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_4DE3384CF7EA8A53;
class Class_1_8C728FF5E0D9FC84;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F196B0)
#define CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F19900)
#define CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F19890)
#define CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F19980)
#define CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F198F0)
#define CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F198A0)
#define CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F19690)
#define CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x15F16210)
#define CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15F196A0)

inline static constexpr unsigned int Class_1_8C728FF5E0D9FC84__GetLayerPropertyProxies_d__19_TypeDefinitionIndex = 47592;

class Class_1_8C728FF5E0D9FC84__GetLayerPropertyProxies_d__19 : public ::System::Object
{
public:
	::System::String* __2__current; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::Class_1_4DE3384CF7EA8A53*> __7__wrap1; // 0x18
	::Class_1_8C728FF5E0D9FC84* __4__this; // 0x30
	::RPG::GameCore::EnviromentControlPriority p; // 0x38
	::System::Int32 __1__state; // 0x3C
	::System::Int32 __l__initialThreadId; // 0x40
	::RPG::GameCore::EnviromentControlPriority __3__p; // 0x44

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19___M__FINALLY1_OFFSET))(this);
	}

	::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84__GETLAYERPROPERTYPROXIES_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
