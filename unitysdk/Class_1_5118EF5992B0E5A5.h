#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_72B8F0CA34E4DCF6;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5118EF5992B0E5A5_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x11E285B0)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_2D6DA9D252F64119_OFFSET UNITYSDK_OFFSET(0x11E27DE0)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11E28500)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_412CA67524B8F078_OFFSET UNITYSDK_OFFSET(0x11E28450)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_5532C23455CD0507_OFFSET UNITYSDK_OFFSET(0x11E28660)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x11E28340)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_C02357FE432192E0_OFFSET UNITYSDK_OFFSET(0x11E28800)
#define CLASS_1_5118EF5992B0E5A5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11E28330)
#define CLASS_1_5118EF5992B0E5A5__CTOR_OFFSET UNITYSDK_OFFSET(0x11E28920)

inline static constexpr unsigned int Class_1_5118EF5992B0E5A5_TypeDefinitionIndex = 63820;

class Class_1_5118EF5992B0E5A5 : public ::System::Object
{
public:
	::Class_1_72B8F0CA34E4DCF6* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_1_3; // 0x18
	::System::Single Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x24
	::System::Boolean Field_1_1; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2D6DA9D252F64119(::RPG::GameCore::LevelCrowdInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCrowdInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_2D6DA9D252F64119_OFFSET))(this, a1);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_1_412CA67524B8F078()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_412CA67524B8F078_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_5532C23455CD0507(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_5532C23455CD0507_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C02357FE432192E0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_C02357FE432192E0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5118EF5992B0E5A5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
