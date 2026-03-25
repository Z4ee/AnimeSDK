#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_1D619D0868607927_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x17728610)
#define CLASS_3_1D619D0868607927_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x17728590)
#define CLASS_3_1D619D0868607927__CTOR_OFFSET UNITYSDK_OFFSET(0x177285E0)

inline static constexpr unsigned int Class_3_1D619D0868607927_TypeDefinitionIndex = 20662;

class Class_3_1D619D0868607927 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType>* Field_3_2; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::Boolean Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D619D0868607927__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1D619D0868607927*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1D619D0868607927*&))((::PBYTE)hIl2Cpp + CLASS_3_1D619D0868607927_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1D619D0868607927* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1D619D0868607927*))((::PBYTE)hIl2Cpp + CLASS_3_1D619D0868607927_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
