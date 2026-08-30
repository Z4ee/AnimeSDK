#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0251F68C7A9C91EA_Class_1_F1947C9CC03EB062;
class Class_1_0251F68C7A9C91EA_Class_3_1C5AB48DABF38B2F;
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0251F68C7A9C91EA_CLEAR_OFFSET UNITYSDK_OFFSET(0x16CC5300)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_0FBD74DBB0657BEA_OFFSET UNITYSDK_OFFSET(0x16CC4C90)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_1DDCA39D02072455_OFFSET UNITYSDK_OFFSET(0x16CC43C0)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_3C77A6583C28B807_OFFSET UNITYSDK_OFFSET(0x16CC4940)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_509007321E951A59_OFFSET UNITYSDK_OFFSET(0x16CC4000)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_623E48726F69CC25_OFFSET UNITYSDK_OFFSET(0x16CC5080)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_67D79E831A43846E_OFFSET UNITYSDK_OFFSET(0x16CC5140)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_89FDB49A9937EBE7_OFFSET UNITYSDK_OFFSET(0x16CC4790)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_8C6FE832D6EE7451_OFFSET UNITYSDK_OFFSET(0x16CC4470)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_9188E56A2068A4DC_OFFSET UNITYSDK_OFFSET(0x16CC5490)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_E465D0F588233D19_OFFSET UNITYSDK_OFFSET(0x16CC3FA0)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_EBBE08F2874773A2_OFFSET UNITYSDK_OFFSET(0x16CC55B0)
#define CLASS_1_0251F68C7A9C91EA_METHOD_1_FF53FDE4E8A45C7A_OFFSET UNITYSDK_OFFSET(0x16CC4D30)
#define CLASS_1_0251F68C7A9C91EA__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC5670)

inline static constexpr unsigned int Class_1_0251F68C7A9C91EA_TypeDefinitionIndex = 57507;

class Class_1_0251F68C7A9C91EA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BAFHGOPEJNE; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0251F68C7A9C91EA_Class_1_F1947C9CC03EB062*>* NCCCMKEBMLC; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* FMIHBOFPJOC; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GDGDFMKAKIK; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* IJBJLOKNAOJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E465D0F588233D19(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_E465D0F588233D19_OFFSET))(this, a1);
	}

	::System::Void Method_1_509007321E951A59(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_509007321E951A59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DDCA39D02072455(::RPG::GameCore::GameEntityList* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::GameEntityList* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntityList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_1DDCA39D02072455_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8C6FE832D6EE7451(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_8C6FE832D6EE7451_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_89FDB49A9937EBE7(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_89FDB49A9937EBE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3C77A6583C28B807(::RPG::GameCore::BattlePerformCaptureActor* a1, ::Class_1_0251F68C7A9C91EA_Class_3_1C5AB48DABF38B2F* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::Class_1_0251F68C7A9C91EA_Class_3_1C5AB48DABF38B2F*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_3C77A6583C28B807_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FF53FDE4E8A45C7A(::RPG::GameCore::BattlePerformCaptureActor* a1, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_FF53FDE4E8A45C7A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_623E48726F69CC25(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_623E48726F69CC25_OFFSET))(this, a1);
	}

	::System::Void Method_1_67D79E831A43846E(::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>* a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::System::Action_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_67D79E831A43846E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_CLEAR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_0FBD74DBB0657BEA(::RPG::GameCore::BattlePerformCaptureActor* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_0FBD74DBB0657BEA_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_9188E56A2068A4DC(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_9188E56A2068A4DC_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_EBBE08F2874773A2()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0251F68C7A9C91EA_METHOD_1_EBBE08F2874773A2_OFFSET))(this);
	}
};
