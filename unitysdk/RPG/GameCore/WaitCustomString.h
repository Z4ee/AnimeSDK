#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WAITCUSTOMSTRING_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x19E53490)
#define RPG_GAMECORE_WAITCUSTOMSTRING_METHOD_3_77D53170EB7BF1DA_OFFSET UNITYSDK_OFFSET(0x19E52DD0)
#define RPG_GAMECORE_WAITCUSTOMSTRING_METHOD_3_CA89EF70B6C7BF4C_OFFSET UNITYSDK_OFFSET(0x19E53020)
#define RPG_GAMECORE_WAITCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19E52FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitCustomString_TypeDefinitionIndex = 22454;

	class WaitCustomString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x18
		::System::Boolean WaitOwnerOnly; // 0x20
		::System::Boolean GoNextImmediately; // 0x21
		::System::Boolean ResetWhenTaskBegin; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_77D53170EB7BF1DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRING_METHOD_3_77D53170EB7BF1DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CA89EF70B6C7BF4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRING_METHOD_3_CA89EF70B6C7BF4C_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRING_GET_ISCLIENTONLY_OFFSET))(this);
		}
	};
}
