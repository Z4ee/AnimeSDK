#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimView; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1B4110)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B4140)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C___INITTRANSFORMCHANGECALLBACK_B__98_0_OFFSET UNITYSDK_OFFSET(0x1B1B4150)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView___c_TypeDefinitionIndex = 76722;

	class FiveDimView___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimView*>** StaticGet___9__98_0()
		{
			return (::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimView*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimView___c_TypeDefinitionIndex)->GetStaticField(0x62530);
		}
		static ::RPG::Client::LittleGame::FiveDim::FiveDimView___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::FiveDimView___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimView___c_TypeDefinitionIndex)->GetStaticField(0x62538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Void __InitTransformChangeCallback_b__98_0(::RPG::Client::LittleGame::FiveDim::FiveDimView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C___INITTRANSFORMCHANGECALLBACK_B__98_0_OFFSET))(this, a1);
		}
	};
}
