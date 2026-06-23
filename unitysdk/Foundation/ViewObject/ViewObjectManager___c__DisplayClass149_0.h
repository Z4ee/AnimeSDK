#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace Foundation::ViewObject { class ViewObjectManager; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS149_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E6D7B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS149_0__REMOVEEXTRASUITE_B__0_OFFSET UNITYSDK_OFFSET(0x12E6D7C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS149_0__REMOVEEXTRASUITE_B__1_OFFSET UNITYSDK_OFFSET(0x12E6D810)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass149_0_TypeDefinitionIndex = 73608;

	class ViewObjectManager___c__DisplayClass149_0 : public ::System::Object
	{
	public:
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1* errorCallback; // 0x10
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C* rpcCallback; // 0x18
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x20
		::System::UInt32 suiteIndex; // 0x28
		::System::UInt32 groupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS149_0__CTOR_OFFSET))(this);
		}

		::System::Void _RemoveExtraSuite_b__0(::Class_0_16E4307DCC419505_29* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS149_0__REMOVEEXTRASUITE_B__0_OFFSET))(this, message);
		}

		::System::Void _RemoveExtraSuite_b__1(::Class_0_16E4307DCC419505_29* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS149_0__REMOVEEXTRASUITE_B__1_OFFSET))(this, message);
		}
	};
}
