#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_4C9F050D2925BB87_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x19149D40)
#define CLASS_3_4C9F050D2925BB87_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x19149DC0)
#define CLASS_3_4C9F050D2925BB87__CTOR_OFFSET UNITYSDK_OFFSET(0x19149D90)

inline static constexpr unsigned int Class_3_4C9F050D2925BB87_TypeDefinitionIndex = 19476;

class Class_3_4C9F050D2925BB87 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x20
	::RPG::GameCore::CharacterMotionFlag Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C9F050D2925BB87__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4C9F050D2925BB87*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4C9F050D2925BB87*&))((::PBYTE)hIl2Cpp + CLASS_3_4C9F050D2925BB87_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4C9F050D2925BB87* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4C9F050D2925BB87*))((::PBYTE)hIl2Cpp + CLASS_3_4C9F050D2925BB87_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
