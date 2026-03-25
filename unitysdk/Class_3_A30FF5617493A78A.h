#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_A30FF5617493A78A_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x16E7BB30)
#define CLASS_3_A30FF5617493A78A_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x16E7BBC0)
#define CLASS_3_A30FF5617493A78A__CTOR_OFFSET UNITYSDK_OFFSET(0x16E7BB90)

inline static constexpr unsigned int Class_3_A30FF5617493A78A_TypeDefinitionIndex = 20790;

class Class_3_A30FF5617493A78A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x18
	::RPG::GameCore::TeamType Field_3_0; // 0x20
	::RPG::GameCore::PropertyModifyFunction Field_3_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A30FF5617493A78A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A30FF5617493A78A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A30FF5617493A78A*&))((::PBYTE)hIl2Cpp + CLASS_3_A30FF5617493A78A_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A30FF5617493A78A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A30FF5617493A78A*))((::PBYTE)hIl2Cpp + CLASS_3_A30FF5617493A78A_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
