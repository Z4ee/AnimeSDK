#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_44C514838B8BE92F_METHOD_3_07947D5C71D40FC8_OFFSET UNITYSDK_OFFSET(0x1CDC9B70)
#define CLASS_3_44C514838B8BE92F_METHOD_3_BFEE9074BE72CF8D_OFFSET UNITYSDK_OFFSET(0x1CDC9B30)
#define CLASS_3_44C514838B8BE92F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC9B60)

inline static constexpr unsigned int Class_3_44C514838B8BE92F_TypeDefinitionIndex = 24316;

class Class_3_44C514838B8BE92F : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 KGAPFBKGFIO; // 0x18
	::System::UInt32 PFDHNIJBGKO; // 0x1C
	::System::UInt32 PBOFFICPNBC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44C514838B8BE92F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BFEE9074BE72CF8D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_44C514838B8BE92F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_44C514838B8BE92F*&))((::PBYTE)hIl2Cpp + CLASS_3_44C514838B8BE92F_METHOD_3_BFEE9074BE72CF8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_07947D5C71D40FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_44C514838B8BE92F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_44C514838B8BE92F*))((::PBYTE)hIl2Cpp + CLASS_3_44C514838B8BE92F_METHOD_3_07947D5C71D40FC8_OFFSET))(a1, a2);
	}
};
