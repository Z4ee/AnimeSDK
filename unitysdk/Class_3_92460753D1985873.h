#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define CLASS_3_92460753D1985873_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1B562370)
#define CLASS_3_92460753D1985873_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1B5623B0)
#define CLASS_3_92460753D1985873__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5623A0)

inline static constexpr unsigned int Class_3_92460753D1985873_TypeDefinitionIndex = 23276;

class Class_3_92460753D1985873 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ValueEvaluatorConfig* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92460753D1985873__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_92460753D1985873*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_92460753D1985873*&))((::PBYTE)hIl2Cpp + CLASS_3_92460753D1985873_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_92460753D1985873* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_92460753D1985873*))((::PBYTE)hIl2Cpp + CLASS_3_92460753D1985873_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
