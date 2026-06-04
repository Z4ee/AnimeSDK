#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_20;
class Class_1_827FD69C8A8AE28F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EB7343D9CD261C8C_GET_FRIENDS_OFFSET UNITYSDK_OFFSET(0x10C9CE00)
#define CLASS_1_EB7343D9CD261C8C_METHOD_1_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0x10C9C930)
#define CLASS_1_EB7343D9CD261C8C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10C9CDC0)
#define CLASS_1_EB7343D9CD261C8C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C9CE10)

inline static constexpr unsigned int Class_1_EB7343D9CD261C8C_TypeDefinitionIndex = 69837;

class Class_1_EB7343D9CD261C8C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_827FD69C8A8AE28F*>* _Friends_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB7343D9CD261C8C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_676E4EF2BBA9B1C2(::Class_1_455008579EB95638_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_20*))((::PBYTE)hIl2Cpp + CLASS_1_EB7343D9CD261C8C_METHOD_1_676E4EF2BBA9B1C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB7343D9CD261C8C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_827FD69C8A8AE28F*>* get_Friends()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_827FD69C8A8AE28F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB7343D9CD261C8C_GET_FRIENDS_OFFSET))(this);
	}
};
