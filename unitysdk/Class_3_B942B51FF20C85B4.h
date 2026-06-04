#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimTrainEnergyGear; }

#define CLASS_3_B942B51FF20C85B4_METHOD_3_292FA0EEF6659E6F_OFFSET UNITYSDK_OFFSET(0x191B8E00)
#define CLASS_3_B942B51FF20C85B4_METHOD_3_F73DE1E21818E48C_OFFSET UNITYSDK_OFFSET(0x191B8D80)
#define CLASS_3_B942B51FF20C85B4__CTOR_OFFSET UNITYSDK_OFFSET(0x191B8DD0)

inline static constexpr unsigned int Class_3_B942B51FF20C85B4_TypeDefinitionIndex = 20276;

class Class_3_B942B51FF20C85B4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::FiveDimTrainEnergyGear*>* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B942B51FF20C85B4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F73DE1E21818E48C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B942B51FF20C85B4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B942B51FF20C85B4*&))((::PBYTE)hIl2Cpp + CLASS_3_B942B51FF20C85B4_METHOD_3_F73DE1E21818E48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_292FA0EEF6659E6F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B942B51FF20C85B4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B942B51FF20C85B4*))((::PBYTE)hIl2Cpp + CLASS_3_B942B51FF20C85B4_METHOD_3_292FA0EEF6659E6F_OFFSET))(a1, a2);
	}
};
