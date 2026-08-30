#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MissionSnapshot; }

#define PROTO_MISSIONSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD46F40)
#define PROTO_MISSIONSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD46F80)
#define PROTO_MISSIONSNAPSHOT___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DD46F90)

namespace Proto
{
	inline static constexpr unsigned int MissionSnapshot___c_TypeDefinitionIndex = 25498;

	class MissionSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::MissionSnapshot___c** StaticGet___9()
		{
			return (::Proto::MissionSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(MissionSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x5C2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::MissionSnapshot* __cctor_b__48_0()
		{
			return ((::Proto::MissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT___C___CCTOR_B__48_0_OFFSET))(this);
		}
	};
}
