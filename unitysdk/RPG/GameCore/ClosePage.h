#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOSEPAGE_METHOD_3_DD1D042269A19E90_OFFSET UNITYSDK_OFFSET(0x188230A0)
#define RPG_GAMECORE_CLOSEPAGE_METHOD_3_FB05D32EA198D4E9_OFFSET UNITYSDK_OFFSET(0x18823020)
#define RPG_GAMECORE_CLOSEPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18823070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClosePage_TypeDefinitionIndex = 19589;

	class ClosePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* PageNames; // 0x18
		::Il2CppArray<::System::String*>* PageRootNames; // 0x20
		::System::Boolean IsSilentExit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB05D32EA198D4E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClosePage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClosePage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEPAGE_METHOD_3_FB05D32EA198D4E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD1D042269A19E90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClosePage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClosePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEPAGE_METHOD_3_DD1D042269A19E90_OFFSET))(a1, a2);
		}
	};
}
