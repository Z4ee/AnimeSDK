#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_TRACKPHOTOEVENT_METHOD_2_B97469133E0706F1_OFFSET UNITYSDK_OFFSET(0x178A4680)
#define RPG_GAMECORE_TRACKPHOTOEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x178A47D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoEvent_TypeDefinitionIndex = 19809;

	class TrackPhotoEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Position; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TriggerEvents; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B97469133E0706F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackPhotoEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackPhotoEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOEVENT_METHOD_2_B97469133E0706F1_OFFSET))(a1, a2);
		}
	};
}
