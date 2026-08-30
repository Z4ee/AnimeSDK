#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_7EC48834C4E41A68_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1C7E0E30)
#define CLASS_3_7EC48834C4E41A68_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1C7E0DF0)
#define CLASS_3_7EC48834C4E41A68__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E0E20)

inline static constexpr unsigned int Class_3_7EC48834C4E41A68_TypeDefinitionIndex = 19658;

class Class_3_7EC48834C4E41A68 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
	::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x20
	::System::Boolean DKOBNHEIEIJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7EC48834C4E41A68__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7EC48834C4E41A68*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7EC48834C4E41A68*&))((::PBYTE)hIl2Cpp + CLASS_3_7EC48834C4E41A68_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7EC48834C4E41A68* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7EC48834C4E41A68*))((::PBYTE)hIl2Cpp + CLASS_3_7EC48834C4E41A68_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
