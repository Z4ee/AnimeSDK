#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVREGISTERPET_METHOD_3_39A19490067EEA82_OFFSET UNITYSDK_OFFSET(0x19432D60)
#define RPG_GAMECORE_ADVREGISTERPET_METHOD_3_487D7F683FD16BEB_OFFSET UNITYSDK_OFFSET(0x19432DE0)
#define RPG_GAMECORE_ADVREGISTERPET__CTOR_OFFSET UNITYSDK_OFFSET(0x19432DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRegisterPet_TypeDefinitionIndex = 19793;

	class AdvRegisterPet : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREGISTERPET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_39A19490067EEA82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRegisterPet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRegisterPet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREGISTERPET_METHOD_3_39A19490067EEA82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_487D7F683FD16BEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRegisterPet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRegisterPet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREGISTERPET_METHOD_3_487D7F683FD16BEB_OFFSET))(a1, a2);
		}
	};
}
