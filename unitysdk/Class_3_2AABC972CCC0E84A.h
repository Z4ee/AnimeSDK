#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace System { class String; }

#define CLASS_3_2AABC972CCC0E84A_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x19270AD0)
#define CLASS_3_2AABC972CCC0E84A_METHOD_3_A6F54A9E721BB5D2_OFFSET UNITYSDK_OFFSET(0x19270B50)
#define CLASS_3_2AABC972CCC0E84A__CTOR_OFFSET UNITYSDK_OFFSET(0x19270B20)

inline static constexpr unsigned int Class_3_2AABC972CCC0E84A_TypeDefinitionIndex = 22901;

class Class_3_2AABC972CCC0E84A : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::SkillType>* Field_3_0; // 0x18
	::RPG::GameCore::ValueEvaluatorConfig* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_3_2; // 0x28
	::Il2CppArray<::System::String*>* Field_3_3; // 0x30
	::RPG::GameCore::RtSkillPropertyType Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2AABC972CCC0E84A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2AABC972CCC0E84A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2AABC972CCC0E84A*&))((::PBYTE)hIl2Cpp + CLASS_3_2AABC972CCC0E84A_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6F54A9E721BB5D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2AABC972CCC0E84A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2AABC972CCC0E84A*))((::PBYTE)hIl2Cpp + CLASS_3_2AABC972CCC0E84A_METHOD_3_A6F54A9E721BB5D2_OFFSET))(a1, a2);
	}
};
