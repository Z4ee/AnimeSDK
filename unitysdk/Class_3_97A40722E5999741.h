#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A1A6E2502BE730AC.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdventureTriggerAttack; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_97A40722E5999741_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9E7220)
#define CLASS_3_97A40722E5999741_METHOD_3_0BE7712787AAE833_OFFSET UNITYSDK_OFFSET(0xA9E9410)
#define CLASS_3_97A40722E5999741_METHOD_3_1823CA609EAF9E96_OFFSET UNITYSDK_OFFSET(0xA9E8530)
#define CLASS_3_97A40722E5999741_METHOD_3_1B47EB77803F75F1_OFFSET UNITYSDK_OFFSET(0xA9E8F10)
#define CLASS_3_97A40722E5999741_METHOD_3_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xA9E7410)
#define CLASS_3_97A40722E5999741_METHOD_3_226C0E218FF9D43F_OFFSET UNITYSDK_OFFSET(0xA9EB0E0)
#define CLASS_3_97A40722E5999741_METHOD_3_283FCF4CAB5CF241_OFFSET UNITYSDK_OFFSET(0xA9EA020)
#define CLASS_3_97A40722E5999741_METHOD_3_292EED7CFF761564_OFFSET UNITYSDK_OFFSET(0xA9EC100)
#define CLASS_3_97A40722E5999741_METHOD_3_2EA1D7D04E30AB42_OFFSET UNITYSDK_OFFSET(0xA9EC900)
#define CLASS_3_97A40722E5999741_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA9E9310)
#define CLASS_3_97A40722E5999741_METHOD_3_3B911B6C3D1240C7_OFFSET UNITYSDK_OFFSET(0xA9EAA10)
#define CLASS_3_97A40722E5999741_METHOD_3_4DD3A5C65462235B_OFFSET UNITYSDK_OFFSET(0xA9EA800)
#define CLASS_3_97A40722E5999741_METHOD_3_76AE61F2B7040C4F_OFFSET UNITYSDK_OFFSET(0xA9EC9D0)
#define CLASS_3_97A40722E5999741_METHOD_3_7DB9A685F224BDE8_OFFSET UNITYSDK_OFFSET(0xA9E9830)
#define CLASS_3_97A40722E5999741_METHOD_3_849AB135BB66839B_OFFSET UNITYSDK_OFFSET(0xA9EC400)
#define CLASS_3_97A40722E5999741_METHOD_3_9131EC6D1F8F03F8_OFFSET UNITYSDK_OFFSET(0xA9EA250)
#define CLASS_3_97A40722E5999741_METHOD_3_9599C480BB78E348_OFFSET UNITYSDK_OFFSET(0xA9E99C0)
#define CLASS_3_97A40722E5999741_METHOD_3_9D039BD32ED588D9_OFFSET UNITYSDK_OFFSET(0xA9E8990)
#define CLASS_3_97A40722E5999741_METHOD_3_9EAE1A47132304F8_OFFSET UNITYSDK_OFFSET(0xA9EBFA0)
#define CLASS_3_97A40722E5999741_METHOD_3_B350475339603E87_OFFSET UNITYSDK_OFFSET(0xA9EAB10)
#define CLASS_3_97A40722E5999741_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA9E90D0)
#define CLASS_3_97A40722E5999741_METHOD_3_D51FBB2AB1676950_OFFSET UNITYSDK_OFFSET(0xA9EC700)
#define CLASS_3_97A40722E5999741_METHOD_3_D98D2C67BEEB1556_OFFSET UNITYSDK_OFFSET(0xA9EB1F0)
#define CLASS_3_97A40722E5999741_METHOD_3_DBD9F6DBB0E5364C_OFFSET UNITYSDK_OFFSET(0xA9E9CC0)
#define CLASS_3_97A40722E5999741_METHOD_3_E6DF2926E7700D14_OFFSET UNITYSDK_OFFSET(0xA9EAE10)
#define CLASS_3_97A40722E5999741_METHOD_3_EED37794475CA6E4_OFFSET UNITYSDK_OFFSET(0xA9EB240)
#define CLASS_3_97A40722E5999741_METHOD_3_F12126633650E005_OFFSET UNITYSDK_OFFSET(0xA9EB4C0)
#define CLASS_3_97A40722E5999741_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9E7360)
#define CLASS_3_97A40722E5999741_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9EB140)
#define CLASS_3_97A40722E5999741_TICK_OFFSET UNITYSDK_OFFSET(0xA9EB190)
#define CLASS_3_97A40722E5999741__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E6F00)
#define CLASS_3_97A40722E5999741___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9ECC40)

inline static constexpr unsigned int Class_3_97A40722E5999741_TypeDefinitionIndex = 54128;

class Class_3_97A40722E5999741 : public ::Class_2_A1A6E2502BE730AC
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x40
	::Class_1_5F51D4049EA87B7B* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_2; // 0x50
	::Class_3_07C3C4D2990C49EE* Field_3_3; // 0x58
	::Class_3_07C3C4D2990C49EE* Field_3_4; // 0x60
	::Class_3_07C3C4D2990C49EE* Field_3_5; // 0x68
	::Class_3_07C3C4D2990C49EE* Field_3_6; // 0x70
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_7; // 0x78
	::RPG::GameCore::GameEntityList* Field_3_8; // 0x80
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

	::System::Void Method_3_9D039BD32ED588D9(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_9D039BD32ED588D9_OFFSET))(this, a1, a2);
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

	::System::Void Method_3_0BE7712787AAE833(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_0BE7712787AAE833_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7DB9A685F224BDE8(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_7DB9A685F224BDE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DBD9F6DBB0E5364C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_DBD9F6DBB0E5364C_OFFSET))(this, a1);
	}

	::System::Void Method_3_9131EC6D1F8F03F8(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_9131EC6D1F8F03F8_OFFSET))(this, a1, a2);
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

	::System::Void Method_3_9599C480BB78E348(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_9599C480BB78E348_OFFSET))(this, a1);
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

	::System::Int32 Method_3_9EAE1A47132304F8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_9EAE1A47132304F8_OFFSET))(this);
	}

	::System::Void Method_3_226C0E218FF9D43F(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_226C0E218FF9D43F_OFFSET))(this, a1);
	}

	::System::Void Method_3_292EED7CFF761564(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_292EED7CFF761564_OFFSET))(this, a1);
	}

	::System::Void Method_3_849AB135BB66839B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_849AB135BB66839B_OFFSET))(this, a1);
	}

	::System::Void Method_3_D51FBB2AB1676950(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_D51FBB2AB1676950_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2EA1D7D04E30AB42(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_2EA1D7D04E30AB42_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_76AE61F2B7040C4F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_76AE61F2B7040C4F_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
