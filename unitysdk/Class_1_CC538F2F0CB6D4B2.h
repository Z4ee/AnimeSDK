#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CC538F2F0CB6D4B2_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x150423F0)
#define CLASS_1_CC538F2F0CB6D4B2_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x150424F0)
#define CLASS_1_CC538F2F0CB6D4B2_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x150425B0)
#define CLASS_1_CC538F2F0CB6D4B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x15042460)
#define CLASS_1_CC538F2F0CB6D4B2__CTOR_OFFSET UNITYSDK_OFFSET(0x15042450)

inline static constexpr unsigned int Class_1_CC538F2F0CB6D4B2_TypeDefinitionIndex = 84079;

class Class_1_CC538F2F0CB6D4B2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_CC538F2F0CB6D4B2*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_CC538F2F0CB6D4B2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC538F2F0CB6D4B2_TypeDefinitionIndex)->GetStaticField(0x50570);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC538F2F0CB6D4B2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC538F2F0CB6D4B2__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CC538F2F0CB6D4B2_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC538F2F0CB6D4B2_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC538F2F0CB6D4B2_METHOD_1_6F73A40265D5B980_OFFSET))();
	}
};
