#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NounPromptsTermProvider_EBracketStyle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/TermData.h"
#include "unitysdk/UnityEngine/UI/Extension/TermID.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NOUNPROMPTSTERMPROVIDER_BUILDDISPLAYTEXT_OFFSET UNITYSDK_OFFSET(0xE590C70)
#define NOUNPROMPTSTERMPROVIDER_BUILDMARKCOLORMAP_OFFSET UNITYSDK_OFFSET(0xE591150)
#define NOUNPROMPTSTERMPROVIDER_CLEARMARKTEMPLATECACHE_OFFSET UNITYSDK_OFFSET(0xE590930)
#define NOUNPROMPTSTERMPROVIDER_GET_MARKTEMPLATEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xE590810)
#define NOUNPROMPTSTERMPROVIDER_REGISTER_OFFSET UNITYSDK_OFFSET(0xE590830)
#define NOUNPROMPTSTERMPROVIDER_RESOLVECOLOR_OFFSET UNITYSDK_OFFSET(0xE590D70)
#define NOUNPROMPTSTERMPROVIDER_RESOLVEMARKCOLOR_OFFSET UNITYSDK_OFFSET(0xE590E00)
#define NOUNPROMPTSTERMPROVIDER_RESOLVETEXTMAP_OFFSET UNITYSDK_OFFSET(0xE590BD0)
#define NOUNPROMPTSTERMPROVIDER_SET_MARKTEMPLATEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xE590820)
#define NOUNPROMPTSTERMPROVIDER_TRYGETTERM_OFFSET UNITYSDK_OFFSET(0xE5909B0)
#define NOUNPROMPTSTERMPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE590770)
#define NOUNPROMPTSTERMPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xE590800)

inline static constexpr unsigned int NounPromptsTermProvider_TypeDefinitionIndex = 54318;

class NounPromptsTermProvider : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet__markTemplateCacheLazy()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(NounPromptsTermProvider_TypeDefinitionIndex)->GetStaticField(0x37800);
	}
	static ::NounPromptsTermProvider** StaticGet_Instance()
	{
		return (::NounPromptsTermProvider**)Il2CppClass::FromTypeDefinitionIndex(NounPromptsTermProvider_TypeDefinitionIndex)->GetStaticField(0x37808);
	}
	::System::Int32 _MarkTemplateOverride_k__BackingField; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER__CTOR_OFFSET))(this);
	}

	::System::Int32 get_MarkTemplateOverride()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_GET_MARKTEMPLATEOVERRIDE_OFFSET))(this);
	}

	::System::Void set_MarkTemplateOverride(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_SET_MARKTEMPLATEOVERRIDE_OFFSET))(this, value);
	}

	static ::System::Void Register()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_REGISTER_OFFSET))();
	}

	static ::System::Void ClearMarkTemplateCache()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_CLEARMARKTEMPLATECACHE_OFFSET))();
	}

	::System::Boolean TryGetTerm(::UnityEngine::UI::Extension::TermID termId, ::UnityEngine::UI::Extension::TermData& data)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::TermID, ::UnityEngine::UI::Extension::TermData&))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_TRYGETTERM_OFFSET))(this, termId, data);
	}

	static ::System::String* ResolveMarkColor(::System::Int32 markTemplateId, ::System::Int32 colorDefineId)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_RESOLVEMARKCOLOR_OFFSET))(markTemplateId, colorDefineId);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* BuildMarkColorMap(::System::Int32 markTemplateId)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NOUNPROMPTSTERMPROVIDER_BUILDMARKCOLORMAP_OFFSET))(markTemplateId);
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
