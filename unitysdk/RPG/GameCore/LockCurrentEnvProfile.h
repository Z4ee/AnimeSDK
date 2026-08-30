#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKCURRENTENVPROFILE_METHOD_3_25B94F7D989CF6CE_OFFSET UNITYSDK_OFFSET(0x1D20F9D0)
#define RPG_GAMECORE_LOCKCURRENTENVPROFILE_METHOD_3_F7794E4E80BC170D_OFFSET UNITYSDK_OFFSET(0x1D20F990)
#define RPG_GAMECORE_LOCKCURRENTENVPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20F9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockCurrentEnvProfile_TypeDefinitionIndex = 20517;

	class LockCurrentEnvProfile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Lock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTENVPROFILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7794E4E80BC170D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockCurrentEnvProfile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockCurrentEnvProfile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTENVPROFILE_METHOD_3_F7794E4E80BC170D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25B94F7D989CF6CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockCurrentEnvProfile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockCurrentEnvProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTENVPROFILE_METHOD_3_25B94F7D989CF6CE_OFFSET))(a1, a2);
		}
	};
}
