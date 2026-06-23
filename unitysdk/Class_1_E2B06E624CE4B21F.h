#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E2B06E624CE4B21F_METHOD_1_4D7E293DF02329E4_OFFSET UNITYSDK_OFFSET(0x18620A40)
#define CLASS_1_E2B06E624CE4B21F_METHOD_1_E6D439CDB9D9E47D_OFFSET UNITYSDK_OFFSET(0x186207C0)
#define CLASS_1_E2B06E624CE4B21F__CTOR_OFFSET UNITYSDK_OFFSET(0x18620A30)

inline static constexpr unsigned int Class_1_E2B06E624CE4B21F_TypeDefinitionIndex = 52122;

class Class_1_E2B06E624CE4B21F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2B06E624CE4B21F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E6D439CDB9D9E47D(::Il2CppArray<::System::String*>* a1, ::Struct_2_52A902145F5BE51A_4& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Struct_2_52A902145F5BE51A_4&))((::PBYTE)hIl2Cpp + CLASS_1_E2B06E624CE4B21F_METHOD_1_E6D439CDB9D9E47D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4D7E293DF02329E4(::Il2CppArray<::System::String*>* a1, ::Struct_2_52A902145F5BE51A_4& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Struct_2_52A902145F5BE51A_4&))((::PBYTE)hIl2Cpp + CLASS_1_E2B06E624CE4B21F_METHOD_1_4D7E293DF02329E4_OFFSET))(this, a1, a2);
	}
};
