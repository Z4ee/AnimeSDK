#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F0C0379712E53AD9_Class_1_F1947C9CC03EB062;
class Class_1_F0C0379712E53AD9_Class_3_1C5AB48DABF38B2F;
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F0C0379712E53AD9_CLEAR_OFFSET UNITYSDK_OFFSET(0xA4F1460)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_0FBD74DBB0657BEA_OFFSET UNITYSDK_OFFSET(0xA4F0E10)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_3293B6969A1743D5_OFFSET UNITYSDK_OFFSET(0xA4F0EB0)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_509007321E951A59_OFFSET UNITYSDK_OFFSET(0xA4F0020)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_623E48726F69CC25_OFFSET UNITYSDK_OFFSET(0xA4F11E0)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_67D79E831A43846E_OFFSET UNITYSDK_OFFSET(0xA4F12A0)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_797CE96FC0739EE9_OFFSET UNITYSDK_OFFSET(0xA4F03E0)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_8C6FE832D6EE7451_OFFSET UNITYSDK_OFFSET(0xA4F0490)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_9188E56A2068A4DC_OFFSET UNITYSDK_OFFSET(0xA4F15C0)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_9D7CB3F8D53AEB40_OFFSET UNITYSDK_OFFSET(0xA4F0AE0)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_D2F8A8BDA62865B1_OFFSET UNITYSDK_OFFSET(0xA4F0830)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0xA4EFFC0)
#define CLASS_1_F0C0379712E53AD9_METHOD_1_EBBE08F2874773A2_OFFSET UNITYSDK_OFFSET(0xA4F16E0)
#define CLASS_1_F0C0379712E53AD9__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F17A0)

inline static constexpr unsigned int Class_1_F0C0379712E53AD9_TypeDefinitionIndex = 53570;

class Class_1_F0C0379712E53AD9 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_F0C0379712E53AD9_Class_1_F1947C9CC03EB062*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Void Method_1_509007321E951A59(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_509007321E951A59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_797CE96FC0739EE9(::RPG::GameCore::GameEntityList* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::GameEntityList* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntityList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_797CE96FC0739EE9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8C6FE832D6EE7451(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_8C6FE832D6EE7451_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D2F8A8BDA62865B1(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_D2F8A8BDA62865B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D7CB3F8D53AEB40(::RPG::GameCore::BattlePerformCaptureActor* a1, ::Class_1_F0C0379712E53AD9_Class_3_1C5AB48DABF38B2F* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::Class_1_F0C0379712E53AD9_Class_3_1C5AB48DABF38B2F*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_9D7CB3F8D53AEB40_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3293B6969A1743D5(::RPG::GameCore::BattlePerformCaptureActor* a1, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_3293B6969A1743D5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_623E48726F69CC25(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_623E48726F69CC25_OFFSET))(this, a1);
	}

	::System::Void Method_1_67D79E831A43846E(::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>* a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::System::Action_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_67D79E831A43846E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_CLEAR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_0FBD74DBB0657BEA(::RPG::GameCore::BattlePerformCaptureActor* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_0FBD74DBB0657BEA_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_9188E56A2068A4DC(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_9188E56A2068A4DC_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_EBBE08F2874773A2()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C0379712E53AD9_METHOD_1_EBBE08F2874773A2_OFFSET))(this);
	}
};
