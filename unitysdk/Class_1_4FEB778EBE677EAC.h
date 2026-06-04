#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtDefenceBatchSpawnState.h"
#include "unitysdk/System/Object.h"

class Class_2_718A51E22CB71EC4;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDefenceBatchMonsterInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4FEB778EBE677EAC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA631710)
#define CLASS_1_4FEB778EBE677EAC_METHOD_1_276F406B5CF6DD47_OFFSET UNITYSDK_OFFSET(0xA631980)
#define CLASS_1_4FEB778EBE677EAC_METHOD_1_2E57F1ED86AFF2C9_OFFSET UNITYSDK_OFFSET(0xA630FF0)
#define CLASS_1_4FEB778EBE677EAC_METHOD_1_C672A24954E5C183_OFFSET UNITYSDK_OFFSET(0xA631180)
#define CLASS_1_4FEB778EBE677EAC_METHOD_1_F0788BE412B69697_OFFSET UNITYSDK_OFFSET(0xA631990)
#define CLASS_1_4FEB778EBE677EAC__CTOR_OFFSET UNITYSDK_OFFSET(0xA6319A0)

inline static constexpr unsigned int Class_1_4FEB778EBE677EAC_TypeDefinitionIndex = 50763;

class Class_1_4FEB778EBE677EAC : public ::System::Object
{
public:
	::RPG::GameCore::RtDefenceBatchMonsterInfo* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_4FEB778EBE677EAC*>* Field_1_1; // 0x18
	::Class_2_718A51E22CB71EC4* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::RPG::GameCore::RtDefenceBatchSpawnState Field_1_6; // 0x3C
	::System::Int32 Field_1_7; // 0x40
	::System::Int32 Field_1_8; // 0x44
	::System::Int32 Field_1_9; // 0x48

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
