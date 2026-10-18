#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimTrainEnergyGear; }

#define CLASS_3_B942B51FF20C85B4_METHOD_3_292FA0EEF6659E6F_OFFSET UNITYSDK_OFFSET(0x1D118DB0)
#define CLASS_3_B942B51FF20C85B4_METHOD_3_E29CAE0C7AB44E72_OFFSET UNITYSDK_OFFSET(0x1D118D70)
#define CLASS_3_B942B51FF20C85B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D118DA0)

inline static constexpr unsigned int Class_3_B942B51FF20C85B4_TypeDefinitionIndex = 21469;

class Class_3_B942B51FF20C85B4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* DBNCAMCCAFM; // 0x18
	::Il2CppArray<::RPG::GameCore::FiveDimTrainEnergyGear*>* FFDJIJCCDFO; // 0x20
	::RPG::GameCore::DynamicString* OAOGPNFPBCC; // 0x28
	::RPG::GameCore::DynamicFloat* IAMKAPIJLGP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B942B51FF20C85B4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_E29CAE0C7AB44E72(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B942B51FF20C85B4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B942B51FF20C85B4*&))((::PBYTE)hIl2Cpp + CLASS_3_B942B51FF20C85B4_METHOD_3_E29CAE0C7AB44E72_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_292FA0EEF6659E6F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B942B51FF20C85B4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B942B51FF20C85B4*))((::PBYTE)hIl2Cpp + CLASS_3_B942B51FF20C85B4_METHOD_3_292FA0EEF6659E6F_OFFSET))(a1, a2);
	}
};
