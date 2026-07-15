#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_6B399D161FCD382D_METHOD_3_7DC061678298D63E_OFFSET UNITYSDK_OFFSET(0x1BD586F0)
#define CLASS_3_6B399D161FCD382D_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1BD584C0)
#define CLASS_3_6B399D161FCD382D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD585F0)

inline static constexpr unsigned int Class_3_6B399D161FCD382D_TypeDefinitionIndex = 21347;

class Class_3_6B399D161FCD382D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::DynamicString* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x40
	::RPG::MVector3 Field_3_6; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B399D161FCD382D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6B399D161FCD382D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6B399D161FCD382D*&))((::PBYTE)hIl2Cpp + CLASS_3_6B399D161FCD382D_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7DC061678298D63E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6B399D161FCD382D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6B399D161FCD382D*))((::PBYTE)hIl2Cpp + CLASS_3_6B399D161FCD382D_METHOD_3_7DC061678298D63E_OFFSET))(a1, a2);
	}
};
