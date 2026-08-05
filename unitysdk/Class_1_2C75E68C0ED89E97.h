#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_2C75E68C0ED89E97_METHOD_1_55C333AA27E99431_OFFSET UNITYSDK_OFFSET(0x1157D180)
#define CLASS_1_2C75E68C0ED89E97_METHOD_1_742825C7439F8AB6_OFFSET UNITYSDK_OFFSET(0x1157D230)
#define CLASS_1_2C75E68C0ED89E97_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x1157CFA0)
#define CLASS_1_2C75E68C0ED89E97__CCTOR_OFFSET UNITYSDK_OFFSET(0x1157CF90)
#define CLASS_1_2C75E68C0ED89E97__CTOR_OFFSET UNITYSDK_OFFSET(0x1157CF10)

inline static constexpr unsigned int Class_1_2C75E68C0ED89E97_TypeDefinitionIndex = 44573;

class Class_1_2C75E68C0ED89E97 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C75E68C0ED89E97_TypeDefinitionIndex)->GetStaticField(0xC860);
	}
	::UnityEngine::Material* Field_1_7; // 0x10
	::System::Collections::Generic::Stack_1<::UnityEngine::Material*>* Field_1_6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C75E68C0ED89E97__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C75E68C0ED89E97__CCTOR_OFFSET))();
	}

	::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C75E68C0ED89E97_METHOD_1_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_55C333AA27E99431()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C75E68C0ED89E97_METHOD_1_55C333AA27E99431_OFFSET))(this);
	}

	::System::Void Method_1_742825C7439F8AB6(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_2C75E68C0ED89E97_METHOD_1_742825C7439F8AB6_OFFSET))(this, a1);
	}
};
