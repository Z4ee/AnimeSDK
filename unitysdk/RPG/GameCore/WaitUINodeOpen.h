#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITUINODEOPEN_METHOD_3_0A5C1425CC565074_OFFSET UNITYSDK_OFFSET(0x17907FC0)
#define RPG_GAMECORE_WAITUINODEOPEN_METHOD_3_19CDAE212FA62D56_OFFSET UNITYSDK_OFFSET(0x17908040)
#define RPG_GAMECORE_WAITUINODEOPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x17908010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitUINodeOpen_TypeDefinitionIndex = 22398;

	class WaitUINodeOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Path; // 0x18
		::System::String* NodeID; // 0x20
		::System::String* PathPC; // 0x28
		::System::Boolean SkipCheck; // 0x30
		::System::Boolean Reverse; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUINODEOPEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A5C1425CC565074(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUINodeOpen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUINodeOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUINODEOPEN_METHOD_3_0A5C1425CC565074_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_19CDAE212FA62D56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUINodeOpen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUINodeOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUINODEOPEN_METHOD_3_19CDAE212FA62D56_OFFSET))(a1, a2);
		}
	};
}
