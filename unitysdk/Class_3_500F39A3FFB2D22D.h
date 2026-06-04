#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropButtonConfig; }

#define CLASS_3_500F39A3FFB2D22D_METHOD_3_5DDA5735CCA4E60C_OFFSET UNITYSDK_OFFSET(0x18FF5F30)
#define CLASS_3_500F39A3FFB2D22D_METHOD_3_A6D862070568AC73_OFFSET UNITYSDK_OFFSET(0x18FF5FB0)
#define CLASS_3_500F39A3FFB2D22D__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF5F80)

inline static constexpr unsigned int Class_3_500F39A3FFB2D22D_TypeDefinitionIndex = 20238;

class Class_3_500F39A3FFB2D22D : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_500F39A3FFB2D22D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5DDA5735CCA4E60C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_500F39A3FFB2D22D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_500F39A3FFB2D22D*&))((::PBYTE)hIl2Cpp + CLASS_3_500F39A3FFB2D22D_METHOD_3_5DDA5735CCA4E60C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6D862070568AC73(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_500F39A3FFB2D22D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_500F39A3FFB2D22D*))((::PBYTE)hIl2Cpp + CLASS_3_500F39A3FFB2D22D_METHOD_3_A6D862070568AC73_OFFSET))(a1, a2);
	}
};
