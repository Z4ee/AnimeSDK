#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E09E76FB067A44E8;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_D5953490FA4EEA2F_2_METHOD_1_3EACA5870CDCB012_OFFSET UNITYSDK_OFFSET(0xA8374A0)
#define CLASS_1_D5953490FA4EEA2F_2_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xA837440)
#define CLASS_1_D5953490FA4EEA2F_2_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xA837530)
#define CLASS_1_D5953490FA4EEA2F_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA8374B0)

inline static constexpr unsigned int Class_1_D5953490FA4EEA2F_2_TypeDefinitionIndex = 58555;

class Class_1_D5953490FA4EEA2F_2 : public ::System::Object
{
public:
	::Class_1_E09E76FB067A44E8* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_E09E76FB067A44E8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E09E76FB067A44E8*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_2__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_2_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_3EACA5870CDCB012()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_2_METHOD_1_3EACA5870CDCB012_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_2_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}
};
