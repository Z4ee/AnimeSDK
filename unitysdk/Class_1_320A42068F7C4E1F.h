#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_320A42068F7C4E1F_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0xEB9B390)
#define CLASS_1_320A42068F7C4E1F_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xEB9B330)
#define CLASS_1_320A42068F7C4E1F_METHOD_1_DC388DC6F82177FE_OFFSET UNITYSDK_OFFSET(0xEB9B3E0)
#define CLASS_1_320A42068F7C4E1F__CTOR_OFFSET UNITYSDK_OFFSET(0xEB9B470)

inline static constexpr unsigned int Class_1_320A42068F7C4E1F_TypeDefinitionIndex = 62685;

class Class_1_320A42068F7C4E1F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_320A42068F7C4E1F__CTOR_OFFSET))(this);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_320A42068F7C4E1F_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_320A42068F7C4E1F_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_DC388DC6F82177FE(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_320A42068F7C4E1F_METHOD_1_DC388DC6F82177FE_OFFSET))(this, a1);
	}
};
