#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_68598CDF0B0102C7;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_2CA604E23320A43B_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0x160F7B30)
#define CLASS_1_2CA604E23320A43B_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x160F7AD0)
#define CLASS_1_2CA604E23320A43B_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x160F7BD0)
#define CLASS_1_2CA604E23320A43B__CTOR_OFFSET UNITYSDK_OFFSET(0x160F7B80)

inline static constexpr unsigned int Class_1_2CA604E23320A43B_TypeDefinitionIndex = 60038;

class Class_1_2CA604E23320A43B : public ::System::Object
{
public:
	::Class_1_68598CDF0B0102C7* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_68598CDF0B0102C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_68598CDF0B0102C7*))((::PBYTE)hIl2Cpp + CLASS_1_2CA604E23320A43B__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CA604E23320A43B_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CA604E23320A43B_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_2CA604E23320A43B_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}
};
