#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_4796C2DE3B2D6C2A_Class_1_7A8BA05CC3614C46;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4796C2DE3B2D6C2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16ECA4E0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_00DF89AF1D11BD2E_OFFSET UNITYSDK_OFFSET(0x16ECB7C0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_1EB273CD688D06ED_OFFSET UNITYSDK_OFFSET(0x16ECC560)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_2373E7F27288A07C_OFFSET UNITYSDK_OFFSET(0x16ECDD90)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_2D312A3A46C6FB2F_OFFSET UNITYSDK_OFFSET(0x16ECB250)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_318CC58F5F6B1E0C_OFFSET UNITYSDK_OFFSET(0x16ECD490)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_3B50FC129987FCC0_OFFSET UNITYSDK_OFFSET(0x16ECBD40)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_466FDCDCBC13D73A_OFFSET UNITYSDK_OFFSET(0x16ECD0F0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_4DF0E0649EBE066A_OFFSET UNITYSDK_OFFSET(0x16ECB440)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_52DD47985B15034A_OFFSET UNITYSDK_OFFSET(0x16ECD740)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_60882208D099D33E_OFFSET UNITYSDK_OFFSET(0x16ECBF30)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x16ECACE0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x16ECA400)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_71137C197370ED55_OFFSET UNITYSDK_OFFSET(0x16ECC1B0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_772BCC32890E7931_OFFSET UNITYSDK_OFFSET(0x16ECD1B0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x16ECA740)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_9152E9750C76708B_OFFSET UNITYSDK_OFFSET(0x16ECB840)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_A7FF6AA8FA2F7FEB_OFFSET UNITYSDK_OFFSET(0x16ECA540)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_A8624219B56B77C4_OFFSET UNITYSDK_OFFSET(0x16ECCEA0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_ABD781CAE1D41BD7_OFFSET UNITYSDK_OFFSET(0x16ECC9A0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_BA7B415A985A3C25_OFFSET UNITYSDK_OFFSET(0x16ECC0F0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x16ECA820)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_F476304D68944B28_OFFSET UNITYSDK_OFFSET(0x16ECCA60)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_F8F145F474180497_OFFSET UNITYSDK_OFFSET(0x16ECDB40)
#define CLASS_1_4796C2DE3B2D6C2A__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECA2B0)

inline static constexpr unsigned int Class_1_4796C2DE3B2D6C2A_TypeDefinitionIndex = 60669;

class Class_1_4796C2DE3B2D6C2A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::PoolHashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*>* POOJBCGCNBF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelLittleGameInfo*>*>* FPPBMIBEODH; // 0x18
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_4796C2DE3B2D6C2A_Class_1_7A8BA05CC3614C46*>* HCJHBODIKLF; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* PPODONICOHF; // 0x28
	::RPG::Client::MapDef* KKKADHHBMLD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* NCMBOLBCPGP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Boolean Method_1_4DF0E0649EBE066A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_4DF0E0649EBE066A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B50FC129987FCC0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_3B50FC129987FCC0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_BA7B415A985A3C25(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_BA7B415A985A3C25_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_71137C197370ED55(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_71137C197370ED55_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_1_2D312A3A46C6FB2F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_2D312A3A46C6FB2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABD781CAE1D41BD7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_ABD781CAE1D41BD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F476304D68944B28(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_F476304D68944B28_OFFSET))(this, a1);
	}

	::System::Void Method_1_466FDCDCBC13D73A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_466FDCDCBC13D73A_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_1_9152E9750C76708B(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_9152E9750C76708B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_60882208D099D33E(::Class_1_4796C2DE3B2D6C2A_Class_1_7A8BA05CC3614C46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4796C2DE3B2D6C2A_Class_1_7A8BA05CC3614C46*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_60882208D099D33E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_00DF89AF1D11BD2E(::Class_1_4796C2DE3B2D6C2A_Class_1_7A8BA05CC3614C46*& a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4796C2DE3B2D6C2A_Class_1_7A8BA05CC3614C46*&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_00DF89AF1D11BD2E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1EB273CD688D06ED(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_1EB273CD688D06ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A8624219B56B77C4(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_A8624219B56B77C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52DD47985B15034A(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_52DD47985B15034A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_772BCC32890E7931(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_772BCC32890E7931_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_318CC58F5F6B1E0C(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_318CC58F5F6B1E0C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2373E7F27288A07C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_2373E7F27288A07C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8F145F474180497(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_F8F145F474180497_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7FF6AA8FA2F7FEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_A7FF6AA8FA2F7FEB_OFFSET))(this);
	}
};
