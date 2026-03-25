#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ChessModifierEvent.h"
#include "unitysdk/RPG/GameCore/ModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChessModifierCallbackConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_045BD88E09A05831_OFFSET UNITYSDK_OFFSET(0x1708CE70)
#define RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_36116D87D4418C57_OFFSET UNITYSDK_OFFSET(0x1708D430)
#define RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_3DD898CD2622B7BA_OFFSET UNITYSDK_OFFSET(0x1708D580)
#define RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_7A78596E00A8053D_OFFSET UNITYSDK_OFFSET(0x1708D4D0)
#define RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_BD63F9E21B3BA588_OFFSET UNITYSDK_OFFSET(0x1708CF00)
#define RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_C055E709AFB5B495_OFFSET UNITYSDK_OFFSET(0x1708D3D0)
#define RPG_GAMECORE_CHESSMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1708CEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessModifierConfig_TypeDefinitionIndex = 16189;

	class ChessModifierConfig : public ::RPG::GameCore::ModifierConfig
	{
	public:
		::System::Int32 LifeTime; // 0x38
		::System::Int32 MaxLayer; // 0x3C
		::Il2CppArray<::RPG::GameCore::ChessModifierBehaviorFlag>* BehaviorFlagList; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChessModifierEvent, ::RPG::GameCore::ChessModifierCallbackConfig*>* _CallbackList; // 0x48
		::System::Boolean IsGlobalModifier; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_045BD88E09A05831(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_045BD88E09A05831_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD63F9E21B3BA588(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_BD63F9E21B3BA588_OFFSET))(a1, a2);
		}

		::System::Boolean Method_3_C055E709AFB5B495(::RPG::GameCore::ChessModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChessModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_C055E709AFB5B495_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_36116D87D4418C57(::Il2CppArray<::RPG::GameCore::ChessModifierBehaviorFlag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChessModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_36116D87D4418C57_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_3_7A78596E00A8053D(::RPG::GameCore::ChessModifierEvent a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID, ::RPG::GameCore::ChessModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_7A78596E00A8053D_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_3DD898CD2622B7BA(::RPG::GameCore::ChessModifierEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChessModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMODIFIERCONFIG_METHOD_3_3DD898CD2622B7BA_OFFSET))(this, a1);
		}
	};
}
