#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_3512BA380C7E2432_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x1913ED80)
#define CLASS_3_3512BA380C7E2432_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1913EE00)
#define CLASS_3_3512BA380C7E2432__CTOR_OFFSET UNITYSDK_OFFSET(0x1913EDD0)

inline static constexpr unsigned int Class_3_3512BA380C7E2432_TypeDefinitionIndex = 20974;

class Class_3_3512BA380C7E2432 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_1; // 0x18
	::RPG::Client::TextID Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3512BA380C7E2432__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3512BA380C7E2432*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3512BA380C7E2432*&))((::PBYTE)hIl2Cpp + CLASS_3_3512BA380C7E2432_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3512BA380C7E2432* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3512BA380C7E2432*))((::PBYTE)hIl2Cpp + CLASS_3_3512BA380C7E2432_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
