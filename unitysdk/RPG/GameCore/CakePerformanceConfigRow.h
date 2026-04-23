#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKEPERFORMANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18766700)
#define RPG_GAMECORE_CAKEPERFORMANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18766970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakePerformanceConfigRow_TypeDefinitionIndex = 12214;

	class CakePerformanceConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ActorsList; // 0x10
		::System::String* MoviePicPath; // 0x18
		::System::UInt32 QuestID; // 0x20
		::System::UInt32 PerformanceID; // 0x24
		::System::UInt32 ID; // 0x28
		::RPG::Client::TextID PerformanceName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEPERFORMANCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakePerformanceConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakePerformanceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEPERFORMANCECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
