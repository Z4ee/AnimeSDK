#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C3183153408A386B.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_C69D26FE77F9D6B4;
namespace RPG::GameCore { class FreeStyleController; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }

#define CLASS_2_C69D26FE77F9D6B4_CLASS_2_43F02689CE345713_METHOD_2_28E7D161A90CB0C5_OFFSET UNITYSDK_OFFSET(0x1186E6D0)
#define CLASS_2_C69D26FE77F9D6B4_CLASS_2_43F02689CE345713_METHOD_2_D3BEE66CA1052C0F_OFFSET UNITYSDK_OFFSET(0x1186E500)
#define CLASS_2_C69D26FE77F9D6B4_CLASS_2_43F02689CE345713__CTOR_OFFSET UNITYSDK_OFFSET(0x1186A5A0)

inline static constexpr unsigned int Class_2_C69D26FE77F9D6B4_Class_2_43F02689CE345713_TypeDefinitionIndex = 52791;

class Class_2_C69D26FE77F9D6B4_Class_2_43F02689CE345713 : public ::Class_1_C3183153408A386B
{
public:
	::RPG::GameCore::FreeStyleMotionInfoConfig* Field_2_2; // 0x10
	::System::UInt32 Field_2_0; // 0x18
	::System::Int32 Field_2_1; // 0x1C
	::System::Nullable_1<::Struct_2_648594091F1A68D6> Field_2_3; // 0x20

	::System::Void _ctor(::Class_2_C69D26FE77F9D6B4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C69D26FE77F9D6B4*))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_CLASS_2_43F02689CE345713__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3BEE66CA1052C0F(::RPG::GameCore::FreeStyleController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_CLASS_2_43F02689CE345713_METHOD_2_D3BEE66CA1052C0F_OFFSET))(this, a1);
	}

	::System::Void Method_2_28E7D161A90CB0C5(::RPG::GameCore::FreeStyleController* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_CLASS_2_43F02689CE345713_METHOD_2_28E7D161A90CB0C5_OFFSET))(this, P0);
	}
};
