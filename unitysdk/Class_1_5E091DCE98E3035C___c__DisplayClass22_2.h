#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5E091DCE98E3035C___c__DisplayClass22_0;
class Class_1_6AB820A2C4AF9024;
namespace System { class Exception; }

#define CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_2__ASYNCREQUESTSTARTNODE_B__4_OFFSET UNITYSDK_OFFSET(0x149F5BD0)
#define CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_2__ASYNCREQUESTSTARTNODE_B__5_OFFSET UNITYSDK_OFFSET(0x149F5D40)
#define CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_2__CTOR_OFFSET UNITYSDK_OFFSET(0x149F46B0)

inline static constexpr unsigned int Class_1_5E091DCE98E3035C___c__DisplayClass22_2_TypeDefinitionIndex = 71548;

class Class_1_5E091DCE98E3035C___c__DisplayClass22_2 : public ::System::Object
{
public:
	::Class_1_6AB820A2C4AF9024* enterEventNodeService; // 0x10
	::Class_1_5E091DCE98E3035C___c__DisplayClass22_0* CS___8__locals2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_2__CTOR_OFFSET))(this);
	}

	::System::Void _AsyncRequestStartNode_b__4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_2__ASYNCREQUESTSTARTNODE_B__4_OFFSET))(this);
	}

	::System::Void _AsyncRequestStartNode_b__5(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__DISPLAYCLASS22_2__ASYNCREQUESTSTARTNODE_B__5_OFFSET))(this, a1);
	}
};
