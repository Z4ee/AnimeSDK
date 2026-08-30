#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CREATEAIRLINE_METHOD_3_08D854CABE061C47_OFFSET UNITYSDK_OFFSET(0x1D9BB990)
#define RPG_GAMECORE_CREATEAIRLINE_METHOD_3_8C0D7A5F9D8B0C6C_OFFSET UNITYSDK_OFFSET(0x1D9BB950)
#define RPG_GAMECORE_CREATEAIRLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BB980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateAirline_TypeDefinitionIndex = 21628;

	class CreateAirline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::String* PrefabPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAIRLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C0D7A5F9D8B0C6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateAirline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateAirline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAIRLINE_METHOD_3_8C0D7A5F9D8B0C6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08D854CABE061C47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateAirline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateAirline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAIRLINE_METHOD_3_08D854CABE061C47_OFFSET))(a1, a2);
		}
	};
}
