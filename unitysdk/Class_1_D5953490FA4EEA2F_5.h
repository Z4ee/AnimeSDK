#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6AE08EF87FF0FFCC;
class Class_1_7E80D7572E4E240A;
namespace System { class Type; }

#define CLASS_1_D5953490FA4EEA2F_5_METHOD_1_3EACA5870CDCB012_OFFSET UNITYSDK_OFFSET(0x87E1800)
#define CLASS_1_D5953490FA4EEA2F_5_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x87E1790)
#define CLASS_1_D5953490FA4EEA2F_5_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x87E1890)
#define CLASS_1_D5953490FA4EEA2F_5__CTOR_OFFSET UNITYSDK_OFFSET(0x87E1810)

inline static constexpr unsigned int Class_1_D5953490FA4EEA2F_5_TypeDefinitionIndex = 50877;

class Class_1_D5953490FA4EEA2F_5 : public ::System::Object
{
public:
	::Class_1_7E80D7572E4E240A* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_7E80D7572E4E240A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E80D7572E4E240A*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_5__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_5_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_3EACA5870CDCB012()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_5_METHOD_1_3EACA5870CDCB012_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_5_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}
};
