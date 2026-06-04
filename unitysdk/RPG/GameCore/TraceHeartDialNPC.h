#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRACEHEARTDIALNPC_METHOD_3_6CE0E7D614699061_OFFSET UNITYSDK_OFFSET(0x19DEBD20)
#define RPG_GAMECORE_TRACEHEARTDIALNPC_METHOD_3_F9BBB26F32A7FA71_OFFSET UNITYSDK_OFFSET(0x19DEBCA0)
#define RPG_GAMECORE_TRACEHEARTDIALNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEBCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TraceHeartDialNPC_TypeDefinitionIndex = 20052;

	class TraceHeartDialNPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TraceID; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitConfirm; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailedFindNpc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEHEARTDIALNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9BBB26F32A7FA71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceHeartDialNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceHeartDialNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEHEARTDIALNPC_METHOD_3_F9BBB26F32A7FA71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6CE0E7D614699061(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceHeartDialNPC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceHeartDialNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEHEARTDIALNPC_METHOD_3_6CE0E7D614699061_OFFSET))(a1, a2);
		}
	};
}
