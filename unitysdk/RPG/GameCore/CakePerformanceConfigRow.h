#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKEPERFORMANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF6D3D0)
#define RPG_GAMECORE_CAKEPERFORMANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF6D640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakePerformanceConfigRow_TypeDefinitionIndex = 12824;

	class CakePerformanceConfigRow : public ::System::Object
	{
	public:
		::System::String* MoviePicPath; // 0x10
		::Il2CppArray<::System::UInt32>* ActorsList; // 0x18
		::System::UInt32 QuestID; // 0x20
		::RPG::Client::TextID PerformanceName; // 0x28
		::System::UInt32 PerformanceID; // 0x38
		::System::UInt32 ID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEPERFORMANCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakePerformanceConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakePerformanceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEPERFORMANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
