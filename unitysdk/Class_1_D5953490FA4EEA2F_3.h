#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_158C3D5AE415448F_2;
class Class_1_6AE08EF87FF0FFCC;
namespace System { class Type; }

#define CLASS_1_D5953490FA4EEA2F_3_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x9529F60)
#define CLASS_1_D5953490FA4EEA2F_3_METHOD_1_3EACA5870CDCB012_OFFSET UNITYSDK_OFFSET(0x9529F00)
#define CLASS_1_D5953490FA4EEA2F_3_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x9529E90)
#define CLASS_1_D5953490FA4EEA2F_3__CTOR_OFFSET UNITYSDK_OFFSET(0x9529F10)

inline static constexpr unsigned int Class_1_D5953490FA4EEA2F_3_TypeDefinitionIndex = 57754;

class Class_1_D5953490FA4EEA2F_3 : public ::System::Object
{
public:
	::Class_1_158C3D5AE415448F_2* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_158C3D5AE415448F_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_158C3D5AE415448F_2*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_3__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_3_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_3EACA5870CDCB012()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_3_METHOD_1_3EACA5870CDCB012_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_3_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}
};
