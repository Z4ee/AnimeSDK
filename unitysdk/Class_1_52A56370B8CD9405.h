#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_510;
class Class_1_93271BB4736EAF8B;
class Class_1_DB457F2E821DD51D;
class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_52A56370B8CD9405_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAD9DE0)
#define CLASS_1_52A56370B8CD9405_METHOD_1_09ED1515F911D68A_OFFSET UNITYSDK_OFFSET(0xAAD9EC0)
#define CLASS_1_52A56370B8CD9405_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xAAD9E30)
#define CLASS_1_52A56370B8CD9405_METHOD_1_F59D0BE4AFFA11D1_OFFSET UNITYSDK_OFFSET(0xAADA110)
#define CLASS_1_52A56370B8CD9405_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xAAD9E80)
#define CLASS_1_52A56370B8CD9405__CTOR_OFFSET UNITYSDK_OFFSET(0xAAD9DD0)

inline static constexpr unsigned int Class_1_52A56370B8CD9405_TypeDefinitionIndex = 52240;

class Class_1_52A56370B8CD9405 : public ::System::Object
{
public:
	::Class_1_93271BB4736EAF8B* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52A56370B8CD9405__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52A56370B8CD9405_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_93271BB4736EAF8B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93271BB4736EAF8B*))((::PBYTE)hIl2Cpp + CLASS_1_52A56370B8CD9405_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_1_93271BB4736EAF8B* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_93271BB4736EAF8B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52A56370B8CD9405_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_09ED1515F911D68A(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnimStateLogicType, ::Class_0_16E4307DCC419505_510*>* a1, ::RPG::GameCore::GameEntity* a2, ::Class_2_1DBE0E1023AFDBC5* a3, ::Class_1_DB457F2E821DD51D* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnimStateLogicType, ::Class_0_16E4307DCC419505_510*>*, ::RPG::GameCore::GameEntity*, ::Class_2_1DBE0E1023AFDBC5*, ::Class_1_DB457F2E821DD51D*))((::PBYTE)hIl2Cpp + CLASS_1_52A56370B8CD9405_METHOD_1_09ED1515F911D68A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F59D0BE4AFFA11D1(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnimStateLogicType, ::Class_0_16E4307DCC419505_510*>* a1, ::Class_0_16E4307DCC419505_510* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnimStateLogicType, ::Class_0_16E4307DCC419505_510*>*, ::Class_0_16E4307DCC419505_510*))((::PBYTE)hIl2Cpp + CLASS_1_52A56370B8CD9405_METHOD_1_F59D0BE4AFFA11D1_OFFSET))(this, a1, a2);
	}
};
