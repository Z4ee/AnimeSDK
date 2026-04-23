#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYSCREENCRACK_METHOD_3_32446382DE51C0D9_OFFSET UNITYSDK_OFFSET(0x18C11520)
#define RPG_GAMECORE_PLAYSCREENCRACK_METHOD_3_D44851BEE3DFA21B_OFFSET UNITYSDK_OFFSET(0x18C115A0)
#define RPG_GAMECORE_PLAYSCREENCRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C11570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayScreenCrack_TypeDefinitionIndex = 19874;

	class PlayScreenCrack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ScreenCrackUI; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueEffectName; // 0x28
		::System::Boolean ExecuteOnSkip; // 0x30
		::System::Boolean IsOnlyEffect; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENCRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32446382DE51C0D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayScreenCrack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayScreenCrack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENCRACK_METHOD_3_32446382DE51C0D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D44851BEE3DFA21B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayScreenCrack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayScreenCrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENCRACK_METHOD_3_D44851BEE3DFA21B_OFFSET))(a1, a2);
		}
	};
}
