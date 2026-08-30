#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_METHOD_3_34471060C7EC2D97_OFFSET UNITYSDK_OFFSET(0x1D1BB6A0)
#define RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_METHOD_3_40FD8BE7B85213B6_OFFSET UNITYSDK_OFFSET(0x1D1BB660)
#define RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BB690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyFMChannelSourceSignal_TypeDefinitionIndex = 20338;

	class ModifyFMChannelSourceSignal : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40FD8BE7B85213B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyFMChannelSourceSignal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyFMChannelSourceSignal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_METHOD_3_40FD8BE7B85213B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_34471060C7EC2D97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyFMChannelSourceSignal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyFMChannelSourceSignal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_METHOD_3_34471060C7EC2D97_OFFSET))(a1, a2);
		}
	};
}
