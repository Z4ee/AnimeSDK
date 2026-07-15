#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCIDLE_METHOD_3_A22FB378161500D1_OFFSET UNITYSDK_OFFSET(0x1BE21FD0)
#define RPG_GAMECORE_ADVNPCIDLE_METHOD_3_FD45C0110AE90A94_OFFSET UNITYSDK_OFFSET(0x1BE21F00)
#define RPG_GAMECORE_ADVNPCIDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE21FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCIdle_TypeDefinitionIndex = 19211;

	class AdvNPCIdle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCIDLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD45C0110AE90A94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCIdle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCIdle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCIDLE_METHOD_3_FD45C0110AE90A94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A22FB378161500D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCIdle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCIdle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCIDLE_METHOD_3_A22FB378161500D1_OFFSET))(a1, a2);
		}
	};
}
