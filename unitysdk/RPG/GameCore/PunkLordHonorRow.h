#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PUNKLORDHONORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D18AEE0)
#define RPG_GAMECORE_PUNKLORDHONORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18B0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PunkLordHonorRow_TypeDefinitionIndex = 12214;

	class PunkLordHonorRow : public ::System::Object
	{
	public:
		::System::UInt32 HonorID; // 0x10
		::System::UInt32 DisplayPriority; // 0x14
		::RPG::Client::TextID HonorName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDHONORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PunkLordHonorRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PunkLordHonorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDHONORROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
