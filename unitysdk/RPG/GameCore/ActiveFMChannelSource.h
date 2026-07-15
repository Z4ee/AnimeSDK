#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ACTIVEFMCHANNELSOURCE_METHOD_3_301A9C8C8C6504F3_OFFSET UNITYSDK_OFFSET(0x1AAD9880)
#define RPG_GAMECORE_ACTIVEFMCHANNELSOURCE_METHOD_3_EB4134B82669FF08_OFFSET UNITYSDK_OFFSET(0x1AAD9840)
#define RPG_GAMECORE_ACTIVEFMCHANNELSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD9870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveFMChannelSource_TypeDefinitionIndex = 19793;

	class ActiveFMChannelSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::System::Boolean Active; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB4134B82669FF08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveFMChannelSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveFMChannelSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELSOURCE_METHOD_3_EB4134B82669FF08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_301A9C8C8C6504F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveFMChannelSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveFMChannelSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELSOURCE_METHOD_3_301A9C8C8C6504F3_OFFSET))(a1, a2);
		}
	};
}
