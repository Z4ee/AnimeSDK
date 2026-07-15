#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TimeRewindCustomPathNode; }
namespace System { class String; }

#define RPG_CLIENT_TIMEREWINDCUSTOMPATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17875E30)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindCustomPathData_TypeDefinitionIndex = 60973;

	class TimeRewindCustomPathData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::RPG::Client::TimeRewindCustomPathNode*>* Path; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCUSTOMPATHDATA__CTOR_OFFSET))(this);
		}
	};
}
