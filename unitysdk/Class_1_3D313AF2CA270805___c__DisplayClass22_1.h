#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_261A3FCE6C05A7EF;
class Class_1_3D313AF2CA270805___c__DisplayClass22_0;
namespace System { class Exception; }

#define CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_1__ASYNCREQUESTSTARTNODE_B__1_OFFSET UNITYSDK_OFFSET(0xCD18000)
#define CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_1__ASYNCREQUESTSTARTNODE_B__2_OFFSET UNITYSDK_OFFSET(0xCD18100)
#define CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCD17200)

inline static constexpr unsigned int Class_1_3D313AF2CA270805___c__DisplayClass22_1_TypeDefinitionIndex = 69212;

class Class_1_3D313AF2CA270805___c__DisplayClass22_1 : public ::System::Object
{
public:
	::Class_1_3D313AF2CA270805___c__DisplayClass22_0* CS___8__locals1; // 0x10
	::Class_1_261A3FCE6C05A7EF* enterBattleNodeService; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_1__CTOR_OFFSET))(this);
	}

	::System::Void _AsyncRequestStartNode_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_1__ASYNCREQUESTSTARTNODE_B__1_OFFSET))(this);
	}

	::System::Void _AsyncRequestStartNode_b__2(::System::Exception* ex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_1__ASYNCREQUESTSTARTNODE_B__2_OFFSET))(this, ex);
	}
};
