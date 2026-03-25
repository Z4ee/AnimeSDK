#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_12D6B484717B7264;
class Class_1_6AE08EF87FF0FFCC;
namespace System { class Type; }

#define CLASS_1_D5953490FA4EEA2F_4_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x87663A0)
#define CLASS_1_D5953490FA4EEA2F_4_METHOD_1_BC9F83DBB4E359FE_OFFSET UNITYSDK_OFFSET(0x8766410)
#define CLASS_1_D5953490FA4EEA2F_4_METHOD_1_DC388DC6F82177FE_OFFSET UNITYSDK_OFFSET(0x8766590)
#define CLASS_1_D5953490FA4EEA2F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x8766510)

inline static constexpr unsigned int Class_1_D5953490FA4EEA2F_4_TypeDefinitionIndex = 50876;

class Class_1_D5953490FA4EEA2F_4 : public ::System::Object
{
public:
	::Class_1_12D6B484717B7264* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_12D6B484717B7264* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12D6B484717B7264*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_4__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_4_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_BC9F83DBB4E359FE()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_4_METHOD_1_BC9F83DBB4E359FE_OFFSET))(this);
	}

	::System::Void Method_1_DC388DC6F82177FE(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_4_METHOD_1_DC388DC6F82177FE_OFFSET))(this, a1);
	}
};
