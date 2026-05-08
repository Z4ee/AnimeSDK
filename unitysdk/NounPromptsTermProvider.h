#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NounPromptsTermProvider_EBracketStyle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/TermData.h"
#include "unitysdk/UnityEngine/UI/Extension/TermID.h"

namespace System { class String; }

#define NOUNPROMPTSTERMPROVIDER_BUILDDISPLAYTEXT_OFFSET UNITYSDK_OFFSET(0xECA0C90)
#define NOUNPROMPTSTERMPROVIDER_REGISTER_OFFSET UNITYSDK_OFFSET(0xECA0950)
#define NOUNPROMPTSTERMPROVIDER_RESOLVECOLOR_OFFSET UNITYSDK_OFFSET(0xECA0D90)
#define NOUNPROMPTSTERMPROVIDER_RESOLVETEXTMAP_OFFSET UNITYSDK_OFFSET(0xECA0BF0)
#define NOUNPROMPTSTERMPROVIDER_TRYGETTERM_OFFSET UNITYSDK_OFFSET(0xECA0A50)
#define NOUNPROMPTSTERMPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0xECA0E30)
#define NOUNPROMPTSTERMPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xECA0E20)

inline static constexpr unsigned int NounPromptsTermProvider_TypeDefinitionIndex = 39401;

class NounPromptsTermProvider : public ::System::Object
{
public:
	static ::NounPromptsTermProvider** StaticGet_Instance()
	{
		return (::NounPromptsTermProvider**)Il2CppClass::FromTypeDefinitionIndex(NounPromptsTermProvider_TypeDefinitionIndex)->GetStaticField(0x33090);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER__CCTOR_OFFSET))();
	}

	static ::System::Void Register()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_REGISTER_OFFSET))();
	}

	::System::Boolean TryGetTerm(::UnityEngine::UI::Extension::TermID termId, ::UnityEngine::UI::Extension::TermData& data)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::TermID, ::UnityEngine::UI::Extension::TermData&))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_TRYGETTERM_OFFSET))(this, termId, data);
	}

	static ::System::String* ResolveTextMap(::System::String* key)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_RESOLVETEXTMAP_OFFSET))(key);
	}

	static ::System::String* BuildDisplayText(::System::String* text, ::NounPromptsTermProvider_EBracketStyle bracketStyle, ::System::String* endText)
	{
		return ((::System::String*(*)(::System::String*, ::NounPromptsTermProvider_EBracketStyle, ::System::String*))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_BUILDDISPLAYTEXT_OFFSET))(text, bracketStyle, endText);
	}

	static ::System::String* ResolveColor(::System::Int32 colorDefineId)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_RESOLVECOLOR_OFFSET))(colorDefineId);
	}
};
