#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

class Class_3_6A6ED67B92DC299D_Config;

#define MOLEMOLE_MONOSIMPLERIGIDBODYOBJECT_START_OFFSET UNITYSDK_OFFSET(0x1605E6E0)
#define MOLEMOLE_MONOSIMPLERIGIDBODYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1605E870)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSimpleRigidbodyObject_TypeDefinitionIndex = 53666;

	class MonoSimpleRigidbodyObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		static ::System::Int32* StaticGet_Field_7_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSimpleRigidbodyObject_TypeDefinitionIndex)->GetStaticField(0x12220);
		}
		::Class_3_6A6ED67B92DC299D_Config* config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSIMPLERIGIDBODYOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSIMPLERIGIDBODYOBJECT_START_OFFSET))(this);
		}
	};
}
