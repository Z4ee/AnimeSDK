#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELEASEENVPROFILE_METHOD_3_221667BC84F93AAA_OFFSET UNITYSDK_OFFSET(0x19ABB0D0)
#define RPG_GAMECORE_RELEASEENVPROFILE_METHOD_3_47201BD3789D6FF3_OFFSET UNITYSDK_OFFSET(0x19ABB150)
#define RPG_GAMECORE_RELEASEENVPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABB120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseEnvProfile_TypeDefinitionIndex = 19609;

	class ReleaseEnvProfile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_221667BC84F93AAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseEnvProfile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseEnvProfile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILE_METHOD_3_221667BC84F93AAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47201BD3789D6FF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseEnvProfile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseEnvProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILE_METHOD_3_47201BD3789D6FF3_OFFSET))(a1, a2);
		}
	};
}
