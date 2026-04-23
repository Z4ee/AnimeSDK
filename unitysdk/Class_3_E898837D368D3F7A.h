#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_E898837D368D3F7A_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x18563D00)
#define CLASS_3_E898837D368D3F7A_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x18563D80)
#define CLASS_3_E898837D368D3F7A__CTOR_OFFSET UNITYSDK_OFFSET(0x18563D50)

inline static constexpr unsigned int Class_3_E898837D368D3F7A_TypeDefinitionIndex = 22736;

class Class_3_E898837D368D3F7A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FormatString Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E898837D368D3F7A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E898837D368D3F7A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E898837D368D3F7A*&))((::PBYTE)hIl2Cpp + CLASS_3_E898837D368D3F7A_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E898837D368D3F7A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E898837D368D3F7A*))((::PBYTE)hIl2Cpp + CLASS_3_E898837D368D3F7A_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
