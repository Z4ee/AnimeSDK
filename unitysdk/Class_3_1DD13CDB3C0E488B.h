#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_1DD13CDB3C0E488B_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1B457440)
#define CLASS_3_1DD13CDB3C0E488B_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1B457480)
#define CLASS_3_1DD13CDB3C0E488B__CTOR_OFFSET UNITYSDK_OFFSET(0x1B457470)

inline static constexpr unsigned int Class_3_1DD13CDB3C0E488B_TypeDefinitionIndex = 21665;

class Class_3_1DD13CDB3C0E488B : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DD13CDB3C0E488B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1DD13CDB3C0E488B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1DD13CDB3C0E488B*&))((::PBYTE)hIl2Cpp + CLASS_3_1DD13CDB3C0E488B_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1DD13CDB3C0E488B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1DD13CDB3C0E488B*))((::PBYTE)hIl2Cpp + CLASS_3_1DD13CDB3C0E488B_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
