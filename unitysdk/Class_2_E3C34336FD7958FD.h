#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_752172F3794CD86F;
class Class_1_C03D623E9F32FBCB;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E3C34336FD7958FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88A23F0)
#define CLASS_2_E3C34336FD7958FD_INIT_OFFSET UNITYSDK_OFFSET(0x88A2370)
#define CLASS_2_E3C34336FD7958FD_METHOD_2_19D820FA43839657_OFFSET UNITYSDK_OFFSET(0x88A2650)
#define CLASS_2_E3C34336FD7958FD_METHOD_2_4E97BF4BF20F6FB9_OFFSET UNITYSDK_OFFSET(0x88A2440)
#define CLASS_2_E3C34336FD7958FD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x88A2770)
#define CLASS_2_E3C34336FD7958FD__CTOR_OFFSET UNITYSDK_OFFSET(0x88A27B0)
#define CLASS_2_E3C34336FD7958FD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88A28D0)
#define CLASS_2_E3C34336FD7958FD___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x88A2840)

inline static constexpr unsigned int Class_2_E3C34336FD7958FD_TypeDefinitionIndex = 51033;

class Class_2_E3C34336FD7958FD : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C03D623E9F32FBCB*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3C34336FD7958FD__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3C34336FD7958FD_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3C34336FD7958FD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4E97BF4BF20F6FB9(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_752172F3794CD86F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_752172F3794CD86F*>*))((::PBYTE)hIl2Cpp + CLASS_2_E3C34336FD7958FD_METHOD_2_4E97BF4BF20F6FB9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_19D820FA43839657(::System::UInt32 a1, ::Class_1_C03D623E9F32FBCB*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_C03D623E9F32FBCB*&))((::PBYTE)hIl2Cpp + CLASS_2_E3C34336FD7958FD_METHOD_2_19D820FA43839657_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3C34336FD7958FD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3C34336FD7958FD___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3C34336FD7958FD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
