#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYSCREENCRACK_METHOD_3_2AB4F70FF7F07C33_OFFSET UNITYSDK_OFFSET(0x174C5F10)
#define RPG_GAMECORE_PLAYSCREENCRACK_METHOD_3_61778FE47C979954_OFFSET UNITYSDK_OFFSET(0x174C5F90)
#define RPG_GAMECORE_PLAYSCREENCRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x174C5F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayScreenCrack_TypeDefinitionIndex = 19215;

	class PlayScreenCrack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ScreenCrackUI; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueEffectName; // 0x28
		::System::Boolean ExecuteOnSkip; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENCRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2AB4F70FF7F07C33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayScreenCrack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayScreenCrack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENCRACK_METHOD_3_2AB4F70FF7F07C33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61778FE47C979954(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayScreenCrack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayScreenCrack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENCRACK_METHOD_3_61778FE47C979954_OFFSET))(a1, a2);
		}
	};
}
