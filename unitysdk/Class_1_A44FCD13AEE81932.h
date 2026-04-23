#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A44FCD13AEE81932_State.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_5.h"
#include "unitysdk/Enum_3_FE5DBB4B7DC1D249.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

class Class_1_C9DFE5EE7107C629_1;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }

#define CLASS_1_A44FCD13AEE81932_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9902880)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_1AF95EBB5CA38616_OFFSET UNITYSDK_OFFSET(0x9902F00)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_1EF7319B28933526_OFFSET UNITYSDK_OFFSET(0x9901E30)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_29C1F6159083AC58_OFFSET UNITYSDK_OFFSET(0x9903140)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_2FACAFA05A9695F0_OFFSET UNITYSDK_OFFSET(0x9904400)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9904A30)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_430C191107A01743_OFFSET UNITYSDK_OFFSET(0x99045B0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_49E78512AE5594BE_OFFSET UNITYSDK_OFFSET(0x99015A0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_54367F38BEB43EF8_OFFSET UNITYSDK_OFFSET(0x9904850)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_55120C61211BDD4A_OFFSET UNITYSDK_OFFSET(0x99051B0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_660D287DD2140444_OFFSET UNITYSDK_OFFSET(0x9903760)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_804AF0326B9A2B24_OFFSET UNITYSDK_OFFSET(0x9903440)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_87BD4DF5EA15A3A8_OFFSET UNITYSDK_OFFSET(0x9902A90)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x99047C0)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_9F6E665DAB915B1F_OFFSET UNITYSDK_OFFSET(0x9901530)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x9904710)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_CEFC3A3F447BEF77_OFFSET UNITYSDK_OFFSET(0x9904990)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_CFDB2DF757369D2B_OFFSET UNITYSDK_OFFSET(0x9905250)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_D5E468D315036703_OFFSET UNITYSDK_OFFSET(0x9903370)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_D901EBCE84FF5911_OFFSET UNITYSDK_OFFSET(0x9904310)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_DB05F428E5E9067E_OFFSET UNITYSDK_OFFSET(0x9904770)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x9901E80)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x9903600)
#define CLASS_1_A44FCD13AEE81932_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9905240)
#define CLASS_1_A44FCD13AEE81932__CTOR_OFFSET UNITYSDK_OFFSET(0x99013D0)

inline static constexpr unsigned int Class_1_A44FCD13AEE81932_TypeDefinitionIndex = 56252;

class Class_1_A44FCD13AEE81932 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A44FCD13AEE81932_TypeDefinitionIndex)->GetStaticField(0x13ED0);
	}
	// static const ::System::Single Field_1_6; // 0x0
	::RPG::Client::BattleGamePhase* Field_1_17; // 0x10
	::Il2CppArray<::System::Byte>* Field_1_13; // 0x18
	::System::Action_1<::RPG::GameCore::BattleResultState>* Field_1_7; // 0x20
	::RPG::Client::Promises::Promise* Field_1_10; // 0x28
	::System::Single Field_1_16; // 0x30
	::System::Boolean Field_1_5; // 0x34
	::System::Boolean Field_1_9; // 0x35
	::System::Boolean Field_1_8; // 0x36
	::System::Boolean Field_1_4; // 0x37
	::Class_1_A44FCD13AEE81932_State Field_1_15; // 0x38
	::System::Boolean Field_1_1; // 0x3C
	::System::Boolean Field_1_14; // 0x3D
	::Enum_3_71AA90D596A09AC8_5 Field_1_18; // 0x40
	::System::Boolean Field_1_3; // 0x44
	::System::Boolean Field_1_11; // 0x45
	::System::Boolean Field_1_2; // 0x46
	::System::Boolean Field_1_12; // 0x47

	::System::Void _ctor(::RPG::Client::BattleGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F6E665DAB915B1F(::System::Action_1<::RPG::GameCore::BattleResultState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::BattleResultState>*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_9F6E665DAB915B1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_49E78512AE5594BE(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_49E78512AE5594BE_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_87BD4DF5EA15A3A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_87BD4DF5EA15A3A8_OFFSET))(this);
	}

	::System::Void Method_1_1AF95EBB5CA38616(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_1AF95EBB5CA38616_OFFSET))(this, a1);
	}

	::System::Void Method_1_29C1F6159083AC58(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_29C1F6159083AC58_OFFSET))(this, a1, a2);
	}

	::Class_1_C9DFE5EE7107C629_1* Method_1_D5E468D315036703()
	{
		return ((::Class_1_C9DFE5EE7107C629_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_D5E468D315036703_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_804AF0326B9A2B24(::Enum_3_71AA90D596A09AC8_5 a1)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_5))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_804AF0326B9A2B24_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_1_660D287DD2140444(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_660D287DD2140444_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2FACAFA05A9695F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_2FACAFA05A9695F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D901EBCE84FF5911(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_D901EBCE84FF5911_OFFSET))(this, a1);
	}

	::System::Void Method_1_430C191107A01743(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_430C191107A01743_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_54367F38BEB43EF8(::Enum_3_FE5DBB4B7DC1D249 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_FE5DBB4B7DC1D249))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_54367F38BEB43EF8_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_CEFC3A3F447BEF77(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_CEFC3A3F447BEF77_OFFSET))(this, a1, a2);
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

	::System::String* Method_1_CFDB2DF757369D2B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932_METHOD_1_CFDB2DF757369D2B_OFFSET))(this);
	}
};
