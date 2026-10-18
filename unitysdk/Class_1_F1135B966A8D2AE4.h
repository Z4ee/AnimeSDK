#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F1135B966A8D2AE4_MoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MoveStopMode.h"
#include "unitysdk/Struct_2_1ADED1EDA7578A33.h"
#include "unitysdk/System/Object.h"

class Class_2_1DBE0E1023AFDBC5;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline::BattlePerform { class BPCharacterMoveData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveWalkData; }

#define CLASS_1_F1135B966A8D2AE4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1577F9E0)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_1AD51778485AD495_OFFSET UNITYSDK_OFFSET(0x1577CED0)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1577F2E0)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x1577F330)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1577F290)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x1577F950)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_3B7145E79424FB75_1_OFFSET UNITYSDK_OFFSET(0x1577CF80)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x1577FA80)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x1577F5F0)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x1577F900)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_554440C53AC1D015_OFFSET UNITYSDK_OFFSET(0x1577F380)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_695C657182A62E02_OFFSET UNITYSDK_OFFSET(0x1577CFF0)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x1577FB00)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_859BF88232D6B23D_OFFSET UNITYSDK_OFFSET(0x1577E400)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_867F85CA133E06EB_OFFSET UNITYSDK_OFFSET(0x1577D9D0)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_882C531725C73136_OFFSET UNITYSDK_OFFSET(0x1577FD50)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_9D3B43E6609D6005_OFFSET UNITYSDK_OFFSET(0x1577EB40)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_B3290309A4EF9D8C_OFFSET UNITYSDK_OFFSET(0x1577FB80)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_B7F539AF6FE83309_OFFSET UNITYSDK_OFFSET(0x1577DAF0)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_B9EBCC62ECEE8410_OFFSET UNITYSDK_OFFSET(0x1577FF20)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_BDE82258624D36B3_OFFSET UNITYSDK_OFFSET(0x1577E830)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x1577EFC0)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_DCA33DBCC8F2634D_OFFSET UNITYSDK_OFFSET(0x1577DCE0)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_E5E898C04FF2533D_OFFSET UNITYSDK_OFFSET(0x1577DA30)
#define CLASS_1_F1135B966A8D2AE4_METHOD_1_FC4AC099721D8B07_OFFSET UNITYSDK_OFFSET(0x1577DB30)
#define CLASS_1_F1135B966A8D2AE4__CCTOR_OFFSET UNITYSDK_OFFSET(0x15780260)
#define CLASS_1_F1135B966A8D2AE4__CTOR_OFFSET UNITYSDK_OFFSET(0x15780220)

inline static constexpr unsigned int Class_1_F1135B966A8D2AE4_TypeDefinitionIndex = 53607;

class Class_1_F1135B966A8D2AE4 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_GOAHOLGIOPD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1135B966A8D2AE4_TypeDefinitionIndex)->GetStaticField(0x15030);
	}
	static ::System::Int32* StaticGet_DAHPLPCOMBP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1135B966A8D2AE4_TypeDefinitionIndex)->GetStaticField(0x15034);
	}
	static ::System::Int32* StaticGet_JHOAJGLCFID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1135B966A8D2AE4_TypeDefinitionIndex)->GetStaticField(0x15038);
	}
	// static const ::System::Single OFMGDJMBFCB; // 0x0
	// static const ::System::Single BHINAMLFIGA; // 0x0
	// static const ::System::Single PNDPAGLOEBO; // 0x0
	// static const ::System::Single KIFPMCBEMNI; // 0x0
	// static const ::System::Single PHKICEGJLHO; // 0x0
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
	::RPGTools::Timeline::Story::BaseStoryMoveWalkData* IKJBJPKKELL; // 0x18
	::RPG::MVector3 KPIIOKCHPCG; // 0x20
	::System::Single DFBNOOOAJCM; // 0x2C
	::System::Single NLLLNLJBHKB; // 0x30
	::RPG::MVector3 FCAOOKFEOHC; // 0x34
	::System::Boolean MPEBFOIELOO; // 0x40
	::System::Single HKCKFEMAHNN; // 0x44
	::System::Single EIEPAMAPHAD; // 0x48
	::Class_1_F1135B966A8D2AE4_MoveState CKMDHLPCLFH; // 0x4C
	::System::Single BEEHHBEGPBG; // 0x50
	::RPG::MVector3 OIMMGKNHKOA; // 0x54
	::System::Int32 MPKKKHHCGNM; // 0x60
	::System::Single JNCOFOCKPBE; // 0x64
	::System::Single NCENNMCAPJH; // 0x68
	::System::Single KPJEKDLOMON; // 0x6C
	::System::Single IJKFPHAKDEA; // 0x70
	::System::Single BNBPFIGGKGL; // 0x74
	::System::Single LBCLDAAOIHP; // 0x78
	::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode JCDOEIPACPP; // 0x7C
	::System::Single HOHJNNNECDJ; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1AD51778485AD495(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_1AD51778485AD495_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_695C657182A62E02(::RPGTools::Timeline::BattlePerform::BPCharacterMoveData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterMoveData*))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_695C657182A62E02_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_1_BDE82258624D36B3(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_BDE82258624D36B3_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_554440C53AC1D015(::RPG::MVector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_554440C53AC1D015_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_3B7145E79424FB75_1_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Boolean Method_1_DCA33DBCC8F2634D(::RPGTools::Timeline::BattlePerform::BPCharacterMoveData* a1, ::RPGTools::Timeline::Story::BaseStoryMoveWalkData*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterMoveData*, ::RPGTools::Timeline::Story::BaseStoryMoveWalkData*&))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_DCA33DBCC8F2634D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D3B43E6609D6005(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_9D3B43E6609D6005_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_882C531725C73136(::Struct_2_1ADED1EDA7578A33 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_1ADED1EDA7578A33, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_882C531725C73136_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_B3290309A4EF9D8C(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_B3290309A4EF9D8C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B9EBCC62ECEE8410(::Class_2_1DBE0E1023AFDBC5* a1, ::RPG::Client::MockAnimator* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1DBE0E1023AFDBC5*, ::RPG::Client::MockAnimator*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_B9EBCC62ECEE8410_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_859BF88232D6B23D(::RPG::Client::MockAnimator* a1, ::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MockAnimator*, ::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_859BF88232D6B23D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E5E898C04FF2533D(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_E5E898C04FF2533D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B7F539AF6FE83309(::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode a1)
	{
		return ((::System::Boolean(*)(::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_B7F539AF6FE83309_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FC4AC099721D8B07(::RPG::MVector3 a1)
	{
		return ((::System::Boolean(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_FC4AC099721D8B07_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_867F85CA133E06EB(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1135B966A8D2AE4_METHOD_1_867F85CA133E06EB_OFFSET))(a1);
	}
};
