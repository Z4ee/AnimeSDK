#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_5F2C362102AF26AB_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1B5C0610)
#define CLASS_3_5F2C362102AF26AB_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1B5C0650)
#define CLASS_3_5F2C362102AF26AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C0640)

inline static constexpr unsigned int Class_3_5F2C362102AF26AB_TypeDefinitionIndex = 22897;

class Class_3_5F2C362102AF26AB : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::FormatString Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F2C362102AF26AB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5F2C362102AF26AB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5F2C362102AF26AB*&))((::PBYTE)hIl2Cpp + CLASS_3_5F2C362102AF26AB_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5F2C362102AF26AB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5F2C362102AF26AB*))((::PBYTE)hIl2Cpp + CLASS_3_5F2C362102AF26AB_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
