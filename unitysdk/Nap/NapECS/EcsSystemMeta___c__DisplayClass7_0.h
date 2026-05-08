#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define NAP_NAPECS_ECSSYSTEMMETA___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192E3A70)
#define NAP_NAPECS_ECSSYSTEMMETA___C__DISPLAYCLASS7_0__INITSYSTEMMETA_B__0_OFFSET UNITYSDK_OFFSET(0x192E3B80)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemMeta___c__DisplayClass7_0_TypeDefinitionIndex = 35747;

	class EcsSystemMeta___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Type* baseMetaType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMMETA___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitSystemMeta_b__0(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMMETA___C__DISPLAYCLASS7_0__INITSYSTEMMETA_B__0_OFFSET))(this, t);
		}
	};
}
