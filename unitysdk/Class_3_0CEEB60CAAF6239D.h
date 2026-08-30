#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DesignerUserPrefsDomain.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_0CEEB60CAAF6239D_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1CB51920)
#define CLASS_3_0CEEB60CAAF6239D_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1CB51960)
#define CLASS_3_0CEEB60CAAF6239D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB51950)

inline static constexpr unsigned int Class_3_0CEEB60CAAF6239D_TypeDefinitionIndex = 21052;

class Class_3_0CEEB60CAAF6239D : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* BFLIFKBEOPJ; // 0x18
	::System::Boolean JJODEAGKDOH; // 0x20
	::System::UInt32 MNDFOPKBHKP; // 0x24
	::RPG::GameCore::DesignerUserPrefsDomain POIELLDDNFM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0CEEB60CAAF6239D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0CEEB60CAAF6239D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0CEEB60CAAF6239D*&))((::PBYTE)hIl2Cpp + CLASS_3_0CEEB60CAAF6239D_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0CEEB60CAAF6239D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0CEEB60CAAF6239D*))((::PBYTE)hIl2Cpp + CLASS_3_0CEEB60CAAF6239D_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
