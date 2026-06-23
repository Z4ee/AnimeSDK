#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"
#include "unitysdk/Foundation/AssetPath.h"

class Class_2_CC6C6812D7C240D5;
template <typename T> class Class_0_16E4307DCC419505_165;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_1A6E14149888D98C_METHOD_2_0D771ED379BBF670_OFFSET UNITYSDK_OFFSET(0x13FD6F10)
#define CLASS_2_1A6E14149888D98C_METHOD_2_1DCCC1086DB7F75B_OFFSET UNITYSDK_OFFSET(0x13FD6E10)
#define CLASS_2_1A6E14149888D98C_METHOD_2_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x13FD6700)
#define CLASS_2_1A6E14149888D98C_METHOD_2_D422300B758FC203_OFFSET UNITYSDK_OFFSET(0x13FD6BB0)
#define CLASS_2_1A6E14149888D98C_METHOD_2_D9E0706C42215FC9_OFFSET UNITYSDK_OFFSET(0x13FD6890)
#define CLASS_2_1A6E14149888D98C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13FD6480)
#define CLASS_2_1A6E14149888D98C__CTOR_OFFSET UNITYSDK_OFFSET(0x13FD66A0)

inline static constexpr unsigned int Class_2_1A6E14149888D98C_TypeDefinitionIndex = 54731;

class Class_2_1A6E14149888D98C : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::Class_2_CC6C6812D7C240D5*>* Field_2_2; // 0x60
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_2_6; // 0x68
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_1; // 0x70
	::Class_2_F16D73323D71766B<::Foundation::AssetPath>* Field_2_4; // 0x78
	::Class_2_F16D73323D71766B<::System::Int32>* Field_2_3; // 0x80
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_2_5; // 0x88
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_0; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean Method_2_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_507A5122CD01412B_OFFSET))(this);
	}

	::System::Int32 Method_2_D9E0706C42215FC9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_D9E0706C42215FC9_OFFSET))(this);
	}

	::System::Void Method_2_D422300B758FC203(::Class_2_CC6C6812D7C240D5* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CC6C6812D7C240D5*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_D422300B758FC203_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::AssetPath Method_2_1DCCC1086DB7F75B()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_1DCCC1086DB7F75B_OFFSET))(this);
	}

	::System::Boolean Method_2_0D771ED379BBF670()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_0D771ED379BBF670_OFFSET))(this);
	}
};
