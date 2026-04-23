#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CREATEAIRLINE_METHOD_3_08D854CABE061C47_OFFSET UNITYSDK_OFFSET(0x1883FD50)
#define RPG_GAMECORE_CREATEAIRLINE_METHOD_3_C1F058E717DF4A69_OFFSET UNITYSDK_OFFSET(0x1883FCD0)
#define RPG_GAMECORE_CREATEAIRLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1883FD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateAirline_TypeDefinitionIndex = 20726;

	class CreateAirline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::String* PrefabPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAIRLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C1F058E717DF4A69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateAirline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateAirline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAIRLINE_METHOD_3_C1F058E717DF4A69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08D854CABE061C47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateAirline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateAirline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAIRLINE_METHOD_3_08D854CABE061C47_OFFSET))(a1, a2);
		}
	};
}
