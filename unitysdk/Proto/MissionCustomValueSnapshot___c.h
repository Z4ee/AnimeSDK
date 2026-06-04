#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MissionCustomValueSnapshot; }

#define PROTO_MISSIONCUSTOMVALUESNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0FC9E0)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FCA20)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A0FCA30)

namespace Proto
{
	inline static constexpr unsigned int MissionCustomValueSnapshot___c_TypeDefinitionIndex = 24397;

	class MissionCustomValueSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::MissionCustomValueSnapshot___c** StaticGet___9()
		{
			return (::Proto::MissionCustomValueSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(MissionCustomValueSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x44420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::MissionCustomValueSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::MissionCustomValueSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
