#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define CLASS_3_92460753D1985873_1_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1C8F39C0)
#define CLASS_3_92460753D1985873_1_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1C8F3A00)
#define CLASS_3_92460753D1985873_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F39F0)

inline static constexpr unsigned int Class_3_92460753D1985873_1_TypeDefinitionIndex = 23857;

class Class_3_92460753D1985873_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ValueEvaluatorConfig* KNDIDPBNEJJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92460753D1985873_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_92460753D1985873_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_92460753D1985873_1*&))((::PBYTE)hIl2Cpp + CLASS_3_92460753D1985873_1_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_92460753D1985873_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_92460753D1985873_1*))((::PBYTE)hIl2Cpp + CLASS_3_92460753D1985873_1_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
