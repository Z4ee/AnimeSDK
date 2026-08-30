#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TRANSITENVPROFILE_METHOD_3_D13E4BFDB0947502_OFFSET UNITYSDK_OFFSET(0x1D53CF90)
#define RPG_GAMECORE_TRANSITENVPROFILE_METHOD_3_E11077D9B583D18C_OFFSET UNITYSDK_OFFSET(0x1D53CDB0)
#define RPG_GAMECORE_TRANSITENVPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53CF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransitEnvProfile_TypeDefinitionIndex = 20514;

	class TransitEnvProfile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Path; // 0x18
		::System::Single Duration; // 0x20
		::RPG::GameCore::EnviromentControlPriority Priority; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E11077D9B583D18C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TransitEnvProfile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TransitEnvProfile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILE_METHOD_3_E11077D9B583D18C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D13E4BFDB0947502(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TransitEnvProfile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TransitEnvProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILE_METHOD_3_D13E4BFDB0947502_OFFSET))(a1, a2);
		}
	};
}
