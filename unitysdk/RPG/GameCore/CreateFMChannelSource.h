#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CREATEFMCHANNELSOURCE_METHOD_3_53C605B4165971EF_OFFSET UNITYSDK_OFFSET(0x1BC3AAB0)
#define RPG_GAMECORE_CREATEFMCHANNELSOURCE_METHOD_3_C07DC1DE057247E2_OFFSET UNITYSDK_OFFSET(0x1BC3AA70)
#define RPG_GAMECORE_CREATEFMCHANNELSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3AAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateFMChannelSource_TypeDefinitionIndex = 19791;

	class CreateFMChannelSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::RPG::GameCore::DynamicString* ChannelName; // 0x20
		::RPG::GameCore::DynamicFloat* DefaultValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C07DC1DE057247E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateFMChannelSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateFMChannelSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELSOURCE_METHOD_3_C07DC1DE057247E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_53C605B4165971EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateFMChannelSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateFMChannelSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELSOURCE_METHOD_3_53C605B4165971EF_OFFSET))(a1, a2);
		}
	};
}
