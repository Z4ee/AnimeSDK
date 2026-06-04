#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MainMissionMcvSnapshot; }

#define PROTO_MAINMISSIONMCVSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0F9AE0)
#define PROTO_MAINMISSIONMCVSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F9B20)
#define PROTO_MAINMISSIONMCVSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A0F9B30)

namespace Proto
{
	inline static constexpr unsigned int MainMissionMcvSnapshot___c_TypeDefinitionIndex = 24401;

	class MainMissionMcvSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::MainMissionMcvSnapshot___c** StaticGet___9()
		{
			return (::Proto::MainMissionMcvSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(MainMissionMcvSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x43FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::MainMissionMcvSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::MainMissionMcvSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
