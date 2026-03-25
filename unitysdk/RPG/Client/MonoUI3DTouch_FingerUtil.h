#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL_ADDFINGER_OFFSET UNITYSDK_OFFSET(0x9D47960)
#define RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL_CLEAR_OFFSET UNITYSDK_OFFSET(0x9D49980)
#define RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL_CONTAINFINGER_OFFSET UNITYSDK_OFFSET(0x9D47E50)
#define RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL_GETFINGERNUM_OFFSET UNITYSDK_OFFSET(0x9D47A30)
#define RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL_REMOVEFINGER_OFFSET UNITYSDK_OFFSET(0x9D47BA0)
#define RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4A040)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUI3DTouch_FingerUtil_TypeDefinitionIndex = 59833;

	class MonoUI3DTouch_FingerUtil : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _fingerIDList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL__CTOR_OFFSET))(this);
		}

		::System::Boolean AddFinger(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL_ADDFINGER_OFFSET))(this, id);
		}

		::System::Boolean RemoveFinger(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL_REMOVEFINGER_OFFSET))(this, id);
		}

		::System::Int32 GetFingerNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL_GETFINGERNUM_OFFSET))(this);
		}

		::System::Boolean ContainFinger(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL_CONTAINFINGER_OFFSET))(this, id);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DTOUCH_FINGERUTIL_CLEAR_OFFSET))(this);
		}
	};
}
