#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT_METHOD_3_5279208BF00EA2F0_OFFSET UNITYSDK_OFFSET(0x1B1D3F90)
#define RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT_METHOD_3_C46BF9929BF23D99_OFFSET UNITYSDK_OFFSET(0x1B1D39D0)
#define RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D39C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatActionLookAt_TypeDefinitionIndex = 16252;

	class MunicipalChatActionLookAt : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::String* LookAtTargetName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5279208BF00EA2F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT_METHOD_3_5279208BF00EA2F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C46BF9929BF23D99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT_METHOD_3_C46BF9929BF23D99_OFFSET))(a1, a2);
		}
	};
}
