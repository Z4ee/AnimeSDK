#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TypeTextComponent; }
namespace System { class String; }

#define MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x173C3820)
#define MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x173C5110)
#define MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x173C5170)
#define MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x173C5120)
#define MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173C3810)
#define MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8__CTOR_OFFSET UNITYSDK_OFFSET(0x173C3800)

namespace MoleMole
{
	inline static constexpr unsigned int TypeTextComponent_Class_1_1CE966DD71EFF4F8_TypeDefinitionIndex = 72447;

	class TypeTextComponent_Class_1_1CE966DD71EFF4F8 : public ::System::Object
	{
	public:
		::System::String* Field_1_4; // 0x10
		::System::String* Field_1_0; // 0x18
		::System::Object* Field_1_2; // 0x20
		::MoleMole::TypeTextComponent* Field_1_1; // 0x28
		::System::Int32 Field_1_11; // 0x30
		::System::Single Field_1_6; // 0x34
		::System::Int32 Field_1_3; // 0x38
		::System::Int32 Field_1_7; // 0x3C
		::System::Boolean Field_1_5; // 0x40

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_CLASS_1_1CE966DD71EFF4F8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
