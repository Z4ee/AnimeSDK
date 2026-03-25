#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
class Class_2_E9F43E48C6B63109;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E9F43E48C6B63109___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xE4670E0)
#define CLASS_2_E9F43E48C6B63109___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE466620)

inline static constexpr unsigned int Class_2_E9F43E48C6B63109___c__DisplayClass0_0_TypeDefinitionIndex = 62465;

class Class_2_E9F43E48C6B63109___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Action_1<::Class_2_0C58AD91B0F4D809*>* onPush; // 0x10
	::Class_2_0C58AD91B0F4D809* entity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _AttachButtonToEntity_b__0(::Class_2_E9F43E48C6B63109* self, ::Class_2_0C58AD91B0F4D809* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9F43E48C6B63109*, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET))(this, self, ent);
	}
};
