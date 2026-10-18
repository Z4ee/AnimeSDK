#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ED80D3EC77F13F93;
class Class_1_EF9E6C735FBE2EC8;
namespace System { class Type; }

#define CLASS_1_FC62C8C7EFC3C653_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0xB183790)
#define CLASS_1_FC62C8C7EFC3C653_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xB183730)
#define CLASS_1_FC62C8C7EFC3C653_METHOD_1_DC388DC6F82177FE_OFFSET UNITYSDK_OFFSET(0xB183830)
#define CLASS_1_FC62C8C7EFC3C653__CTOR_OFFSET UNITYSDK_OFFSET(0xB1837E0)

inline static constexpr unsigned int Class_1_FC62C8C7EFC3C653_TypeDefinitionIndex = 62684;

class Class_1_FC62C8C7EFC3C653 : public ::System::Object
{
public:
	::Class_1_EF9E6C735FBE2EC8* CEFLLELKFOP; // 0x10

	::System::Void _ctor(::Class_1_EF9E6C735FBE2EC8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF9E6C735FBE2EC8*))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_DC388DC6F82177FE(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653_METHOD_1_DC388DC6F82177FE_OFFSET))(this, a1);
	}
};
