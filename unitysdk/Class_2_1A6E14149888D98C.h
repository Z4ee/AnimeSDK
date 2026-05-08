#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"
#include "unitysdk/Foundation/AssetPath.h"

class Class_2_CC6C6812D7C240D5;
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_1A6E14149888D98C_METHOD_2_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0xE90FE80)
#define CLASS_2_1A6E14149888D98C_METHOD_2_AA577F2F6FC9C010_OFFSET UNITYSDK_OFFSET(0xE90F8A0)
#define CLASS_2_1A6E14149888D98C_METHOD_2_C58793D9D6FBCA00_OFFSET UNITYSDK_OFFSET(0xE910010)
#define CLASS_2_1A6E14149888D98C_METHOD_2_D422300B758FC203_OFFSET UNITYSDK_OFFSET(0xE90F8E0)
#define CLASS_2_1A6E14149888D98C_METHOD_2_D9E0706C42215FC9_OFFSET UNITYSDK_OFFSET(0xE90FB50)
#define CLASS_2_1A6E14149888D98C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xE90F620)
#define CLASS_2_1A6E14149888D98C__CTOR_OFFSET UNITYSDK_OFFSET(0xE90F840)

inline static constexpr unsigned int Class_2_1A6E14149888D98C_TypeDefinitionIndex = 66781;

class Class_2_1A6E14149888D98C : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::Class_2_CC6C6812D7C240D5*>* Field_2_2; // 0x70
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_2_5; // 0x78
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_1; // 0x80
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_2_6; // 0x88
	::Class_2_F16D73323D71766B<::Foundation::AssetPath>* Field_2_4; // 0x90
	::Class_2_F16D73323D71766B<::System::Int32>* Field_2_3; // 0x98
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_ONCREATEPROPERTY_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_AA577F2F6FC9C010()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_AA577F2F6FC9C010_OFFSET))(this);
	}

	::System::Void Method_2_D422300B758FC203(::Class_2_CC6C6812D7C240D5* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CC6C6812D7C240D5*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_D422300B758FC203_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_D9E0706C42215FC9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_D9E0706C42215FC9_OFFSET))(this);
	}

	::System::Boolean Method_2_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_507A5122CD01412B_OFFSET))(this);
	}

	::System::Boolean Method_2_C58793D9D6FBCA00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6E14149888D98C_METHOD_2_C58793D9D6FBCA00_OFFSET))(this);
	}
};
