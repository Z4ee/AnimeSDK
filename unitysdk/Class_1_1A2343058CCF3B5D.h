#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1A2343058CCF3B5D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137FF630)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_012B0B5F08D41837_OFFSET UNITYSDK_OFFSET(0x13800720)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_0D1203CDD127EB22_OFFSET UNITYSDK_OFFSET(0x13801FE0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_1CE2732842C89A64_OFFSET UNITYSDK_OFFSET(0x13801410)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_2D312A3A46C6FB2F_OFFSET UNITYSDK_OFFSET(0x13800260)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_320D79013B813313_OFFSET UNITYSDK_OFFSET(0x13801010)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_466FDCDCBC13D73A_OFFSET UNITYSDK_OFFSET(0x13801F20)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_52DD47985B15034A_OFFSET UNITYSDK_OFFSET(0x13802570)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_60882208D099D33E_OFFSET UNITYSDK_OFFSET(0x13800E50)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x137FF550)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_6BE484E5F636032A_OFFSET UNITYSDK_OFFSET(0x13800CC0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_6E1182CC9A2FCBD8_OFFSET UNITYSDK_OFFSET(0x13800400)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_9152E9750C76708B_OFFSET UNITYSDK_OFFSET(0x138007C0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_A7FF6AA8FA2F7FEB_OFFSET UNITYSDK_OFFSET(0x137FF690)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_A8624219B56B77C4_OFFSET UNITYSDK_OFFSET(0x13801CD0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_ABD781CAE1D41BD7_OFFSET UNITYSDK_OFFSET(0x13801820)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_B036E5806AE655F4_OFFSET UNITYSDK_OFFSET(0x137FF890)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_C4D3E191D220BCE1_OFFSET UNITYSDK_OFFSET(0x13801080)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_CAAAA03D9552FCE2_OFFSET UNITYSDK_OFFSET(0x13802A40)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x137FFE30)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_D63735FB49794316_OFFSET UNITYSDK_OFFSET(0x13802970)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x137FF970)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_F15D6AB771D7407B_OFFSET UNITYSDK_OFFSET(0x138022C0)
#define CLASS_1_1A2343058CCF3B5D_METHOD_1_F476304D68944B28_OFFSET UNITYSDK_OFFSET(0x138018E0)
#define CLASS_1_1A2343058CCF3B5D__CTOR_OFFSET UNITYSDK_OFFSET(0x137FF400)

inline static constexpr unsigned int Class_1_1A2343058CCF3B5D_TypeDefinitionIndex = 56603;

class Class_1_1A2343058CCF3B5D : public ::System::Object
{
public:
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46*>* Field_1_0; // 0x10
	::RPG::Client::MapDef* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelLittleGameInfo*>*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::PoolHashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*>* Field_1_4; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Boolean Method_1_6E1182CC9A2FCBD8(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_6E1182CC9A2FCBD8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BE484E5F636032A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_6BE484E5F636032A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_320D79013B813313(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_320D79013B813313_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C4D3E191D220BCE1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_C4D3E191D220BCE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_B036E5806AE655F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_B036E5806AE655F4_OFFSET))(this);
	}

	::System::Void Method_1_2D312A3A46C6FB2F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_2D312A3A46C6FB2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABD781CAE1D41BD7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_ABD781CAE1D41BD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F476304D68944B28(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_F476304D68944B28_OFFSET))(this, a1);
	}

	::System::Void Method_1_466FDCDCBC13D73A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_466FDCDCBC13D73A_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_1_9152E9750C76708B(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_9152E9750C76708B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_60882208D099D33E(::Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_60882208D099D33E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_012B0B5F08D41837(::Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46*& a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1A2343058CCF3B5D_Class_1_7A8BA05CC3614C46*&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_012B0B5F08D41837_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1CE2732842C89A64(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_1CE2732842C89A64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A8624219B56B77C4(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_A8624219B56B77C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52DD47985B15034A(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_52DD47985B15034A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D1203CDD127EB22(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_0D1203CDD127EB22_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F15D6AB771D7407B(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_F15D6AB771D7407B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CAAAA03D9552FCE2(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_CAAAA03D9552FCE2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D63735FB49794316(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_D63735FB49794316_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7FF6AA8FA2F7FEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A2343058CCF3B5D_METHOD_1_A7FF6AA8FA2F7FEB_OFFSET))(this);
	}
};
