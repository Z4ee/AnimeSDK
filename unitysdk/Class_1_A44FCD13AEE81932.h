#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A44FCD13AEE81932_State.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_6.h"
#include "unitysdk/Enum_3_DA8D574B6924C435.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

class Class_1_C9DFE5EE7107C629_4;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }

#define CLASS_1_A44FCD13AEE81932_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16270AA0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x16271160)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_0FB8DBF67B8CF6CD_OFFSET UNITYSDK_OFFSET(0x16271960)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_1EF7319B28933526_OFFSET UNITYSDK_OFFSET(0x162700C0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_2FACAFA05A9695F0_OFFSET UNITYSDK_OFFSET(0x16272680)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16272CA0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_39D6A9B29A3E8660_OFFSET UNITYSDK_OFFSET(0x16272830)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_54367F38BEB43EF8_OFFSET UNITYSDK_OFFSET(0x16272AE0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_55120C61211BDD4A_OFFSET UNITYSDK_OFFSET(0x162732A0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_804AF0326B9A2B24_OFFSET UNITYSDK_OFFSET(0x16271650)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_8288054986449228_OFFSET UNITYSDK_OFFSET(0x162713C0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_860BD1B9ACD8D691_OFFSET UNITYSDK_OFFSET(0x1626F710)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_87BD4DF5EA15A3A8_OFFSET UNITYSDK_OFFSET(0x16270D00)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16272A50)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_9F6E665DAB915B1F_OFFSET UNITYSDK_OFFSET(0x1626F6A0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_B06DB91A56D45930_OFFSET UNITYSDK_OFFSET(0x16272C20)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_BA0DC2F7F154B425_OFFSET UNITYSDK_OFFSET(0x16273340)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x162729A0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_D5E468D315036703_OFFSET UNITYSDK_OFFSET(0x1626FFF0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_D901EBCE84FF5911_OFFSET UNITYSDK_OFFSET(0x16272590)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_DB05F428E5E9067E_OFFSET UNITYSDK_OFFSET(0x16272A00)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x16270110)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x16271800)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16273330)
#define CLASS_1_A44FCD13AEE81932__CTOR_OFFSET UNITYSDK_OFFSET(0x1626F510)

inline static constexpr unsigned int Class_1_A44FCD13AEE81932_TypeDefinitionIndex = 58261;

class Class_1_A44FCD13AEE81932 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A44FCD13AEE81932_TypeDefinitionIndex)->GetStaticField(0x14BE0);
	}
	// static const ::System::Single Field_1_1; // 0x0
	::System::Action_1<::RPG::GameCore::BattleResultState>* Field_1_2; // 0x10
	::RPG::Client::BattleGamePhase* Field_1_3; // 0x18
	::RPG::Client::Promises::Promise* Field_1_4; // 0x20
	::Il2CppArray<::System::Byte>* Field_1_5; // 0x28
	::Enum_3_71AA90D596A09AC8_6 Field_1_6; // 0x30
	::System::Boolean Field_1_7; // 0x34
	::System::Boolean Field_1_8; // 0x35
	::Class_1_A44FCD13AEE81932_State Field_1_9; // 0x38
	::System::Boolean Field_1_10; // 0x3C
	::System::Boolean Field_1_11; // 0x3D
	::System::Boolean Field_1_12; // 0x3E
	::System::Boolean Field_1_13; // 0x3F
	::System::Boolean Field_1_14; // 0x40
	::System::Boolean Field_1_15; // 0x41
	::System::Boolean Field_1_16; // 0x42
	::System::Boolean Field_1_17; // 0x43
	::System::Single Field_1_18; // 0x44

	::System::Void _ctor(::RPG::Client::BattleGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F6E665DAB915B1F(::System::Action_1<::RPG::GameCore::BattleResultState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::BattleResultState>*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_9F6E665DAB915B1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_860BD1B9ACD8D691(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_860BD1B9ACD8D691_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_87BD4DF5EA15A3A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_87BD4DF5EA15A3A8_OFFSET))(this);
	}

	::System::Void Method_1_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_8288054986449228(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_8288054986449228_OFFSET))(this, a1, a2);
	}

	::Class_1_C9DFE5EE7107C629_4* Method_1_D5E468D315036703()
	{
		return ((::Class_1_C9DFE5EE7107C629_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_D5E468D315036703_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_804AF0326B9A2B24(::Enum_3_71AA90D596A09AC8_6 a1)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_6))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_804AF0326B9A2B24_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_1_0FB8DBF67B8CF6CD(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_0FB8DBF67B8CF6CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2FACAFA05A9695F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_2FACAFA05A9695F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D901EBCE84FF5911(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_D901EBCE84FF5911_OFFSET))(this, a1);
	}

	::System::Void Method_1_39D6A9B29A3E8660(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_39D6A9B29A3E8660_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DB05F428E5E9067E(::System::Net::HttpStatusCode a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_DB05F428E5E9067E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_54367F38BEB43EF8(::Enum_3_DA8D574B6924C435 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DA8D574B6924C435))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_54367F38BEB43EF8_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_B06DB91A56D45930(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_B06DB91A56D45930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_1EF7319B28933526(::Class_1_A44FCD13AEE81932_State a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A44FCD13AEE81932_State))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_1EF7319B28933526_OFFSET))(this, a1);
	}

	::System::Void Method_1_55120C61211BDD4A(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_55120C61211BDD4A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_BA0DC2F7F154B425()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_BA0DC2F7F154B425_OFFSET))(this);
	}
};
