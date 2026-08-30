#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_9B16484D3F1D4AA0_1_METHOD_3_292FA0EEF6659E6F_OFFSET UNITYSDK_OFFSET(0x1D0A8A20)
#define CLASS_3_9B16484D3F1D4AA0_1_METHOD_3_E29CAE0C7AB44E72_OFFSET UNITYSDK_OFFSET(0x1D0D3CF0)
#define CLASS_3_9B16484D3F1D4AA0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A8A10)

inline static constexpr unsigned int Class_3_9B16484D3F1D4AA0_1_TypeDefinitionIndex = 22902;

class Class_3_9B16484D3F1D4AA0_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* OJMMBJHNOCA; // 0x18
	::System::Boolean EKGDOELGLFK; // 0x20
	::System::Boolean GNDCCBNILML; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B16484D3F1D4AA0_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_E29CAE0C7AB44E72(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9B16484D3F1D4AA0_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9B16484D3F1D4AA0_1*&))((::PBYTE)hIl2Cpp + CLASS_3_9B16484D3F1D4AA0_1_METHOD_3_E29CAE0C7AB44E72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_292FA0EEF6659E6F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9B16484D3F1D4AA0_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9B16484D3F1D4AA0_1*))((::PBYTE)hIl2Cpp + CLASS_3_9B16484D3F1D4AA0_1_METHOD_3_292FA0EEF6659E6F_OFFSET))(a1, a2);
	}
};
