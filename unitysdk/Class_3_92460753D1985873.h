#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define CLASS_3_92460753D1985873_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1CB70470)
#define CLASS_3_92460753D1985873_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1CB704B0)
#define CLASS_3_92460753D1985873__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB704A0)

inline static constexpr unsigned int Class_3_92460753D1985873_TypeDefinitionIndex = 23856;

class Class_3_92460753D1985873 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ValueEvaluatorConfig* BGCCFFPEALM; // 0x18

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
