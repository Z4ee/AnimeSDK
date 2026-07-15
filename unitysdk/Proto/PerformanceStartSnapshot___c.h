#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PerformanceStartSnapshot; }

#define PROTO_PERFORMANCESTARTSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEE7460)
#define PROTO_PERFORMANCESTARTSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE74A0)
#define PROTO_PERFORMANCESTARTSNAPSHOT___C___CCTOR_B__133_0_OFFSET UNITYSDK_OFFSET(0x1BEE74B0)

namespace Proto
{
	inline static constexpr unsigned int PerformanceStartSnapshot___c_TypeDefinitionIndex = 24925;

	class PerformanceStartSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::PerformanceStartSnapshot___c** StaticGet___9()
		{
			return (::Proto::PerformanceStartSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(PerformanceStartSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x3F480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::PerformanceStartSnapshot* __cctor_b__133_0()
		{
			return ((::Proto::PerformanceStartSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PERFORMANCESTARTSNAPSHOT___C___CCTOR_B__133_0_OFFSET))(this);
		}
	};
}
