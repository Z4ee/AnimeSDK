#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_46AC6DDF5BA24A6F;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_EB41A2F832ED9399_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0x1790D8E0)
#define CLASS_1_EB41A2F832ED9399_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x1790D880)
#define CLASS_1_EB41A2F832ED9399_METHOD_1_538009D0B11159B3_OFFSET UNITYSDK_OFFSET(0x1790D930)
#define CLASS_1_EB41A2F832ED9399__CTOR_OFFSET UNITYSDK_OFFSET(0x1790D870)

inline static constexpr unsigned int Class_1_EB41A2F832ED9399_TypeDefinitionIndex = 79888;

class Class_1_EB41A2F832ED9399 : public ::System::Object
{
public:
	::Class_1_46AC6DDF5BA24A6F* OFJAAJJPHFN; // 0x10

	::System::Void _ctor(::Class_1_46AC6DDF5BA24A6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_46AC6DDF5BA24A6F*))((::PBYTE)hIl2Cpp + CLASS_1_EB41A2F832ED9399__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB41A2F832ED9399_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB41A2F832ED9399_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_538009D0B11159B3(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_EB41A2F832ED9399_METHOD_1_538009D0B11159B3_OFFSET))(this, a1);
	}
};
