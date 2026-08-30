#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORYPRIORITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x164F6A90)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResourceFactoryPriorityAttribute_TypeDefinitionIndex = 38938;

	class RendererResourceFactoryPriorityAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 priority; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORYPRIORITYATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
