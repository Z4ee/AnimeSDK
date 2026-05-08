#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_204C453CC79AE4E0;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS95_0__ACTIVEROLLBACKPOINT_B__0_OFFSET UNITYSDK_OFFSET(0xF5D2AB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS95_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF5D2AA0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass95_0_TypeDefinitionIndex = 66387;

	class ViewObjectManager___c__DisplayClass95_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Class_1_204C453CC79AE4E0* point; // 0x18
		::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* rpcCallback; // 0x20
		::System::UInt32 groupID; // 0x28
		::System::UInt32 floorID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS95_0__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveRollbackPoint_b__0(::Class_0_16E4307DCC419505_11* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS95_0__ACTIVEROLLBACKPOINT_B__0_OFFSET))(this, msg);
		}
	};
}
