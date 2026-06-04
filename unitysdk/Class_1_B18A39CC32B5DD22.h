#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_252378B3AE9EA7EF;
class Class_1_83D980B81C9B9AFA;
class Class_1_A59B7F9F9FB23BBE;
class Class_2_AD908255DB87849A;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B18A39CC32B5DD22_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB279E0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_07456B7DA262B518_OFFSET UNITYSDK_OFFSET(0xAB28970)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0xAB29130)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_0DFB38E1AA7FB52A_OFFSET UNITYSDK_OFFSET(0xAB27D60)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_1699C35DE0A54D86_OFFSET UNITYSDK_OFFSET(0xAB281D0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_18661EC33C94C2B7_OFFSET UNITYSDK_OFFSET(0xAB286E0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0xAB28AC0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_2B0AE62D097BB2AF_OFFSET UNITYSDK_OFFSET(0xAB29420)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_2B9D478141E0F891_1_OFFSET UNITYSDK_OFFSET(0xAB27AF0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xAB283D0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_3FC5D2EAE16048C0_1_OFFSET UNITYSDK_OFFSET(0xAB28EC0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_3FC5D2EAE16048C0_OFFSET UNITYSDK_OFFSET(0xAB28C50)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_63307E59A380613C_OFFSET UNITYSDK_OFFSET(0xAB29C20)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xAB28A70)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_7EDD820A66084A09_OFFSET UNITYSDK_OFFSET(0xAB292D0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_83BF00A04DDD5B93_OFFSET UNITYSDK_OFFSET(0xAB28A10)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xAB29560)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xAB28650)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_B5E892B3C2253F33_OFFSET UNITYSDK_OFFSET(0xAB27800)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_BBAF4B070327A414_OFFSET UNITYSDK_OFFSET(0xAB288B0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_C7A8A69D3FDA2DA6_OFFSET UNITYSDK_OFFSET(0xAB29990)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_DCB1C6CDC61D91E8_OFFSET UNITYSDK_OFFSET(0xAB28230)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_DE6EF29F0B315976_OFFSET UNITYSDK_OFFSET(0xAB29730)
#define CLASS_1_B18A39CC32B5DD22__CTOR_OFFSET UNITYSDK_OFFSET(0xAB27940)
#define CLASS_1_B18A39CC32B5DD22__GETELATIONSKILLDATALIST_B__2_0_OFFSET UNITYSDK_OFFSET(0xAB29CB0)

inline static constexpr unsigned int Class_1_B18A39CC32B5DD22_TypeDefinitionIndex = 67407;

class Class_1_B18A39CC32B5DD22 : public ::System::Object
{
public:
	::RPG::GameCore::EventManager* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_252378B3AE9EA7EF*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_252378B3AE9EA7EF*>* Field_1_2; // 0x20
	::RPG::GameCore::JsonEnum* Field_1_3; // 0x28
	::RPG::GameCore::EntityManager* Field_1_4; // 0x30
	::System::Comparison_1<::Class_1_83D980B81C9B9AFA*>* Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22__CTOR_OFFSET))(this);
	}

	static ::Class_1_B18A39CC32B5DD22* Method_1_B5E892B3C2253F33(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::EventManager* a2, ::System::Comparison_1<::Class_1_83D980B81C9B9AFA*>* a3)
	{
		return ((::Class_1_B18A39CC32B5DD22*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::EventManager*, ::System::Comparison_1<::Class_1_83D980B81C9B9AFA*>*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_B5E892B3C2253F33_OFFSET))(a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_A59B7F9F9FB23BBE*>* Method_1_0DFB38E1AA7FB52A()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A59B7F9F9FB23BBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_0DFB38E1AA7FB52A_OFFSET))(this);
	}

	::System::Boolean Method_1_DCB1C6CDC61D91E8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_DCB1C6CDC61D91E8_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_2B9D478141E0F891_1_OFFSET))(this);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBAF4B070327A414(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_BBAF4B070327A414_OFFSET))(this, a1);
	}

	::System::Void Method_1_18661EC33C94C2B7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_18661EC33C94C2B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_29861B2485680DBB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_29861B2485680DBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FC5D2EAE16048C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_3FC5D2EAE16048C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FC5D2EAE16048C0_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_3FC5D2EAE16048C0_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C726E1A401D0413(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_0C726E1A401D0413_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EDD820A66084A09(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_7EDD820A66084A09_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B0AE62D097BB2AF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_2B0AE62D097BB2AF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_252378B3AE9EA7EF*>* Method_1_1699C35DE0A54D86()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_252378B3AE9EA7EF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_1699C35DE0A54D86_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_252378B3AE9EA7EF*>* Method_1_DE6EF29F0B315976()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_252378B3AE9EA7EF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_DE6EF29F0B315976_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_1_C7A8A69D3FDA2DA6()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_C7A8A69D3FDA2DA6_OFFSET))(this);
	}

	::Class_1_252378B3AE9EA7EF* Method_1_83BF00A04DDD5B93(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_252378B3AE9EA7EF*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_83BF00A04DDD5B93_OFFSET))(this, a1);
	}

	::Class_2_AD908255DB87849A* Method_1_63307E59A380613C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_AD908255DB87849A*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_63307E59A380613C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_07456B7DA262B518(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_07456B7DA262B518_OFFSET))(this, a1);
	}

	::System::Int32 _GetElationSkillDataList_b__2_0(::Class_1_A59B7F9F9FB23BBE* a1, ::Class_1_A59B7F9F9FB23BBE* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22__GETELATIONSKILLDATALIST_B__2_0_OFFSET))(this, a1, a2);
	}
};
