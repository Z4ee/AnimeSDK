#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYSCREENDISSOLVE_METHOD_3_32DFF51DCF5F57F7_OFFSET UNITYSDK_OFFSET(0x174C61B0)
#define RPG_GAMECORE_PLAYSCREENDISSOLVE_METHOD_3_EEBBF682BF692AC3_OFFSET UNITYSDK_OFFSET(0x174C6230)
#define RPG_GAMECORE_PLAYSCREENDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0x174C6200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayScreenDissolve_TypeDefinitionIndex = 21365;

	class PlayScreenDissolve : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPath; // 0x18
		::System::String* UniqueEffectName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENDISSOLVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32DFF51DCF5F57F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayScreenDissolve*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayScreenDissolve*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENDISSOLVE_METHOD_3_32DFF51DCF5F57F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EEBBF682BF692AC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayScreenDissolve* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayScreenDissolve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSCREENDISSOLVE_METHOD_3_EEBBF682BF692AC3_OFFSET))(a1, a2);
		}
	};
}
