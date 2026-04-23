#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_F1507657401FC6F9_4_METHOD_3_59E52142EB73E32E_OFFSET UNITYSDK_OFFSET(0x19125B80)
#define CLASS_3_F1507657401FC6F9_4_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x19125C00)
#define CLASS_3_F1507657401FC6F9_4__CTOR_OFFSET UNITYSDK_OFFSET(0x19125BD0)

inline static constexpr unsigned int Class_3_F1507657401FC6F9_4_TypeDefinitionIndex = 21771;

class Class_3_F1507657401FC6F9_4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1507657401FC6F9_4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59E52142EB73E32E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F1507657401FC6F9_4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F1507657401FC6F9_4*&))((::PBYTE)hIl2Cpp + CLASS_3_F1507657401FC6F9_4_METHOD_3_59E52142EB73E32E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F1507657401FC6F9_4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F1507657401FC6F9_4*))((::PBYTE)hIl2Cpp + CLASS_3_F1507657401FC6F9_4_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
