#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"

class Class_2_A85D9AF772ADFA09_Class_1_8C2C52864F506F61;
class Class_2_A85D9AF772ADFA09_Class_1_CD29281E05E9EA13;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A85D9AF772ADFA09_METHOD_2_3D7F13C24E87417E_OFFSET UNITYSDK_OFFSET(0xB724B70)
#define CLASS_2_A85D9AF772ADFA09_METHOD_2_4970B8B015C68655_OFFSET UNITYSDK_OFFSET(0xB724040)
#define CLASS_2_A85D9AF772ADFA09_METHOD_2_6E77B13DC1617CE4_OFFSET UNITYSDK_OFFSET(0xB724850)
#define CLASS_2_A85D9AF772ADFA09_METHOD_2_E0D740F84E7EA2AB_OFFSET UNITYSDK_OFFSET(0xB724DA0)
#define CLASS_2_A85D9AF772ADFA09_ONINIT_OFFSET UNITYSDK_OFFSET(0xB723F00)
#define CLASS_2_A85D9AF772ADFA09_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xB723F40)
#define CLASS_2_A85D9AF772ADFA09__CTOR_OFFSET UNITYSDK_OFFSET(0xB724F40)

inline static constexpr unsigned int Class_2_A85D9AF772ADFA09_TypeDefinitionIndex = 73242;

class Class_2_A85D9AF772ADFA09 : public ::Class_1_5BBB2050B3F3F683
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HHAAOGJBFHD; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_A85D9AF772ADFA09_Class_1_8C2C52864F506F61*>* FCBNHELBMMM; // 0x28
	::System::Collections::Generic::List_1<::Class_2_A85D9AF772ADFA09_Class_1_CD29281E05E9EA13*>* JBJEHKEBCJI; // 0x30
	::System::Boolean IMLAADIJHMD; // 0x38
	::System::Boolean AINFEIKOOAA; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_6E77B13DC1617CE4(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Int32 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_METHOD_2_6E77B13DC1617CE4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_3D7F13C24E87417E(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_METHOD_2_3D7F13C24E87417E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4970B8B015C68655(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_METHOD_2_4970B8B015C68655_OFFSET))(this, a1);
	}

	::Class_2_A85D9AF772ADFA09_Class_1_8C2C52864F506F61* Method_2_E0D740F84E7EA2AB(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::Class_2_A85D9AF772ADFA09_Class_1_8C2C52864F506F61*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A85D9AF772ADFA09_METHOD_2_E0D740F84E7EA2AB_OFFSET))(this, a1, a2);
	}
};
