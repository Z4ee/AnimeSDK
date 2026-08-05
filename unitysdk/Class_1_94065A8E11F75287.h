#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_94065A8E11F75287_METHOD_1_503E60B45DC1B292_OFFSET UNITYSDK_OFFSET(0xB190C10)
#define CLASS_1_94065A8E11F75287_METHOD_1_9F899AF33D786B2D_OFFSET UNITYSDK_OFFSET(0xB190FD0)
#define CLASS_1_94065A8E11F75287__CTOR_OFFSET UNITYSDK_OFFSET(0xB190FC0)

inline static constexpr unsigned int Class_1_94065A8E11F75287_TypeDefinitionIndex = 55918;

class Class_1_94065A8E11F75287 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94065A8E11F75287__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_503E60B45DC1B292(::Il2CppArray<::System::String*>* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_1_94065A8E11F75287_METHOD_1_503E60B45DC1B292_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9F899AF33D786B2D(::Il2CppArray<::System::String*>* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_1_94065A8E11F75287_METHOD_1_9F899AF33D786B2D_OFFSET))(this, a1, a2);
	}
};
