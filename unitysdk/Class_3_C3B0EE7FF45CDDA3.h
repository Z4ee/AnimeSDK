#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_C3B0EE7FF45CDDA3_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x19789E70)
#define CLASS_3_C3B0EE7FF45CDDA3_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x19789EF0)
#define CLASS_3_C3B0EE7FF45CDDA3__CTOR_OFFSET UNITYSDK_OFFSET(0x19789EC0)

inline static constexpr unsigned int Class_3_C3B0EE7FF45CDDA3_TypeDefinitionIndex = 21250;

class Class_3_C3B0EE7FF45CDDA3 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3B0EE7FF45CDDA3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C3B0EE7FF45CDDA3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C3B0EE7FF45CDDA3*&))((::PBYTE)hIl2Cpp + CLASS_3_C3B0EE7FF45CDDA3_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C3B0EE7FF45CDDA3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C3B0EE7FF45CDDA3*))((::PBYTE)hIl2Cpp + CLASS_3_C3B0EE7FF45CDDA3_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
