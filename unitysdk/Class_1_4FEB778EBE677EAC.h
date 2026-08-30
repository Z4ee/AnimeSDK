#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtDefenceBatchSpawnState.h"
#include "unitysdk/System/Object.h"

class Class_2_718A51E22CB71EC4;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDefenceBatchMonsterInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4FEB778EBE677EAC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB94E940)
#define CLASS_1_4FEB778EBE677EAC_METHOD_1_276F406B5CF6DD47_OFFSET UNITYSDK_OFFSET(0xB94EBB0)
#define CLASS_1_4FEB778EBE677EAC_METHOD_1_2E57F1ED86AFF2C9_OFFSET UNITYSDK_OFFSET(0xB94E220)
#define CLASS_1_4FEB778EBE677EAC_METHOD_1_C672A24954E5C183_OFFSET UNITYSDK_OFFSET(0xB94E3B0)
#define CLASS_1_4FEB778EBE677EAC_METHOD_1_F0788BE412B69697_OFFSET UNITYSDK_OFFSET(0xB94EBC0)
#define CLASS_1_4FEB778EBE677EAC__CTOR_OFFSET UNITYSDK_OFFSET(0xB94EBD0)

inline static constexpr unsigned int Class_1_4FEB778EBE677EAC_TypeDefinitionIndex = 54529;

class Class_1_4FEB778EBE677EAC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FPEOFLNHOOL; // 0x10
	::Class_2_718A51E22CB71EC4* BHJDJDPLCLP; // 0x18
	::System::Collections::Generic::List_1<::Class_1_4FEB778EBE677EAC*>* ADENKDFOMFN; // 0x20
	::RPG::GameCore::RtDefenceBatchMonsterInfo* IGHAHBNLIJA; // 0x28
	::System::Int32 INAKMLFKHAM; // 0x30
	::System::Int32 IDCHMNBJKGA; // 0x34
	::RPG::GameCore::RtDefenceBatchSpawnState DLNIGFGLPLJ; // 0x38
	::System::Int32 NBGFIOIOJDL; // 0x3C
	::System::Int32 BOGKJCEABFK; // 0x40
	::RPG::GameCore::FixPoint PGMIOKKLHIE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FEB778EBE677EAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2E57F1ED86AFF2C9(::RPG::GameCore::RtDefenceBatchMonsterInfo* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_4FEB778EBE677EAC*>* a3, ::Class_2_718A51E22CB71EC4* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtDefenceBatchMonsterInfo*, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_4FEB778EBE677EAC*>*, ::Class_2_718A51E22CB71EC4*))((::PBYTE)hIl2Cpp + CLASS_1_4FEB778EBE677EAC_METHOD_1_2E57F1ED86AFF2C9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C672A24954E5C183(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_4FEB778EBE677EAC_METHOD_1_C672A24954E5C183_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FEB778EBE677EAC_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::RtDefenceBatchMonsterInfo* Method_1_276F406B5CF6DD47()
	{
		return ((::RPG::GameCore::RtDefenceBatchMonsterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FEB778EBE677EAC_METHOD_1_276F406B5CF6DD47_OFFSET))(this);
	}

	::RPG::GameCore::RtDefenceBatchSpawnState Method_1_F0788BE412B69697()
	{
		return ((::RPG::GameCore::RtDefenceBatchSpawnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FEB778EBE677EAC_METHOD_1_F0788BE412B69697_OFFSET))(this);
	}
};
