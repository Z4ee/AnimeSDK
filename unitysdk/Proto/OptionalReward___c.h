#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class OptionalReward; }

#define PROTO_OPTIONALREWARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD49FE0)
#define PROTO_OPTIONALREWARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD4A020)
#define PROTO_OPTIONALREWARD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DD4A030)

namespace Proto
{
	inline static constexpr unsigned int OptionalReward___c_TypeDefinitionIndex = 26139;

	class OptionalReward___c : public ::System::Object
	{
	public:
		static ::Proto::OptionalReward___c** StaticGet___9()
		{
			return (::Proto::OptionalReward___c**)Il2CppClass::FromTypeDefinitionIndex(OptionalReward___c_TypeDefinitionIndex)->GetStaticField(0x5C550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD___C__CTOR_OFFSET))(this);
		}

		::Proto::OptionalReward* __cctor_b__28_0()
		{
			return ((::Proto::OptionalReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
