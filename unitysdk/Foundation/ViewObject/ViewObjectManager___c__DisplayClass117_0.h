#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS117_0__ACTIVEDYNAMICROLLBACKPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x16DFC380)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS117_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFC370)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass117_0_TypeDefinitionIndex = 55551;

	class ViewObjectManager___c__DisplayClass117_0 : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1* rpcCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS117_0__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveDynamicRollbackPoint_b__0(::Class_0_16E4307DCC419505_36* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS117_0__ACTIVEDYNAMICROLLBACKPOINT_B__0_OFFSET))(this, msg);
		}
	};
}
