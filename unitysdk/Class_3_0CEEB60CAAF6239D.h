#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DesignerUserPrefsDomain.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_0CEEB60CAAF6239D_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1AF827E0)
#define CLASS_3_0CEEB60CAAF6239D_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1AF82820)
#define CLASS_3_0CEEB60CAAF6239D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF82810)

inline static constexpr unsigned int Class_3_0CEEB60CAAF6239D_TypeDefinitionIndex = 20500;

class Class_3_0CEEB60CAAF6239D : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::DesignerUserPrefsDomain Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x24
	::System::UInt32 Field_3_3; // 0x28

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
