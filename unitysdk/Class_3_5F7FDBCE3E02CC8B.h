#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_5F7FDBCE3E02CC8B_METHOD_3_0F51127D996814D2_OFFSET UNITYSDK_OFFSET(0x1CE6DFD0)
#define CLASS_3_5F7FDBCE3E02CC8B_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1CE6DF30)
#define CLASS_3_5F7FDBCE3E02CC8B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6DF90)

inline static constexpr unsigned int Class_3_5F7FDBCE3E02CC8B_TypeDefinitionIndex = 22560;

class Class_3_5F7FDBCE3E02CC8B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HFOFGODKAMN; // 0x18
	::RPG::GameCore::TargetEvaluator* DEONKIFKHLF; // 0x20
	::System::String* FHLJGDGMMHK; // 0x28
	::RPG::GameCore::AvatarBaseTypeMask LKLNGCCIMEM; // 0x30
	::System::Boolean AACPFDGGGDE; // 0x34
	::RPG::GameCore::AvatarBaseTypeKind EIEEPCFDPJD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F7FDBCE3E02CC8B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5F7FDBCE3E02CC8B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5F7FDBCE3E02CC8B*&))((::PBYTE)hIl2Cpp + CLASS_3_5F7FDBCE3E02CC8B_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0F51127D996814D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5F7FDBCE3E02CC8B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5F7FDBCE3E02CC8B*))((::PBYTE)hIl2Cpp + CLASS_3_5F7FDBCE3E02CC8B_METHOD_3_0F51127D996814D2_OFFSET))(a1, a2);
	}
};
