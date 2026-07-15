#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATCROWDINFO_METHOD_2_6632583CE1B6EB6E_OFFSET UNITYSDK_OFFSET(0x1B1D42D0)
#define RPG_GAMECORE_MUNICIPALCHATCROWDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D43E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatCrowdInfo_TypeDefinitionIndex = 16258;

	class MunicipalChatCrowdInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* CrowdUniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATCROWDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6632583CE1B6EB6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatCrowdInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatCrowdInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATCROWDINFO_METHOD_2_6632583CE1B6EB6E_OFFSET))(a1, a2);
		}
	};
}
