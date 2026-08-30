#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1D5B6DC0)
#define CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1D5B6C20)
#define CLASS_3_CB2DBFA0FD4A48A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B6C60)

inline static constexpr unsigned int Class_3_CB2DBFA0FD4A48A4_TypeDefinitionIndex = 23808;

class Class_3_CB2DBFA0FD4A48A4 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* PODFJDMHFMK; // 0x18
	::RPG::GameCore::DynamicFloat* CCAOGMEFNLB; // 0x20
	::RPG::GameCore::DynamicFloat* GCJMFBKLGHI; // 0x28
	::RPG::GameCore::DynamicFloat* FMHMAHCNDGB; // 0x30
	::RPG::GameCore::DynamicFloat* NNNAGHMNFKB; // 0x38
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x40
	::System::Boolean NKNCKHBHOHC; // 0x48
	::System::Boolean CHHHLILDOBP; // 0x49
	::System::Boolean BNIMJJNOLAI; // 0x4A
	::RPG::GameCore::RtCharacterState OKKKNMDDMMP; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB2DBFA0FD4A48A4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CB2DBFA0FD4A48A4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CB2DBFA0FD4A48A4*&))((::PBYTE)hIl2Cpp + CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CB2DBFA0FD4A48A4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CB2DBFA0FD4A48A4*))((::PBYTE)hIl2Cpp + CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
