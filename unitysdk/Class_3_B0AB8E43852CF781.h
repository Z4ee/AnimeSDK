#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_B0AB8E43852CF781_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x16DC3520)
#define CLASS_3_B0AB8E43852CF781_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x16DC34A0)
#define CLASS_3_B0AB8E43852CF781__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC34F0)

inline static constexpr unsigned int Class_3_B0AB8E43852CF781_TypeDefinitionIndex = 19682;

class Class_3_B0AB8E43852CF781 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_1; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x20
	::Il2CppArray<::System::UInt32>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0AB8E43852CF781__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B0AB8E43852CF781*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B0AB8E43852CF781*&))((::PBYTE)hIl2Cpp + CLASS_3_B0AB8E43852CF781_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B0AB8E43852CF781* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B0AB8E43852CF781*))((::PBYTE)hIl2Cpp + CLASS_3_B0AB8E43852CF781_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
