#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ENTITAS_ENTITASSTRINGEXTENSION_ADDCOMPONENTSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFE10)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDCONTEXTSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFB80)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDENTITYSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFD30)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDLISTENERSUFFIX_OFFSET UNITYSDK_OFFSET(0x14700110)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDMATCHERSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFFD0)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFBD0)
#define ENTITAS_ENTITASSTRINGEXTENSION_ADDSYSTEMSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFEF0)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASCOMPONENTSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFEC0)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASCONTEXTSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFCE0)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASENTITYSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFDE0)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASLISTENERSUFFIX_OFFSET UNITYSDK_OFFSET(0x14700200)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASMATCHERSUFFIX_OFFSET UNITYSDK_OFFSET(0x147000C0)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFD10)
#define ENTITAS_ENTITASSTRINGEXTENSION_HASSYSTEMSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFFA0)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVECOMPONENTSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFE60)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVECONTEXTSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFC20)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVEENTITYSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFD80)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVELISTENERSUFFIX_OFFSET UNITYSDK_OFFSET(0x14700180)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVEMATCHERSUFFIX_OFFSET UNITYSDK_OFFSET(0x14700040)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVESUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFC80)
#define ENTITAS_ENTITASSTRINGEXTENSION_REMOVESYSTEMSUFFIX_OFFSET UNITYSDK_OFFSET(0x146FFF40)

namespace Entitas
{
	inline static constexpr unsigned int EntitasStringExtension_TypeDefinitionIndex = 9674;

	class EntitasStringExtension : public ::System::Object
	{
	public:
		// static const ::System::String* CONTEXT_SUFFIX; // 0x0
		// static const ::System::String* ENTITY_SUFFIX; // 0x0
		// static const ::System::String* COMPONENT_SUFFIX; // 0x0
		// static const ::System::String* SYSTEM_SUFFIX; // 0x0
		// static const ::System::String* MATCHER_SUFFIX; // 0x0
		// static const ::System::String* LISTENER_SUFFIX; // 0x0

		static ::System::String* AddContextSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDCONTEXTSUFFIX_OFFSET))(a1);
		}

		static ::System::String* RemoveContextSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVECONTEXTSUFFIX_OFFSET))(a1);
		}

		static ::System::Boolean HasContextSuffix(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASCONTEXTSUFFIX_OFFSET))(a1);
		}

		static ::System::String* AddEntitySuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDENTITYSUFFIX_OFFSET))(a1);
		}

		static ::System::String* RemoveEntitySuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVEENTITYSUFFIX_OFFSET))(a1);
		}

		static ::System::Boolean HasEntitySuffix(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASENTITYSUFFIX_OFFSET))(a1);
		}

		static ::System::String* AddComponentSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDCOMPONENTSUFFIX_OFFSET))(a1);
		}

		static ::System::String* RemoveComponentSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVECOMPONENTSUFFIX_OFFSET))(a1);
		}

		static ::System::Boolean HasComponentSuffix(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASCOMPONENTSUFFIX_OFFSET))(a1);
		}

		static ::System::String* AddSystemSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDSYSTEMSUFFIX_OFFSET))(a1);
		}

		static ::System::String* RemoveSystemSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVESYSTEMSUFFIX_OFFSET))(a1);
		}

		static ::System::Boolean HasSystemSuffix(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASSYSTEMSUFFIX_OFFSET))(a1);
		}

		static ::System::String* AddMatcherSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDMATCHERSUFFIX_OFFSET))(a1);
		}

		static ::System::String* RemoveMatcherSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVEMATCHERSUFFIX_OFFSET))(a1);
		}

		static ::System::Boolean HasMatcherSuffix(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASMATCHERSUFFIX_OFFSET))(a1);
		}

		static ::System::String* AddListenerSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDLISTENERSUFFIX_OFFSET))(a1);
		}

		static ::System::String* RemoveListenerSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVELISTENERSUFFIX_OFFSET))(a1);
		}

		static ::System::Boolean HasListenerSuffix(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASLISTENERSUFFIX_OFFSET))(a1);
		}

		static ::System::String* addSuffix(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_ADDSUFFIX_OFFSET))(a1, a2);
		}

		static ::System::String* removeSuffix(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_REMOVESUFFIX_OFFSET))(a1, a2);
		}

		static ::System::Boolean hasSuffix(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITASSTRINGEXTENSION_HASSUFFIX_OFFSET))(a1, a2);
		}
	};
}
