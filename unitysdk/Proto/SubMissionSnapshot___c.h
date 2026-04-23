#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class SubMissionSnapshot; }

#define PROTO_SUBMISSIONSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1935DD40)
#define PROTO_SUBMISSIONSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1935DD80)
#define PROTO_SUBMISSIONSNAPSHOT___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1935DD90)

namespace Proto
{
	inline static constexpr unsigned int SubMissionSnapshot___c_TypeDefinitionIndex = 24542;

	class SubMissionSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::SubMissionSnapshot___c** StaticGet___9()
		{
			return (::Proto::SubMissionSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(SubMissionSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x65E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::SubMissionSnapshot* __cctor_b__23_0()
		{
			return ((::Proto::SubMissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT___C___CCTOR_B__23_0_OFFSET))(this);
		}
	};
}
