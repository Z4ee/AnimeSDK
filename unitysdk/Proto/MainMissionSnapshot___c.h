#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MainMissionSnapshot; }

#define PROTO_MAINMISSIONSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD435D0)
#define PROTO_MAINMISSIONSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD43610)
#define PROTO_MAINMISSIONSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DD43620)

namespace Proto
{
	inline static constexpr unsigned int MainMissionSnapshot___c_TypeDefinitionIndex = 25496;

	class MainMissionSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::MainMissionSnapshot___c** StaticGet___9()
		{
			return (::Proto::MainMissionSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(MainMissionSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x5BE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::MainMissionSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::MainMissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
