#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }

#define CLASS_3_11F2FCB246A27F6A_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1CEE4820)
#define CLASS_3_11F2FCB246A27F6A_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1CEE4860)
#define CLASS_3_11F2FCB246A27F6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE4850)

inline static constexpr unsigned int Class_3_11F2FCB246A27F6A_TypeDefinitionIndex = 23240;

class Class_3_11F2FCB246A27F6A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::JsonEnum* NOCCJLJPLKJ; // 0x18
	::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x20
	::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11F2FCB246A27F6A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_11F2FCB246A27F6A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_11F2FCB246A27F6A*&))((::PBYTE)hIl2Cpp + CLASS_3_11F2FCB246A27F6A_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_11F2FCB246A27F6A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_11F2FCB246A27F6A*))((::PBYTE)hIl2Cpp + CLASS_3_11F2FCB246A27F6A_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
