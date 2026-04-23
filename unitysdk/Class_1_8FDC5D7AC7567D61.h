#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8FDC5D7AC7567D61_Class_1_F1947C9CC03EB062;
class Class_1_8FDC5D7AC7567D61_Class_3_1C5AB48DABF38B2F;
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8FDC5D7AC7567D61_CLEAR_OFFSET UNITYSDK_OFFSET(0x123BE1C0)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_036E6E9482605B69_OFFSET UNITYSDK_OFFSET(0x123BE040)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_09C839B1D58A4566_OFFSET UNITYSDK_OFFSET(0x123BCDD0)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_156F754375831213_OFFSET UNITYSDK_OFFSET(0x123BD510)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_1DE65D55DEA4BDE7_OFFSET UNITYSDK_OFFSET(0x123BDFA0)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_292F9610D63D1947_OFFSET UNITYSDK_OFFSET(0x123BE430)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_35478A39BB0771CB_OFFSET UNITYSDK_OFFSET(0x123BD3E0)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_455B27B25B36E6BC_OFFSET UNITYSDK_OFFSET(0x123BD710)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_49900FCDCC39715E_OFFSET UNITYSDK_OFFSET(0x123BE320)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_4ADD6B735EA38921_OFFSET UNITYSDK_OFFSET(0x123BD1C0)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_C37A89B710CE0DA8_OFFSET UNITYSDK_OFFSET(0x123BDDA0)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_C87C09F67312607E_OFFSET UNITYSDK_OFFSET(0x123BD110)
#define CLASS_1_8FDC5D7AC7567D61_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0x123BCD70)
#define CLASS_1_8FDC5D7AC7567D61__CTOR_OFFSET UNITYSDK_OFFSET(0x123BE490)

inline static constexpr unsigned int Class_1_8FDC5D7AC7567D61_TypeDefinitionIndex = 52861;

class Class_1_8FDC5D7AC7567D61 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::Class_1_8FDC5D7AC7567D61_Class_1_F1947C9CC03EB062*>* Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Void Method_1_09C839B1D58A4566(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::GameEntityList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_09C839B1D58A4566_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C87C09F67312607E(::RPG::GameCore::GameEntityList* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::GameEntityList* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntityList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_C87C09F67312607E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4ADD6B735EA38921(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_4ADD6B735EA38921_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_35478A39BB0771CB(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_35478A39BB0771CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_156F754375831213(::RPG::GameCore::BattlePerformCaptureActor* a1, ::Class_1_8FDC5D7AC7567D61_Class_3_1C5AB48DABF38B2F* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::Class_1_8FDC5D7AC7567D61_Class_3_1C5AB48DABF38B2F*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_156F754375831213_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C37A89B710CE0DA8(::RPG::GameCore::BattlePerformCaptureActor* a1, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_C37A89B710CE0DA8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1DE65D55DEA4BDE7(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_1DE65D55DEA4BDE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_036E6E9482605B69(::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>* a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::System::Action_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_036E6E9482605B69_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_CLEAR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_455B27B25B36E6BC(::RPG::GameCore::BattlePerformCaptureActor* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_455B27B25B36E6BC_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_49900FCDCC39715E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_49900FCDCC39715E_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_292F9610D63D1947()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FDC5D7AC7567D61_METHOD_1_292F9610D63D1947_OFFSET))(this);
	}
};
