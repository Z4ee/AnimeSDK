#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MissionCustomValueSnapshotList; }

#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0FD2C0)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FD300)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A0FD310)

namespace Proto
{
	inline static constexpr unsigned int MissionCustomValueSnapshotList___c_TypeDefinitionIndex = 24399;

	class MissionCustomValueSnapshotList___c : public ::System::Object
	{
	public:
		static ::Proto::MissionCustomValueSnapshotList___c** StaticGet___9()
		{
			return (::Proto::MissionCustomValueSnapshotList___c**)Il2CppClass::FromTypeDefinitionIndex(MissionCustomValueSnapshotList___c_TypeDefinitionIndex)->GetStaticField(0x44570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C__CTOR_OFFSET))(this);
		}

		::Proto::MissionCustomValueSnapshotList* __cctor_b__23_0()
		{
			return ((::Proto::MissionCustomValueSnapshotList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C___CCTOR_B__23_0_OFFSET))(this);
		}
	};
}
