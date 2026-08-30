#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9D8F794787C5DEB6;
class Class_2_B8E38BF47138A2E5;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_9D8F794787C5DEB6___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xBD644A0)
#define CLASS_2_9D8F794787C5DEB6___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBD62E70)

inline static constexpr unsigned int Class_2_9D8F794787C5DEB6___c__DisplayClass0_0_TypeDefinitionIndex = 76266;

class Class_2_9D8F794787C5DEB6___c__DisplayClass0_0 : public ::System::Object
{
public:
	::Class_2_B8E38BF47138A2E5* entity; // 0x10
	::System::Action_1<::Class_2_B8E38BF47138A2E5*>* onPush; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _AttachButtonToEntity_b__0(::Class_2_9D8F794787C5DEB6* a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9D8F794787C5DEB6*, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET))(this, a1, a2);
	}
};
