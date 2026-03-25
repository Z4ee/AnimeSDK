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

#define CLASS_1_4796C2DE3B2D6C2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8899C00)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_00DF89AF1D11BD2E_OFFSET UNITYSDK_OFFSET(0x889AEC0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_1CE2732842C89A64_OFFSET UNITYSDK_OFFSET(0x889BBC0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x8899C60)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_24C45C6ED6E57ADB_OFFSET UNITYSDK_OFFSET(0x889AC30)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_37E50AA6370122FA_OFFSET UNITYSDK_OFFSET(0x889CB50)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x889A670)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_4F6CB99543AF5BF6_OFFSET UNITYSDK_OFFSET(0x8899EA0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_520DF5925EE46A4D_OFFSET UNITYSDK_OFFSET(0x889C310)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_576E5003AD1E8BB6_OFFSET UNITYSDK_OFFSET(0x889C890)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x8899B60)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_60882208D099D33E_OFFSET UNITYSDK_OFFSET(0x889B600)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_64C0BD0A8001418C_OFFSET UNITYSDK_OFFSET(0x889AAF0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_7180D11BD8FDADB6_OFFSET UNITYSDK_OFFSET(0x889C530)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_7D3AA6B1637F537D_OFFSET UNITYSDK_OFFSET(0x889CEC0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_850A1E8990DC3F3C_OFFSET UNITYSDK_OFFSET(0x889BFE0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_9152E9750C76708B_OFFSET UNITYSDK_OFFSET(0x889AF40)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_928B00241CFBD033_OFFSET UNITYSDK_OFFSET(0x889B440)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_959B33BDA40A2343_OFFSET UNITYSDK_OFFSET(0x889B880)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x8899F40)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_BA7B415A985A3C25_OFFSET UNITYSDK_OFFSET(0x889B7C0)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_DBC5F3BB0E348F90_OFFSET UNITYSDK_OFFSET(0x889BF20)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_F1D3423379666E01_OFFSET UNITYSDK_OFFSET(0x889D000)
#define CLASS_1_4796C2DE3B2D6C2A_METHOD_1_F8174D23EFAA1B70_OFFSET UNITYSDK_OFFSET(0x889C5F0)
#define CLASS_1_4796C2DE3B2D6C2A__CTOR_OFFSET UNITYSDK_OFFSET(0x8899A10)

inline static constexpr unsigned int Class_1_4796C2DE3B2D6C2A_TypeDefinitionIndex = 49053;

class Class_1_4796C2DE3B2D6C2A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::PoolHashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*>* Field_1_5; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x20
	::RPG::Client::MapDef* Field_1_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelLittleGameInfo*>*>* Field_1_3; // 0x30
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_4796C2DE3B2D6C2A_Class_1_7A8BA05CC3614C46*>* Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_1_24C45C6ED6E57ADB(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_24C45C6ED6E57ADB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_928B00241CFBD033(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_928B00241CFBD033_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_BA7B415A985A3C25(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_BA7B415A985A3C25_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_959B33BDA40A2343(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_959B33BDA40A2343_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_4F6CB99543AF5BF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_4F6CB99543AF5BF6_OFFSET))(this);
	}

	::System::Void Method_1_64C0BD0A8001418C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_64C0BD0A8001418C_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBC5F3BB0E348F90(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_DBC5F3BB0E348F90_OFFSET))(this, a1);
	}

	::System::Void Method_1_850A1E8990DC3F3C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_850A1E8990DC3F3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7180D11BD8FDADB6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_7180D11BD8FDADB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
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

	::System::Void Method_1_1CE2732842C89A64(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_1CE2732842C89A64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_520DF5925EE46A4D(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_520DF5925EE46A4D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_37E50AA6370122FA(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_37E50AA6370122FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8174D23EFAA1B70(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_F8174D23EFAA1B70_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_576E5003AD1E8BB6(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_576E5003AD1E8BB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F1D3423379666E01(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_F1D3423379666E01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D3AA6B1637F537D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_7D3AA6B1637F537D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4796C2DE3B2D6C2A_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}
};
