#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_204C453CC79AE4E0_1;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS115_0__ACTIVEROLLBACKPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x16DFC060)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS115_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFC050)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass115_0_TypeDefinitionIndex = 55561;

	class ViewObjectManager___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1* rpcCallback; // 0x10
		::Class_1_204C453CC79AE4E0_1* point; // 0x18
		::System::String* name; // 0x20
		::System::UInt32 groupID; // 0x28
		::System::UInt32 floorID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS115_0__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveRollbackPoint_b__0(::Class_0_16E4307DCC419505_36* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS115_0__ACTIVEROLLBACKPOINT_B__0_OFFSET))(this, msg);
		}
	};
}
