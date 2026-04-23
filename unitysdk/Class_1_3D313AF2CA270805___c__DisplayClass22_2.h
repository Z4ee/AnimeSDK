#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D313AF2CA270805___c__DisplayClass22_0;
class Class_1_F548EFDD4F391851;
namespace System { class Exception; }

#define CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_2__ASYNCREQUESTSTARTNODE_B__4_OFFSET UNITYSDK_OFFSET(0xCD181F0)
#define CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_2__ASYNCREQUESTSTARTNODE_B__5_OFFSET UNITYSDK_OFFSET(0xCD18360)
#define CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_2__CTOR_OFFSET UNITYSDK_OFFSET(0xCD17210)

inline static constexpr unsigned int Class_1_3D313AF2CA270805___c__DisplayClass22_2_TypeDefinitionIndex = 69213;

class Class_1_3D313AF2CA270805___c__DisplayClass22_2 : public ::System::Object
{
public:
	::Class_1_3D313AF2CA270805___c__DisplayClass22_0* CS___8__locals2; // 0x10
	::Class_1_F548EFDD4F391851* enterEventNodeService; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_2__CTOR_OFFSET))(this);
	}

	::System::Void _AsyncRequestStartNode_b__4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_2__ASYNCREQUESTSTARTNODE_B__4_OFFSET))(this);
	}

	::System::Void _AsyncRequestStartNode_b__5(::System::Exception* ex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_3D313AF2CA270805___C__DISPLAYCLASS22_2__ASYNCREQUESTSTARTNODE_B__5_OFFSET))(this, ex);
	}
};
