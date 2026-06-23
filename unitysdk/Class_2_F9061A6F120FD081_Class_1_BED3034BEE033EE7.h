#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F9061A6F120FD081;
namespace MoleMole { class ServerListInfo; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_F9061A6F120FD081_CLASS_1_BED3034BEE033EE7_METHOD_1_AB0D5AE688458ECB_OFFSET UNITYSDK_OFFSET(0x113EF4D0)
#define CLASS_2_F9061A6F120FD081_CLASS_1_BED3034BEE033EE7__CTOR_OFFSET UNITYSDK_OFFSET(0x113EF4C0)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Class_1_BED3034BEE033EE7_TypeDefinitionIndex = 75860;

class Class_2_F9061A6F120FD081_Class_1_BED3034BEE033EE7 : public ::System::Object
{
public:
	::Class_2_F9061A6F120FD081* Field_1_0; // 0x10
	::MoleMole::ServerListInfo* Field_1_1; // 0x18
	::System::Action* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_BED3034BEE033EE7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AB0D5AE688458ECB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_BED3034BEE033EE7_METHOD_1_AB0D5AE688458ECB_OFFSET))(this, a1);
	}
};
