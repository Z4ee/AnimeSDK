#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
class Class_2_9D8F794787C5DEB6;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_9D8F794787C5DEB6___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x911EF50)
#define CLASS_2_9D8F794787C5DEB6___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x911DCF0)

inline static constexpr unsigned int Class_2_9D8F794787C5DEB6___c__DisplayClass0_0_TypeDefinitionIndex = 70465;

class Class_2_9D8F794787C5DEB6___c__DisplayClass0_0 : public ::System::Object
{
public:
	::Class_2_0C58AD91B0F4D809* entity; // 0x10
	::System::Action_1<::Class_2_0C58AD91B0F4D809*>* onPush; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _AttachButtonToEntity_b__0(::Class_2_9D8F794787C5DEB6* self, ::Class_2_0C58AD91B0F4D809* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9D8F794787C5DEB6*, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET))(this, self, ent);
	}
};
