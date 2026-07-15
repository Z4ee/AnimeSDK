#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_44D35BAFA44CC880_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1B567AA0)
#define CLASS_3_44D35BAFA44CC880_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1B567AE0)
#define CLASS_3_44D35BAFA44CC880__CTOR_OFFSET UNITYSDK_OFFSET(0x1B567AD0)

inline static constexpr unsigned int Class_3_44D35BAFA44CC880_TypeDefinitionIndex = 21796;

class Class_3_44D35BAFA44CC880 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::GameCore::DynamicValueContextScope Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44D35BAFA44CC880__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_44D35BAFA44CC880*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_44D35BAFA44CC880*&))((::PBYTE)hIl2Cpp + CLASS_3_44D35BAFA44CC880_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_44D35BAFA44CC880* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_44D35BAFA44CC880*))((::PBYTE)hIl2Cpp + CLASS_3_44D35BAFA44CC880_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
