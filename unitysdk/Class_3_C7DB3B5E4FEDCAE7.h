#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_C7DB3B5E4FEDCAE7_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x18463DF0)
#define CLASS_3_C7DB3B5E4FEDCAE7_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x18463E90)
#define CLASS_3_C7DB3B5E4FEDCAE7__CTOR_OFFSET UNITYSDK_OFFSET(0x18463E50)

inline static constexpr unsigned int Class_3_C7DB3B5E4FEDCAE7_TypeDefinitionIndex = 23124;

class Class_3_C7DB3B5E4FEDCAE7 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_2; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x28
	::System::Boolean Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7DB3B5E4FEDCAE7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C7DB3B5E4FEDCAE7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C7DB3B5E4FEDCAE7*&))((::PBYTE)hIl2Cpp + CLASS_3_C7DB3B5E4FEDCAE7_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C7DB3B5E4FEDCAE7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C7DB3B5E4FEDCAE7*))((::PBYTE)hIl2Cpp + CLASS_3_C7DB3B5E4FEDCAE7_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
