#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_04E8A8CB715F95A7;
class Class_2_049053A9DCD26B56;
class Class_2_4CDC13220E4CDFEE;
class Class_2_523C55AEA55804D8;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_94088BD52F494C82_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA71DA0)
#define CLASS_2_94088BD52F494C82_METHOD_2_0CDF2184C1846F41_OFFSET UNITYSDK_OFFSET(0xBA74230)
#define CLASS_2_94088BD52F494C82_METHOD_2_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0xBA73F60)
#define CLASS_2_94088BD52F494C82_METHOD_2_1DFECA8DFE36D287_OFFSET UNITYSDK_OFFSET(0xBA73530)
#define CLASS_2_94088BD52F494C82_METHOD_2_2A721CD8A312A4BD_OFFSET UNITYSDK_OFFSET(0xBA73340)
#define CLASS_2_94088BD52F494C82_METHOD_2_455F9AED598D176E_OFFSET UNITYSDK_OFFSET(0xBA72860)
#define CLASS_2_94088BD52F494C82_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xBA71B10)
#define CLASS_2_94088BD52F494C82_METHOD_2_5301FF3DE3F6D502_OFFSET UNITYSDK_OFFSET(0xBA73C80)
#define CLASS_2_94088BD52F494C82_METHOD_2_91BAFAEF03E9552A_OFFSET UNITYSDK_OFFSET(0xBA73660)
#define CLASS_2_94088BD52F494C82_METHOD_2_9A02E516F70AF0A1_OFFSET UNITYSDK_OFFSET(0xBA74BA0)
#define CLASS_2_94088BD52F494C82_METHOD_2_9ADFAA56C4A0B186_OFFSET UNITYSDK_OFFSET(0xBA731C0)
#define CLASS_2_94088BD52F494C82_METHOD_2_ABCB0D056BBEA65C_OFFSET UNITYSDK_OFFSET(0xBA729C0)
#define CLASS_2_94088BD52F494C82_METHOD_2_DEC691A09D0D18F9_OFFSET UNITYSDK_OFFSET(0xBA73290)
#define CLASS_2_94088BD52F494C82_METHOD_2_F5A5858ACB836225_OFFSET UNITYSDK_OFFSET(0xBA740B0)
#define CLASS_2_94088BD52F494C82_TICK_OFFSET UNITYSDK_OFFSET(0xBA72240)
#define CLASS_2_94088BD52F494C82__CTOR_OFFSET UNITYSDK_OFFSET(0xBA74BE0)

inline static constexpr unsigned int Class_2_94088BD52F494C82_TypeDefinitionIndex = 57600;

class Class_2_94088BD52F494C82 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_2_523C55AEA55804D8* CNHABEECCPK; // 0x18
	::System::Collections::Generic::List_1<::Class_1_04E8A8CB715F95A7*>* DHPAOHJEONB; // 0x20
	::RPG::Client::MockAnimator* CBPLANOPAPP; // 0x28
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_455F9AED598D176E(::System::String* a1, ::System::Single a2, ::Class_2_4CDC13220E4CDFEE* a3, ::Il2CppArray<::Class_2_049053A9DCD26B56*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::Class_2_4CDC13220E4CDFEE*, ::Il2CppArray<::Class_2_049053A9DCD26B56*>*))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_455F9AED598D176E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9ADFAA56C4A0B186(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_9ADFAA56C4A0B186_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1DFECA8DFE36D287(::System::String* a1, ::System::UInt32 a2, ::RPG::GameCore::PlayNPCBubbleTalk* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_1DFECA8DFE36D287_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_91BAFAEF03E9552A(::System::String* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_91BAFAEF03E9552A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5301FF3DE3F6D502(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_5301FF3DE3F6D502_OFFSET))(this, a1);
	}

	::Class_1_04E8A8CB715F95A7* Method_2_ABCB0D056BBEA65C(::System::String* a1, ::System::Single a2)
	{
		return ((::Class_1_04E8A8CB715F95A7*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_ABCB0D056BBEA65C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DEC691A09D0D18F9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_DEC691A09D0D18F9_OFFSET))(this, a1);
	}

	::Class_1_04E8A8CB715F95A7* Method_2_2A721CD8A312A4BD(::System::String* a1)
	{
		return ((::Class_1_04E8A8CB715F95A7*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_2A721CD8A312A4BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_0D3455A2B8A3E6D4_OFFSET))(this);
	}

	::System::Void Method_2_F5A5858ACB836225()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_F5A5858ACB836225_OFFSET))(this);
	}

	::System::Void Method_2_0CDF2184C1846F41(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_0CDF2184C1846F41_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MockAnimator* Method_2_9A02E516F70AF0A1()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94088BD52F494C82_METHOD_2_9A02E516F70AF0A1_OFFSET))(this);
	}
};
