#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ActiveMCVKeySnapshot; }

#define PROTO_ACTIVEMCVKEYSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0DD700)
#define PROTO_ACTIVEMCVKEYSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DD740)
#define PROTO_ACTIVEMCVKEYSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A0DD750)

namespace Proto
{
	inline static constexpr unsigned int ActiveMCVKeySnapshot___c_TypeDefinitionIndex = 24386;

	class ActiveMCVKeySnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::ActiveMCVKeySnapshot___c** StaticGet___9()
		{
			return (::Proto::ActiveMCVKeySnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(ActiveMCVKeySnapshot___c_TypeDefinitionIndex)->GetStaticField(0x421C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::ActiveMCVKeySnapshot* __cctor_b__28_0()
		{
			return ((::Proto::ActiveMCVKeySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
