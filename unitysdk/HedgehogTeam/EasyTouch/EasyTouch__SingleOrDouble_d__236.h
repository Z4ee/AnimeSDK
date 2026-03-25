#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HedgehogTeam::EasyTouch { class EasyTouch; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11A73E50)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11A74050)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11A740B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11A74060)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A73E40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236__CTOR_OFFSET UNITYSDK_OFFSET(0x11A60770)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch__SingleOrDouble_d__236_TypeDefinitionIndex = 31353;

	class EasyTouch__SingleOrDouble_d__236 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::HedgehogTeam::EasyTouch::EasyTouch* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 fingerIndex; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__SINGLEORDOUBLE_D__236_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
