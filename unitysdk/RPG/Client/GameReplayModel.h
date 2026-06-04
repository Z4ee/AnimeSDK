#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ReplayUploadContent; }
namespace System { class String; }

#define RPG_CLIENT_GAMEREPLAYMODEL_METHOD_1_73C95CCE280B068D_OFFSET UNITYSDK_OFFSET(0xBAC27E0)
#define RPG_CLIENT_GAMEREPLAYMODEL_METHOD_1_993D824EA8AA9831_OFFSET UNITYSDK_OFFSET(0xBAC2670)
#define RPG_CLIENT_GAMEREPLAYMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC2990)

namespace RPG::Client
{
	inline static constexpr unsigned int GameReplayModel_TypeDefinitionIndex = 56998;

	class GameReplayModel : public ::System::Object
	{
	public:
		::System::Int32 applicationId; // 0x10
		::System::String* applicationName; // 0x18
		::System::String* msgId; // 0x20
		::System::String* eventTime; // 0x28
		::System::Int32 eventId; // 0x30
		::System::String* eventName; // 0x38
		::RPG::Client::ReplayUploadContent* uploadContent; // 0x40
		::System::String* dump; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEREPLAYMODEL__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Method_1_993D824EA8AA9831()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEREPLAYMODEL_METHOD_1_993D824EA8AA9831_OFFSET))(this);
		}

		static ::RPG::Client::GameReplayModel* Method_1_73C95CCE280B068D(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::RPG::Client::GameReplayModel*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEREPLAYMODEL_METHOD_1_73C95CCE280B068D_OFFSET))(a1);
		}
	};
}
