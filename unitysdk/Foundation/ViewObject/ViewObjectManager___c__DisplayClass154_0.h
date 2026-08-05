#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace Foundation::ViewObject { class ViewObjectManager; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS154_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1111FB70)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS154_0__SWITCHTOSUITE_B__0_OFFSET UNITYSDK_OFFSET(0x1111FB80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS154_0__SWITCHTOSUITE_B__1_OFFSET UNITYSDK_OFFSET(0x1111FBD0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass154_0_TypeDefinitionIndex = 55548;

	class ViewObjectManager___c__DisplayClass154_0 : public ::System::Object
	{
	public:
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1* rpcCallback; // 0x10
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x18
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C* errorCallback; // 0x20
		::System::UInt32 suiteIndex; // 0x28
		::System::UInt32 groupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS154_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchToSuite_b__0(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS154_0__SWITCHTOSUITE_B__0_OFFSET))(this, message);
		}

		::System::Void _SwitchToSuite_b__1(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS154_0__SWITCHTOSUITE_B__1_OFFSET))(this, message);
		}
	};
}
