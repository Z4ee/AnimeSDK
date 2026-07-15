#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1310E39F33F30506;
class Class_2_56DCA1B58073717B;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_1310E39F33F30506___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x1822BCE0)
#define CLASS_2_1310E39F33F30506___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1822A840)

inline static constexpr unsigned int Class_2_1310E39F33F30506___c__DisplayClass0_0_TypeDefinitionIndex = 72805;

class Class_2_1310E39F33F30506___c__DisplayClass0_0 : public ::System::Object
{
public:
	::Class_2_56DCA1B58073717B* entity; // 0x10
	::System::Action_1<::Class_2_56DCA1B58073717B*>* onPush; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _AttachButtonToEntity_b__0(::Class_2_1310E39F33F30506* a1, ::Class_2_56DCA1B58073717B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1310E39F33F30506*, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET))(this, a1, a2);
	}
};
