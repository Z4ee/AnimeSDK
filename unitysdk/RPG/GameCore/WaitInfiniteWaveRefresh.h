#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WAITINFINITEWAVEREFRESH_METHOD_3_3C93D4DDD34839A4_OFFSET UNITYSDK_OFFSET(0x191004B0)
#define RPG_GAMECORE_WAITINFINITEWAVEREFRESH_METHOD_3_7ACF6FC0EA3D7895_OFFSET UNITYSDK_OFFSET(0x19100530)
#define RPG_GAMECORE_WAITINFINITEWAVEREFRESH__CTOR_OFFSET UNITYSDK_OFFSET(0x19100500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitInfiniteWaveRefresh_TypeDefinitionIndex = 22428;

	class WaitInfiniteWaveRefresh : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITINFINITEWAVEREFRESH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3C93D4DDD34839A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitInfiniteWaveRefresh*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitInfiniteWaveRefresh*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITINFINITEWAVEREFRESH_METHOD_3_3C93D4DDD34839A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7ACF6FC0EA3D7895(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitInfiniteWaveRefresh* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitInfiniteWaveRefresh*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITINFINITEWAVEREFRESH_METHOD_3_7ACF6FC0EA3D7895_OFFSET))(a1, a2);
		}
	};
}
