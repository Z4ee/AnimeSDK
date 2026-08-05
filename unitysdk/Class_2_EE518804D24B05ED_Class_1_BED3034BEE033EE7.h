#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_EE518804D24B05ED;
namespace MoleMole { class ServerListInfo; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_EE518804D24B05ED_CLASS_1_BED3034BEE033EE7_METHOD_1_AB0D5AE688458ECB_OFFSET UNITYSDK_OFFSET(0x17C6C110)
#define CLASS_2_EE518804D24B05ED_CLASS_1_BED3034BEE033EE7__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6C100)

inline static constexpr unsigned int Class_2_EE518804D24B05ED_Class_1_BED3034BEE033EE7_TypeDefinitionIndex = 60006;

class Class_2_EE518804D24B05ED_Class_1_BED3034BEE033EE7 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::MoleMole::ServerListInfo* Field_1_0; // 0x18
	::Class_2_EE518804D24B05ED* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED_CLASS_1_BED3034BEE033EE7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AB0D5AE688458ECB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED_CLASS_1_BED3034BEE033EE7_METHOD_1_AB0D5AE688458ECB_OFFSET))(this, a1);
	}
};
