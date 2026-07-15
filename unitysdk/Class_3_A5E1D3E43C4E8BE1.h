#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialStateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_A5E1D3E43C4E8BE1_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x1ACD2A70)
#define CLASS_3_A5E1D3E43C4E8BE1_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1ACD2B10)
#define CLASS_3_A5E1D3E43C4E8BE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACD2AD0)

inline static constexpr unsigned int Class_3_A5E1D3E43C4E8BE1_TypeDefinitionIndex = 19412;

class Class_3_A5E1D3E43C4E8BE1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::RPG::GameCore::SpecialStateType Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5E1D3E43C4E8BE1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A5E1D3E43C4E8BE1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A5E1D3E43C4E8BE1*&))((::PBYTE)hIl2Cpp + CLASS_3_A5E1D3E43C4E8BE1_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A5E1D3E43C4E8BE1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A5E1D3E43C4E8BE1*))((::PBYTE)hIl2Cpp + CLASS_3_A5E1D3E43C4E8BE1_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
