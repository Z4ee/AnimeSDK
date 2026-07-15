#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_WAITSECOND_METHOD_3_6A320B8A1D9E425F_OFFSET UNITYSDK_OFFSET(0x1D1BBD30)
#define RPG_GAMECORE_WAITSECOND_METHOD_3_B5AEF315722E4F96_OFFSET UNITYSDK_OFFSET(0x1D1BBE30)
#define RPG_GAMECORE_WAITSECOND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BBDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSecond_TypeDefinitionIndex = 22931;

	class WaitSecond : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaitTime; // 0x18
		::System::Single MaxAdvencePerTick; // 0x20
		::System::Boolean IsRealtime; // 0x24
		::System::Boolean UseRealtime; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSECOND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6A320B8A1D9E425F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSecond*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSecond*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSECOND_METHOD_3_6A320B8A1D9E425F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5AEF315722E4F96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSecond* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSECOND_METHOD_3_B5AEF315722E4F96_OFFSET))(a1, a2);
		}
	};
}
