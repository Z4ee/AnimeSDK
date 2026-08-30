#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_82AD06FA18CD21C2;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_4B4C632F05EE5573_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x1C71E0A0)
#define CLASS_3_4B4C632F05EE5573_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1C71E250)
#define CLASS_3_4B4C632F05EE5573__CTOR_OFFSET UNITYSDK_OFFSET(0x1C71E0E0)

inline static constexpr unsigned int Class_3_4B4C632F05EE5573_TypeDefinitionIndex = 23811;

class Class_3_4B4C632F05EE5573 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::Class_2_82AD06FA18CD21C2*>* FBGMBABKNNN; // 0x18
	::RPG::GameCore::DynamicFloat* CCAOGMEFNLB; // 0x20
	::RPG::GameCore::DynamicFloat* NNNAGHMNFKB; // 0x28
	::RPG::GameCore::DynamicFloat* GCJMFBKLGHI; // 0x30
	::System::String* ONOAKCNFMBC; // 0x38
	::System::String* PODFJDMHFMK; // 0x40
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x48
	::RPG::GameCore::DynamicFloat* FMHMAHCNDGB; // 0x50
	::RPG::GameCore::RtCharacterState OKKKNMDDMMP; // 0x58
	::System::Boolean NKNCKHBHOHC; // 0x5C
	::System::Boolean PPFBBBJIODA; // 0x5D
	::System::Boolean CHHHLILDOBP; // 0x5E
	::System::Boolean JJOMBGLMEBL; // 0x5F
	::RPG::GameCore::FixVec3 DCJFFIAPJME; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B4C632F05EE5573__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4B4C632F05EE5573*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4B4C632F05EE5573*&))((::PBYTE)hIl2Cpp + CLASS_3_4B4C632F05EE5573_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4B4C632F05EE5573* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4B4C632F05EE5573*))((::PBYTE)hIl2Cpp + CLASS_3_4B4C632F05EE5573_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
