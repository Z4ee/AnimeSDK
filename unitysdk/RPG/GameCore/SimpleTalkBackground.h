#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SIMPLETALKBACKGROUND_METHOD_2_07AC4D48722EAD16_OFFSET UNITYSDK_OFFSET(0x17709300)
#define RPG_GAMECORE_SIMPLETALKBACKGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x17709430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleTalkBackground_TypeDefinitionIndex = 19422;

	class SimpleTalkBackground : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 CgID; // 0x10
		::System::String* ImagePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKBACKGROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_07AC4D48722EAD16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SimpleTalkBackground*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SimpleTalkBackground*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKBACKGROUND_METHOD_2_07AC4D48722EAD16_OFFSET))(a1, a2);
		}
	};
}
