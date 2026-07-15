#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicJsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATENTITYINFO_METHOD_3_68A42E3239BB9FCD_OFFSET UNITYSDK_OFFSET(0x1B1D4430)
#define RPG_GAMECORE_MUNICIPALCHATENTITYINFO_METHOD_3_9CB2D5741F5C4562_OFFSET UNITYSDK_OFFSET(0x1B1D43F0)
#define RPG_GAMECORE_MUNICIPALCHATENTITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D4420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatEntityInfo_TypeDefinitionIndex = 16257;

	class MunicipalChatEntityInfo : public ::RPG::GameCore::DynamicJsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::UInt32 GroupInstanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATENTITYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9CB2D5741F5C4562(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatEntityInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatEntityInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATENTITYINFO_METHOD_3_9CB2D5741F5C4562_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68A42E3239BB9FCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatEntityInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatEntityInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATENTITYINFO_METHOD_3_68A42E3239BB9FCD_OFFSET))(a1, a2);
		}
	};
}
