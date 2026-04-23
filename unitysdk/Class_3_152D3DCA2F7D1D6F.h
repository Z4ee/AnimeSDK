#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_152D3DCA2F7D1D6F_METHOD_3_85BCB50E8E44B2A4_OFFSET UNITYSDK_OFFSET(0x19174530)
#define CLASS_3_152D3DCA2F7D1D6F_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x191743B0)
#define CLASS_3_152D3DCA2F7D1D6F__CTOR_OFFSET UNITYSDK_OFFSET(0x19174480)

inline static constexpr unsigned int Class_3_152D3DCA2F7D1D6F_TypeDefinitionIndex = 22338;

class Class_3_152D3DCA2F7D1D6F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x28
	::System::Boolean Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_152D3DCA2F7D1D6F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_152D3DCA2F7D1D6F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_152D3DCA2F7D1D6F*&))((::PBYTE)hIl2Cpp + CLASS_3_152D3DCA2F7D1D6F_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_85BCB50E8E44B2A4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_152D3DCA2F7D1D6F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_152D3DCA2F7D1D6F*))((::PBYTE)hIl2Cpp + CLASS_3_152D3DCA2F7D1D6F_METHOD_3_85BCB50E8E44B2A4_OFFSET))(a1, a2);
	}
};
