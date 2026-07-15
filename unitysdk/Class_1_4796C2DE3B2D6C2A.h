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

#define CLASS_1_4796C2DE3B2D6C2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1603B5F0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_00DF89AF1D11BD2E_OFFSET UNITYSDK_OFFSET(0x1603C890)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_145A8D9201423FC6_OFFSET UNITYSDK_OFFSET(0x1603E250)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_1EB273CD688D06ED_OFFSET UNITYSDK_OFFSET(0x1603D600)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_2D312A3A46C6FB2F_OFFSET UNITYSDK_OFFSET(0x1603C360)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_43B0FFFD1A1BF974_OFFSET UNITYSDK_OFFSET(0x1603EE00)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_466FDCDCBC13D73A_OFFSET UNITYSDK_OFFSET(0x1603E190)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_52DD47985B15034A_OFFSET UNITYSDK_OFFSET(0x1603E7E0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_60882208D099D33E_OFFSET UNITYSDK_OFFSET(0x1603CFD0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x1603BDF0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x1603B510)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_71137C197370ED55_OFFSET UNITYSDK_OFFSET(0x1603D250)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x1603B850)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_9152E9750C76708B_OFFSET UNITYSDK_OFFSET(0x1603C910)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_928B00241CFBD033_OFFSET UNITYSDK_OFFSET(0x1603CE10)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_97D89346F5076D01_OFFSET UNITYSDK_OFFSET(0x1603C550)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_A7FF6AA8FA2F7FEB_OFFSET UNITYSDK_OFFSET(0x1603B650)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_A8624219B56B77C4_OFFSET UNITYSDK_OFFSET(0x1603DF40)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_ABD781CAE1D41BD7_OFFSET UNITYSDK_OFFSET(0x1603DA40)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_AF7C96CACF497A85_OFFSET UNITYSDK_OFFSET(0x1603EBF0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_BA7B415A985A3C25_OFFSET UNITYSDK_OFFSET(0x1603D190)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x1603B930)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_ECF16165D5B625B4_OFFSET UNITYSDK_OFFSET(0x1603E530)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_F476304D68944B28_OFFSET UNITYSDK_OFFSET(0x1603DB00)
#define CLASS_1_4796C2DE3B2D6C2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1603B3C0)

inline static constexpr unsigned int Class_1_4796C2DE3B2D6C2A_TypeDefinitionIndex = 57849;

class Class_1_4796C2DE3B2D6C2A : public ::System::Object
{
public:
	::RPG::Client::MapDef* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_4796C2DE3B2D6C2A_Class_1_7A8BA05CC3614C46*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelLittleGameInfo*>*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::PoolHashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*>* Field_1_4; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_5; // 0x38

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

	::System::Boolean Method_1_97D89346F5076D01(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_97D89346F5076D01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_928B00241CFBD033(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_928B00241CFBD033_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_145A8D9201423FC6(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_145A8D9201423FC6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ECF16165D5B625B4(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_ECF16165D5B625B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_43B0FFFD1A1BF974(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_43B0FFFD1A1BF974_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AF7C96CACF497A85(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_AF7C96CACF497A85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7FF6AA8FA2F7FEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_A7FF6AA8FA2F7FEB_OFFSET))(this);
	}
};
