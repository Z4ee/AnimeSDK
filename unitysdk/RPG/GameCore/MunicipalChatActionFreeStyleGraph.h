#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH_METHOD_3_5117408C87290418_OFFSET UNITYSDK_OFFSET(0x18B68280)
#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH_METHOD_3_578D0440C887C159_OFFSET UNITYSDK_OFFSET(0x18B689B0)
#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x18B68270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatActionFreeStyleGraph_TypeDefinitionIndex = 16017;

	class MunicipalChatActionFreeStyleGraph : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::String* GraphName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_578D0440C887C159(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH_METHOD_3_578D0440C887C159_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5117408C87290418(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH_METHOD_3_5117408C87290418_OFFSET))(a1, a2);
		}
	};
}
