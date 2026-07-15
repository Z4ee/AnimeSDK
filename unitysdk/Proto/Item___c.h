#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class Item; }

#define PROTO_ITEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BED8F70)
#define PROTO_ITEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED8FA0)
#define PROTO_ITEM___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1BED8FB0)

namespace Proto
{
	inline static constexpr unsigned int Item___c_TypeDefinitionIndex = 26606;

	class Item___c : public ::System::Object
	{
	public:
		static ::Proto::Item___c** StaticGet___9()
		{
			return (::Proto::Item___c**)Il2CppClass::FromTypeDefinitionIndex(Item___c_TypeDefinitionIndex)->GetStaticField(0x3E680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM___C__CTOR_OFFSET))(this);
		}

		::Proto::Item* __cctor_b__53_0()
		{
			return ((::Proto::Item*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM___C___CCTOR_B__53_0_OFFSET))(this);
		}
	};
}
