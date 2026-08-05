#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS116_0__ADDDYNAMICROLLBACKPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x16DFC1F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS116_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFC1E0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass116_0_TypeDefinitionIndex = 55571;

	class ViewObjectManager___c__DisplayClass116_0 : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::String* name; // 0x18
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1* rpcCallback; // 0x20
		::System::UInt32 floorID; // 0x28
		::UnityEngine::Vector3 position; // 0x2C
		::UnityEngine::Vector3 rotation; // 0x38
		::System::UInt32 groupID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS116_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddDynamicRollbackPoint_b__0(::Class_0_16E4307DCC419505_36* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS116_0__ADDDYNAMICROLLBACKPOINT_B__0_OFFSET))(this, msg);
		}
	};
}
