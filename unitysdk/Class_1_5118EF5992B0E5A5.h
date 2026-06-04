#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CF8B0DC37DFDE560;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5118EF5992B0E5A5_METHOD_1_0A604A5B360F30A7_OFFSET UNITYSDK_OFFSET(0x13AC0960)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_2D6DA9D252F64119_OFFSET UNITYSDK_OFFSET(0x13ABFF20)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13AC0710)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_5532C23455CD0507_OFFSET UNITYSDK_OFFSET(0x13AC07C0)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_6E9F480096F76A21_OFFSET UNITYSDK_OFFSET(0x13AC0590)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13AC0660)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x13AC0470)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13AC0460)
#define CLASS_1_5118EF5992B0E5A5__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC0A80)

inline static constexpr unsigned int Class_1_5118EF5992B0E5A5_TypeDefinitionIndex = 64741;

class Class_1_5118EF5992B0E5A5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_1_0; // 0x10
	::Class_1_CF8B0DC37DFDE560* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::System::Single Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2D6DA9D252F64119(::RPG::GameCore::LevelCrowdInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCrowdInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_2D6DA9D252F64119_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_6E9F480096F76A21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_6E9F480096F76A21_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_5532C23455CD0507(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_5532C23455CD0507_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0A604A5B360F30A7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_0A604A5B360F30A7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
