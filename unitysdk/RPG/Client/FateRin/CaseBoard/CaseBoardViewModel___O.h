#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardViewModel___O_TypeDefinitionIndex = 75833;

	class CaseBoardViewModel___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0____OnPageExit()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CaseBoardViewModel___O_TypeDefinitionIndex)->GetStaticField(0xA640);
		}
	};
}
