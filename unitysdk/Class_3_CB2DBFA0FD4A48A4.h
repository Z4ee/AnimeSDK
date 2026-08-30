#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1CC07930)
#define CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1CC07790)
#define CLASS_3_CB2DBFA0FD4A48A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC077D0)

inline static constexpr unsigned int Class_3_CB2DBFA0FD4A48A4_TypeDefinitionIndex = 23808;

class Class_3_CB2DBFA0FD4A48A4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* GCJMFBKLGHI; // 0x18
	::RPG::GameCore::DynamicFloat* CCAOGMEFNLB; // 0x20
	::System::String* PODFJDMHFMK; // 0x28
	::RPG::GameCore::DynamicFloat* NNNAGHMNFKB; // 0x30
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x38
	::RPG::GameCore::DynamicFloat* FMHMAHCNDGB; // 0x40
	::RPG::GameCore::RtCharacterState OKKKNMDDMMP; // 0x48
	::System::Boolean BNIMJJNOLAI; // 0x4C
	::System::Boolean CHHHLILDOBP; // 0x4D
	::System::Boolean NKNCKHBHOHC; // 0x4E

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
