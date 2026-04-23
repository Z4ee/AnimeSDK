#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_METHOD_3_120D82CE4949ECE0_OFFSET UNITYSDK_OFFSET(0x18B3DA60)
#define RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_METHOD_3_34471060C7EC2D97_OFFSET UNITYSDK_OFFSET(0x18B3DAE0)
#define RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3DAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyFMChannelSourceSignal_TypeDefinitionIndex = 19542;

	class ModifyFMChannelSourceSignal : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_120D82CE4949ECE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyFMChannelSourceSignal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyFMChannelSourceSignal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_METHOD_3_120D82CE4949ECE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_34471060C7EC2D97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyFMChannelSourceSignal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyFMChannelSourceSignal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFMCHANNELSOURCESIGNAL_METHOD_3_34471060C7EC2D97_OFFSET))(a1, a2);
		}
	};
}
