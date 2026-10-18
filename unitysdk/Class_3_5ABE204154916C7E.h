#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_42C46B3D8BC311E2;
class Class_2_E5D38AB31F1F266B;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_5ABE204154916C7E_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1D2367E0)
#define CLASS_3_5ABE204154916C7E_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1D236820)
#define CLASS_3_5ABE204154916C7E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D236810)

inline static constexpr unsigned int Class_3_5ABE204154916C7E_TypeDefinitionIndex = 22863;

class Class_3_5ABE204154916C7E : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* NPIKCFCKBLM; // 0x18
	::Class_2_E5D38AB31F1F266B* FOBFFEIDADN; // 0x20
	::RPG::GameCore::DynamicFloat* NPLCDLGCHNJ; // 0x28
	::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x30
	::System::String* ECHFEMAFJNN; // 0x38
	::Class_2_42C46B3D8BC311E2* HDJHDKLHLAM; // 0x40
	::System::Boolean DOABIHDOJLJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5ABE204154916C7E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5ABE204154916C7E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5ABE204154916C7E*&))((::PBYTE)hIl2Cpp + CLASS_3_5ABE204154916C7E_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5ABE204154916C7E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5ABE204154916C7E*))((::PBYTE)hIl2Cpp + CLASS_3_5ABE204154916C7E_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
