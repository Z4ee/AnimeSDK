#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_355A2207C3B7A99D;
class Class_1_B10FFA91399295A9;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_7F8437B064FFBB24_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE66AA80)
#define CLASS_2_7F8437B064FFBB24_INIT_OFFSET UNITYSDK_OFFSET(0xE66AA00)
#define CLASS_2_7F8437B064FFBB24_METHOD_2_4E97BF4BF20F6FB9_OFFSET UNITYSDK_OFFSET(0xE66AAD0)
#define CLASS_2_7F8437B064FFBB24_METHOD_2_AFF78E9477630E0C_OFFSET UNITYSDK_OFFSET(0xE66ACE0)
#define CLASS_2_7F8437B064FFBB24_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE66ADC0)
#define CLASS_2_7F8437B064FFBB24__CTOR_OFFSET UNITYSDK_OFFSET(0xE66AE00)
#define CLASS_2_7F8437B064FFBB24___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE66AF20)
#define CLASS_2_7F8437B064FFBB24___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xE66AE90)

inline static constexpr unsigned int Class_2_7F8437B064FFBB24_TypeDefinitionIndex = 57916;

class Class_2_7F8437B064FFBB24 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_355A2207C3B7A99D*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4E97BF4BF20F6FB9(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B10FFA91399295A9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B10FFA91399295A9*>*))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24_METHOD_2_4E97BF4BF20F6FB9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AFF78E9477630E0C(::System::UInt32 a1, ::Class_1_355A2207C3B7A99D*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_355A2207C3B7A99D*&))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24_METHOD_2_AFF78E9477630E0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8437B064FFBB24___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
