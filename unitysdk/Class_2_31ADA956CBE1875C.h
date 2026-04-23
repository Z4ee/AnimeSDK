#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_04E8A8CB715F95A7;
class Class_2_049053A9DCD26B56;
class Class_2_06FF6460B8BB44DE;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_31ADA956CBE1875C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1249FCB0)
#define CLASS_2_31ADA956CBE1875C_METHOD_2_137E7A673D11FD2F_OFFSET UNITYSDK_OFFSET(0x124A0160)
#define CLASS_2_31ADA956CBE1875C_METHOD_2_1DFECA8DFE36D287_OFFSET UNITYSDK_OFFSET(0x124A0520)
#define CLASS_2_31ADA956CBE1875C_METHOD_2_681E8440486B3CCA_OFFSET UNITYSDK_OFFSET(0x124A05E0)
#define CLASS_2_31ADA956CBE1875C_METHOD_2_7673C070E3E79EF2_OFFSET UNITYSDK_OFFSET(0x124A0070)
#define CLASS_2_31ADA956CBE1875C_METHOD_2_954E5666973A1590_OFFSET UNITYSDK_OFFSET(0x124A03B0)
#define CLASS_2_31ADA956CBE1875C_METHOD_2_9A02E516F70AF0A1_OFFSET UNITYSDK_OFFSET(0x124A09E0)
#define CLASS_2_31ADA956CBE1875C_METHOD_2_9ADFAA56C4A0B186_OFFSET UNITYSDK_OFFSET(0x124A0230)
#define CLASS_2_31ADA956CBE1875C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x124A09A0)
#define CLASS_2_31ADA956CBE1875C_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1249FB90)
#define CLASS_2_31ADA956CBE1875C_METHOD_2_F08676EA64B106D4_OFFSET UNITYSDK_OFFSET(0x124A0300)
#define CLASS_2_31ADA956CBE1875C_TICK_OFFSET UNITYSDK_OFFSET(0x1249FEB0)
#define CLASS_2_31ADA956CBE1875C__CTOR_OFFSET UNITYSDK_OFFSET(0x124A0A20)
#define CLASS_2_31ADA956CBE1875C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x124A0A70)

inline static constexpr unsigned int Class_2_31ADA956CBE1875C_TypeDefinitionIndex = 52947;

class Class_2_31ADA956CBE1875C : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_0; // 0x18
	::RPG::Client::MockAnimator* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_04E8A8CB715F95A7*>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7673C070E3E79EF2(::System::String* a1, ::System::Single a2, ::Class_2_06FF6460B8BB44DE* a3, ::Il2CppArray<::Class_2_049053A9DCD26B56*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::Class_2_06FF6460B8BB44DE*, ::Il2CppArray<::Class_2_049053A9DCD26B56*>*))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_METHOD_2_7673C070E3E79EF2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9ADFAA56C4A0B186(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_METHOD_2_9ADFAA56C4A0B186_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1DFECA8DFE36D287(::System::String* a1, ::System::UInt32 a2, ::RPG::GameCore::PlayNPCBubbleTalk* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_METHOD_2_1DFECA8DFE36D287_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_681E8440486B3CCA(::System::String* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_METHOD_2_681E8440486B3CCA_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_04E8A8CB715F95A7* Method_2_137E7A673D11FD2F(::System::String* a1, ::System::Single a2)
	{
		return ((::Class_1_04E8A8CB715F95A7*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_METHOD_2_137E7A673D11FD2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F08676EA64B106D4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_METHOD_2_F08676EA64B106D4_OFFSET))(this, a1);
	}

	::Class_1_04E8A8CB715F95A7* Method_2_954E5666973A1590(::System::String* a1)
	{
		return ((::Class_1_04E8A8CB715F95A7*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_METHOD_2_954E5666973A1590_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* Method_2_9A02E516F70AF0A1()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C_METHOD_2_9A02E516F70AF0A1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31ADA956CBE1875C___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
