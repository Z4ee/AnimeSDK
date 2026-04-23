#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLIENTFINISHMISSION_METHOD_3_3DA1BB40A2958885_OFFSET UNITYSDK_OFFSET(0x188134F0)
#define RPG_GAMECORE_CLIENTFINISHMISSION_METHOD_3_72C371832ABA297E_OFFSET UNITYSDK_OFFSET(0x18813570)
#define RPG_GAMECORE_CLIENTFINISHMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18813540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClientFinishMission_TypeDefinitionIndex = 19303;

	class ClientFinishMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::Boolean IsWaitServer; // 0x1C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnComplete; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIENTFINISHMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3DA1BB40A2958885(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClientFinishMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClientFinishMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIENTFINISHMISSION_METHOD_3_3DA1BB40A2958885_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72C371832ABA297E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClientFinishMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClientFinishMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIENTFINISHMISSION_METHOD_3_72C371832ABA297E_OFFSET))(a1, a2);
		}
	};
}
