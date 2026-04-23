#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_559429787A82232C;
class Class_1_83D980B81C9B9AFA;
class Class_1_A59B7F9F9FB23BBE;
class Class_2_8F285BFA404E1032;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B18A39CC32B5DD22_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12481450)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_07456B7DA262B518_OFFSET UNITYSDK_OFFSET(0x124822D0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_1699C35DE0A54D86_OFFSET UNITYSDK_OFFSET(0x12481B90)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_18661EC33C94C2B7_OFFSET UNITYSDK_OFFSET(0x12482050)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_2B9D478141E0F891_1_OFFSET UNITYSDK_OFFSET(0x12481580)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x12481DB0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_2E0DA66EB036820F_OFFSET UNITYSDK_OFFSET(0x12481780)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_3C10A89BBA92E455_OFFSET UNITYSDK_OFFSET(0x12483450)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_4DE0745593225C80_OFFSET UNITYSDK_OFFSET(0x124831E0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_613D7391D33C4C9B_OFFSET UNITYSDK_OFFSET(0x12482D10)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_63307E59A380613C_OFFSET UNITYSDK_OFFSET(0x124836C0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_67F08D1E4227BA89_1_OFFSET UNITYSDK_OFFSET(0x12482890)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_67F08D1E4227BA89_OFFSET UNITYSDK_OFFSET(0x124825E0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x12482FC0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_7F11B604F3AE037D_OFFSET UNITYSDK_OFFSET(0x12482B40)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_83BF00A04DDD5B93_OFFSET UNITYSDK_OFFSET(0x12482370)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_901D5A7422339B1D_OFFSET UNITYSDK_OFFSET(0x12482220)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_A8C8FFA164F2128F_OFFSET UNITYSDK_OFFSET(0x12481BF0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x124823D0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_B5E892B3C2253F33_OFFSET UNITYSDK_OFFSET(0x12481270)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x12481FC0)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_D0B02590F846487E_OFFSET UNITYSDK_OFFSET(0x12482420)
#define CLASS_1_B18A39CC32B5DD22_METHOD_1_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x12482E90)
#define CLASS_1_B18A39CC32B5DD22__CTOR_OFFSET UNITYSDK_OFFSET(0x124813B0)
#define CLASS_1_B18A39CC32B5DD22__GETELATIONSKILLDATALIST_B__2_0_OFFSET UNITYSDK_OFFSET(0x12483750)

inline static constexpr unsigned int Class_1_B18A39CC32B5DD22_TypeDefinitionIndex = 66468;

class Class_1_B18A39CC32B5DD22 : public ::System::Object
{
public:
	::RPG::GameCore::EntityManager* Field_1_0; // 0x10
	::RPG::GameCore::JsonEnum* Field_1_6; // 0x18
	::System::Comparison_1<::Class_1_83D980B81C9B9AFA*>* Field_1_2; // 0x20
	::RPG::GameCore::EventManager* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_559429787A82232C*>* Field_1_4; // 0x30
	::System::Collections::Generic::HashSet_1<::Class_1_559429787A82232C*>* Field_1_3; // 0x38
	::System::Boolean Field_1_5; // 0x40

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

	::System::Collections::Generic::List_1<::Class_1_A59B7F9F9FB23BBE*>* Method_1_2E0DA66EB036820F()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A59B7F9F9FB23BBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_2E0DA66EB036820F_OFFSET))(this);
	}

	::System::Boolean Method_1_A8C8FFA164F2128F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_A8C8FFA164F2128F_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_2B9D478141E0F891_1_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_901D5A7422339B1D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_901D5A7422339B1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_18661EC33C94C2B7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_18661EC33C94C2B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0B02590F846487E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_D0B02590F846487E_OFFSET))(this, a1);
	}

	::System::Void Method_1_67F08D1E4227BA89(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_67F08D1E4227BA89_OFFSET))(this, a1);
	}

	::System::Void Method_1_67F08D1E4227BA89_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_67F08D1E4227BA89_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F11B604F3AE037D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_7F11B604F3AE037D_OFFSET))(this, a1);
	}

	::System::Void Method_1_613D7391D33C4C9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_613D7391D33C4C9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_559429787A82232C*>* Method_1_1699C35DE0A54D86()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_559429787A82232C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_1699C35DE0A54D86_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_559429787A82232C*>* Method_1_4DE0745593225C80()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_559429787A82232C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_4DE0745593225C80_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_1_3C10A89BBA92E455()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_3C10A89BBA92E455_OFFSET))(this);
	}

	::Class_1_559429787A82232C* Method_1_83BF00A04DDD5B93(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_559429787A82232C*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_83BF00A04DDD5B93_OFFSET))(this, a1);
	}

	::Class_2_8F285BFA404E1032* Method_1_63307E59A380613C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_8F285BFA404E1032*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_63307E59A380613C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_07456B7DA262B518(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22_METHOD_1_07456B7DA262B518_OFFSET))(this, a1);
	}

	::System::Int32 _GetElationSkillDataList_b__2_0(::Class_1_A59B7F9F9FB23BBE* a, ::Class_1_A59B7F9F9FB23BBE* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + CLASS_1_B18A39CC32B5DD22__GETELATIONSKILLDATALIST_B__2_0_OFFSET))(this, a, b);
	}
};
