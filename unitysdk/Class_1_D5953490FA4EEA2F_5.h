#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ED80D3EC77F13F93;
class Class_1_EFFEB9C331210706;
namespace System { class Type; }

#define CLASS_1_D5953490FA4EEA2F_5_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0x17BA5F80)
#define CLASS_1_D5953490FA4EEA2F_5_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x17BA5F20)
#define CLASS_1_D5953490FA4EEA2F_5_METHOD_1_8E0634CDC64D0684_OFFSET UNITYSDK_OFFSET(0x17BA6050)
#define CLASS_1_D5953490FA4EEA2F_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA5FD0)

inline static constexpr unsigned int Class_1_D5953490FA4EEA2F_5_TypeDefinitionIndex = 62796;

class Class_1_D5953490FA4EEA2F_5 : public ::System::Object
{
public:
	::Class_1_EFFEB9C331210706* KNEFKOMDCBD; // 0x10

	::System::Void _ctor(::Class_1_EFFEB9C331210706* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFFEB9C331210706*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_5__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_5_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_5_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_8E0634CDC64D0684(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_5_METHOD_1_8E0634CDC64D0684_OFFSET))(this, a1);
	}
};
