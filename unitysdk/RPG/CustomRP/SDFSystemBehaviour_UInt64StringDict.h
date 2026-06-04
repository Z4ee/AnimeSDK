#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/SerializableDictionary_2.h"

namespace System { class String; }

#define RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_UINT64STRINGDICT__CTOR_OFFSET UNITYSDK_OFFSET(0xCC587F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SDFSystemBehaviour_UInt64StringDict_TypeDefinitionIndex = 48492;

	class SDFSystemBehaviour_UInt64StringDict : public ::RPG::CustomRP::SerializableDictionary_2<::System::UInt64, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SDFSYSTEMBEHAVIOUR_UINT64STRINGDICT__CTOR_OFFSET))(this);
		}
	};
}
