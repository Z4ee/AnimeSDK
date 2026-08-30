#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REMOVEAIRLINE_METHOD_3_33A3C5E8C0C9FF87_OFFSET UNITYSDK_OFFSET(0x1D39D770)
#define RPG_GAMECORE_REMOVEAIRLINE_METHOD_3_703AE39ECA90FAAC_OFFSET UNITYSDK_OFFSET(0x1D39D730)
#define RPG_GAMECORE_REMOVEAIRLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39D760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveAirline_TypeDefinitionIndex = 21629;

	class RemoveAirline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::String* PrefabPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEAIRLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_703AE39ECA90FAAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveAirline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveAirline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEAIRLINE_METHOD_3_703AE39ECA90FAAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_33A3C5E8C0C9FF87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveAirline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveAirline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEAIRLINE_METHOD_3_33A3C5E8C0C9FF87_OFFSET))(a1, a2);
		}
	};
}
