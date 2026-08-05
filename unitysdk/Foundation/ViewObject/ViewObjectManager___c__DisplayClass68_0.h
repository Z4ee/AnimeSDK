#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_E542FA6AD8EA44A5_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1271AB40)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS68_0__FLUSHSCENEENTITYDESTROYREQUESTS_B__0_OFFSET UNITYSDK_OFFSET(0x1271AB50)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass68_0_TypeDefinitionIndex = 55565;

	class ViewObjectManager___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>>* entityLastPosRotMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Void _FlushSceneEntityDestroyRequests_b__0(::Class_3_E542FA6AD8EA44A5_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E542FA6AD8EA44A5_1*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS68_0__FLUSHSCENEENTITYDESTROYREQUESTS_B__0_OFFSET))(this, rsp);
		}
	};
}
