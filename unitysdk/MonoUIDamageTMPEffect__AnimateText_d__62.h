#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUIDamageTMPEffect;

#define MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14DB5C60)
#define MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14DB5D00)
#define MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14DB5D60)
#define MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14DB5D10)
#define MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14DB5C50)
#define MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB5C40)

inline static constexpr unsigned int MonoUIDamageTMPEffect__AnimateText_d__62_TypeDefinitionIndex = 89215;

class MonoUIDamageTMPEffect__AnimateText_d__62 : public ::System::Object
{
public:
	::MonoUIDamageTMPEffect* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT__ANIMATETEXT_D__62_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
