#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_355A2207C3B7A99D;
class Class_1_B10FFA91399295A9;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3C98864A8BFC3647_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134CEDD0)
#define CLASS_2_3C98864A8BFC3647_INIT_OFFSET UNITYSDK_OFFSET(0x134CED50)
#define CLASS_2_3C98864A8BFC3647_METHOD_2_71C776EB7CFC7110_OFFSET UNITYSDK_OFFSET(0x134CEE20)
#define CLASS_2_3C98864A8BFC3647_METHOD_2_ABE6546F7C9289D5_OFFSET UNITYSDK_OFFSET(0x134CF060)
#define CLASS_2_3C98864A8BFC3647_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x134CF110)
#define CLASS_2_3C98864A8BFC3647__CTOR_OFFSET UNITYSDK_OFFSET(0x134CF150)
#define CLASS_2_3C98864A8BFC3647___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134CF260)
#define CLASS_2_3C98864A8BFC3647___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x134CF1E0)

inline static constexpr unsigned int Class_2_3C98864A8BFC3647_TypeDefinitionIndex = 58832;

class Class_2_3C98864A8BFC3647 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_355A2207C3B7A99D*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C98864A8BFC3647__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C98864A8BFC3647_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C98864A8BFC3647_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_71C776EB7CFC7110(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B10FFA91399295A9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B10FFA91399295A9*>*))((::PBYTE)hIl2Cpp + CLASS_2_3C98864A8BFC3647_METHOD_2_71C776EB7CFC7110_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_ABE6546F7C9289D5(::System::UInt32 a1, ::Class_1_355A2207C3B7A99D*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_355A2207C3B7A99D*&))((::PBYTE)hIl2Cpp + CLASS_2_3C98864A8BFC3647_METHOD_2_ABE6546F7C9289D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C98864A8BFC3647_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C98864A8BFC3647___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C98864A8BFC3647___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
