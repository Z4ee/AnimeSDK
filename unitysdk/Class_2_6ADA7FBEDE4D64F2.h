#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_60.h"
#include "unitysdk/Struct_2_745325AFD7021EFB_1.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"

class Class_1_B7E341C5F1A6F199;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_0EA1ACE7302D5DD1_OFFSET UNITYSDK_OFFSET(0x19630AF0)
#define CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x19630300)
#define CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x19630140)
#define CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x19630540)
#define CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_A49677D8CF30A75A_OFFSET UNITYSDK_OFFSET(0x196310F0)
#define CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_B398A0CD4E90F689_OFFSET UNITYSDK_OFFSET(0x19630E30)
#define CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x19630860)
#define CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x19631060)
#define CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19630A60)
#define CLASS_2_6ADA7FBEDE4D64F2__CTOR_OFFSET UNITYSDK_OFFSET(0x196309A0)

inline static constexpr unsigned int Class_2_6ADA7FBEDE4D64F2_TypeDefinitionIndex = 56795;

class Class_2_6ADA7FBEDE4D64F2 : public ::Class_1_43BD383C98B4C0C5_60
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_8A77D15D7EA8B8D3>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>*>* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADA7FBEDE4D64F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0EA1ACE7302D5DD1(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_0EA1ACE7302D5DD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B398A0CD4E90F689(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_B398A0CD4E90F689_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_A49677D8CF30A75A(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>*))((::PBYTE)hIl2Cpp + CLASS_2_6ADA7FBEDE4D64F2_METHOD_2_A49677D8CF30A75A_OFFSET))(this, a1, a2);
	}
};
