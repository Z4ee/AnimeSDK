#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ASENTRYTITLEATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x139905D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ASENTRYTITLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x139905E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEntry_AsEntryTitleAttribute_TypeDefinitionIndex = 73340;

	class AnimatorEventEntry_AsEntryTitleAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 _Order_k__BackingField; // 0x10

		::System::Void _ctor(::System::Int32 order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ASENTRYTITLEATTRIBUTE__CTOR_OFFSET))(this, order);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ASENTRYTITLEATTRIBUTE_GET_ORDER_OFFSET))(this);
		}
	};
}
