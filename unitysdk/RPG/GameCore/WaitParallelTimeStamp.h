#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_WAITPARALLELTIMESTAMP_METHOD_3_424D5C1D53963308_OFFSET UNITYSDK_OFFSET(0x19102CF0)
#define RPG_GAMECORE_WAITPARALLELTIMESTAMP_METHOD_3_CBB797929CF0F66F_OFFSET UNITYSDK_OFFSET(0x19102E10)
#define RPG_GAMECORE_WAITPARALLELTIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x19102D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitParallelTimeStamp_TypeDefinitionIndex = 21588;

	class WaitParallelTimeStamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaitTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPARALLELTIMESTAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_424D5C1D53963308(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitParallelTimeStamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitParallelTimeStamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPARALLELTIMESTAMP_METHOD_3_424D5C1D53963308_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CBB797929CF0F66F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitParallelTimeStamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitParallelTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPARALLELTIMESTAMP_METHOD_3_CBB797929CF0F66F_OFFSET))(a1, a2);
		}
	};
}
