#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2F965EEA2FCEF2B1;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_D5953490FA4EEA2F_6_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0xB4C55C0)
#define CLASS_1_D5953490FA4EEA2F_6_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xB4C5560)
#define CLASS_1_D5953490FA4EEA2F_6_METHOD_1_9A7B1D406C8D78E8_OFFSET UNITYSDK_OFFSET(0xB4C5690)
#define CLASS_1_D5953490FA4EEA2F_6__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C5610)

inline static constexpr unsigned int Class_1_D5953490FA4EEA2F_6_TypeDefinitionIndex = 62797;

class Class_1_D5953490FA4EEA2F_6 : public ::System::Object
{
public:
	::Class_1_2F965EEA2FCEF2B1* LBKOCPAGPDE; // 0x10

	::System::Void _ctor(::Class_1_2F965EEA2FCEF2B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2F965EEA2FCEF2B1*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_6__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_6_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_6_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_9A7B1D406C8D78E8(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_6_METHOD_1_9A7B1D406C8D78E8_OFFSET))(this, a1);
	}
};
