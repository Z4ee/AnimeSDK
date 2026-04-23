#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimView; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6C3590)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C35C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C___INITTRANSFORMCHANGECALLBACK_B__85_0_OFFSET UNITYSDK_OFFSET(0xA6C35D0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView___c_TypeDefinitionIndex = 70899;

	class FiveDimView___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::FiveDim::FiveDimView___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::FiveDimView___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimView___c_TypeDefinitionIndex)->GetStaticField(0x2F6C0);
		}
		static ::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimView*>** StaticGet___9__85_0()
		{
			return (::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimView*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimView___c_TypeDefinitionIndex)->GetStaticField(0x2F6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Void __InitTransformChangeCallback_b__85_0(::RPG::Client::LittleGame::FiveDim::FiveDimView* self)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW___C___INITTRANSFORMCHANGECALLBACK_B__85_0_OFFSET))(this, self);
		}
	};
}
