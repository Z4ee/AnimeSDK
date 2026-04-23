#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PUNKLORDHONORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C7E520)
#define RPG_GAMECORE_PUNKLORDHONORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7E6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PunkLordHonorRow_TypeDefinitionIndex = 11626;

	class PunkLordHonorRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID HonorName; // 0x10
		::System::UInt32 HonorID; // 0x20
		::System::UInt32 DisplayPriority; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDHONORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PunkLordHonorRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PunkLordHonorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDHONORROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
