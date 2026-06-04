#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOADSAVEDENVPROFILE_METHOD_3_4364B61B3A88B2FC_OFFSET UNITYSDK_OFFSET(0x198A5780)
#define RPG_GAMECORE_LOADSAVEDENVPROFILE_METHOD_3_78176027C15C82C8_OFFSET UNITYSDK_OFFSET(0x198A5890)
#define RPG_GAMECORE_LOADSAVEDENVPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x198A5860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadSavedEnvProfile_TypeDefinitionIndex = 19610;

	class LoadSavedEnvProfile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSAVEDENVPROFILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4364B61B3A88B2FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadSavedEnvProfile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadSavedEnvProfile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSAVEDENVPROFILE_METHOD_3_4364B61B3A88B2FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_78176027C15C82C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadSavedEnvProfile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadSavedEnvProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSAVEDENVPROFILE_METHOD_3_78176027C15C82C8_OFFSET))(a1, a2);
		}
	};
}
