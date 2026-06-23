#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define PARADOXNOTION_DESIGN_PROTECTEDSINGLETONATTRIBUTE_MATCHGRAPH_OFFSET UNITYSDK_OFFSET(0x1D399BA0)
#define PARADOXNOTION_DESIGN_PROTECTEDSINGLETONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D399B90)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int ProtectedSingletonAttribute_TypeDefinitionIndex = 30753;

	class ProtectedSingletonAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Type*>* EffectiveGraphTypes; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Type*>* effectiveGraphTypes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_PROTECTEDSINGLETONATTRIBUTE__CTOR_OFFSET))(this, effectiveGraphTypes);
		}

		::System::Boolean MatchGraph(::System::Type* graphType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_PROTECTEDSINGLETONATTRIBUTE_MATCHGRAPH_OFFSET))(this, graphType);
		}
	};
}
