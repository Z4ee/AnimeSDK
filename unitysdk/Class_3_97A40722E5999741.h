#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_43018DB440EBECE9.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdventureTriggerAttack; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_97A40722E5999741_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149E8B20)
#define CLASS_3_97A40722E5999741_METHOD_3_15F6D470C1624D2C_OFFSET UNITYSDK_OFFSET(0x149EEC90)
#define CLASS_3_97A40722E5999741_METHOD_3_1823CA609EAF9E96_OFFSET UNITYSDK_OFFSET(0x149EA150)
#define CLASS_3_97A40722E5999741_METHOD_3_1ABF33EF52D6BBF0_OFFSET UNITYSDK_OFFSET(0x149EA620)
#define CLASS_3_97A40722E5999741_METHOD_3_1B47EB77803F75F1_OFFSET UNITYSDK_OFFSET(0x149EAC30)
#define CLASS_3_97A40722E5999741_METHOD_3_1FE363C3DC472092_OFFSET UNITYSDK_OFFSET(0x149EC0E0)
#define CLASS_3_97A40722E5999741_METHOD_3_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x149E8F70)
#define CLASS_3_97A40722E5999741_METHOD_3_283FCF4CAB5CF241_OFFSET UNITYSDK_OFFSET(0x149EBEB0)
#define CLASS_3_97A40722E5999741_METHOD_3_292EED7CFF761564_OFFSET UNITYSDK_OFFSET(0x149EE390)
#define CLASS_3_97A40722E5999741_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x149EB040)
#define CLASS_3_97A40722E5999741_METHOD_3_363082883E72B15E_OFFSET UNITYSDK_OFFSET(0x149EE120)
#define CLASS_3_97A40722E5999741_METHOD_3_3B911B6C3D1240C7_OFFSET UNITYSDK_OFFSET(0x149EC9A0)
#define CLASS_3_97A40722E5999741_METHOD_3_4DD3A5C65462235B_OFFSET UNITYSDK_OFFSET(0x149EC790)
#define CLASS_3_97A40722E5999741_METHOD_3_7C8857C3AE835F74_OFFSET UNITYSDK_OFFSET(0x149EE690)
#define CLASS_3_97A40722E5999741_METHOD_3_7D625B202951D7A6_OFFSET UNITYSDK_OFFSET(0x149ED1B0)
#define CLASS_3_97A40722E5999741_METHOD_3_7DB9A685F224BDE8_OFFSET UNITYSDK_OFFSET(0x149EB5F0)
#define CLASS_3_97A40722E5999741_METHOD_3_B350475339603E87_OFFSET UNITYSDK_OFFSET(0x149ECAA0)
#define CLASS_3_97A40722E5999741_METHOD_3_B734E813400A71EF_OFFSET UNITYSDK_OFFSET(0x149EB780)
#define CLASS_3_97A40722E5999741_METHOD_3_BA99721CBD2552DD_OFFSET UNITYSDK_OFFSET(0x149EED00)
#define CLASS_3_97A40722E5999741_METHOD_3_BB2A34CFEC8A9BDE_OFFSET UNITYSDK_OFFSET(0x149EB140)
#define CLASS_3_97A40722E5999741_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x149EAE00)
#define CLASS_3_97A40722E5999741_METHOD_3_D51FBB2AB1676950_OFFSET UNITYSDK_OFFSET(0x149EEA90)
#define CLASS_3_97A40722E5999741_METHOD_3_D98D2C67BEEB1556_OFFSET UNITYSDK_OFFSET(0x149ED2C0)
#define CLASS_3_97A40722E5999741_METHOD_3_DBD9F6DBB0E5364C_OFFSET UNITYSDK_OFFSET(0x149EBAF0)
#define CLASS_3_97A40722E5999741_METHOD_3_E6DF2926E7700D14_OFFSET UNITYSDK_OFFSET(0x149ECDA0)
#define CLASS_3_97A40722E5999741_METHOD_3_EED37794475CA6E4_OFFSET UNITYSDK_OFFSET(0x149ED310)
#define CLASS_3_97A40722E5999741_METHOD_3_F12126633650E005_OFFSET UNITYSDK_OFFSET(0x149ED590)
#define CLASS_3_97A40722E5999741_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x149E8E90)
#define CLASS_3_97A40722E5999741_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x149ED210)
#define CLASS_3_97A40722E5999741_TICK_OFFSET UNITYSDK_OFFSET(0x149ED260)
#define CLASS_3_97A40722E5999741__CTOR_OFFSET UNITYSDK_OFFSET(0x149E87F0)

inline static constexpr unsigned int Class_3_97A40722E5999741_TypeDefinitionIndex = 55351;

class Class_3_97A40722E5999741 : public ::Class_2_43018DB440EBECE9
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x40
	::RPG::GameCore::GameEntityList* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_2; // 0x50
	::RPG::GameCore::TaskContext* Field_3_3; // 0x58
	::Class_3_07C3C4D2990C49EE* Field_3_4; // 0x60
	::Class_1_5F51D4049EA87B7B* Field_3_5; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_6; // 0x70
	::Class_3_07C3C4D2990C49EE* Field_3_7; // 0x78
	::Class_3_07C3C4D2990C49EE* Field_3_8; // 0x80
	::RPG::GameCore::AdventureTriggerAttack* Field_3_9; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_1823CA609EAF9E96(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_1823CA609EAF9E96_OFFSET))(this, a1);
	}

	::System::Void Method_3_1ABF33EF52D6BBF0(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_1ABF33EF52D6BBF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1B47EB77803F75F1(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_1B47EB77803F75F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_BB2A34CFEC8A9BDE(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_BB2A34CFEC8A9BDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7DB9A685F224BDE8(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_7DB9A685F224BDE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DBD9F6DBB0E5364C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_DBD9F6DBB0E5364C_OFFSET))(this, a1);
	}

	::System::Void Method_3_1FE363C3DC472092(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_1FE363C3DC472092_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4DD3A5C65462235B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_4DD3A5C65462235B_OFFSET))(this, a1);
	}

	::System::Void Method_3_3B911B6C3D1240C7(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_3B911B6C3D1240C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B350475339603E87(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_B350475339603E87_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_283FCF4CAB5CF241(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_283FCF4CAB5CF241_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B734E813400A71EF(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_B734E813400A71EF_OFFSET))(this, a1);
	}

	::System::Void Method_3_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_3_E6DF2926E7700D14(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_E6DF2926E7700D14_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_TICK_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_D98D2C67BEEB1556(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_D98D2C67BEEB1556_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Method_3_EED37794475CA6E4(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_EED37794475CA6E4_OFFSET))(a1);
	}

	::System::Void Method_3_F12126633650E005(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_F12126633650E005_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_363082883E72B15E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_363082883E72B15E_OFFSET))(this);
	}

	::System::Void Method_3_7D625B202951D7A6(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_7D625B202951D7A6_OFFSET))(this, a1);
	}

	::System::Void Method_3_292EED7CFF761564(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_292EED7CFF761564_OFFSET))(this, a1);
	}

	::System::Void Method_3_7C8857C3AE835F74(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_7C8857C3AE835F74_OFFSET))(this, a1);
	}

	::System::Void Method_3_D51FBB2AB1676950(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_D51FBB2AB1676950_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_15F6D470C1624D2C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_15F6D470C1624D2C_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_BA99721CBD2552DD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_BA99721CBD2552DD_OFFSET))(this, a1, a2);
	}
};
