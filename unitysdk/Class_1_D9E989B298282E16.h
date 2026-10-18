#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
class Class_1_C717D0FC86FCB141;
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D9E989B298282E16_METHOD_1_2E9EFD1763526B05_OFFSET UNITYSDK_OFFSET(0x155D1A50)
#define CLASS_1_D9E989B298282E16_METHOD_1_5389068FEB5B4D81_OFFSET UNITYSDK_OFFSET(0x155D15E0)
#define CLASS_1_D9E989B298282E16_METHOD_1_73F42667112700CE_OFFSET UNITYSDK_OFFSET(0x155D1240)
#define CLASS_1_D9E989B298282E16_METHOD_1_8757EB28F658DE84_OFFSET UNITYSDK_OFFSET(0x155D1820)
#define CLASS_1_D9E989B298282E16_METHOD_1_D27A488A14446267_OFFSET UNITYSDK_OFFSET(0x155D1470)
#define CLASS_1_D9E989B298282E16_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x155D1150)
#define CLASS_1_D9E989B298282E16_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x155D11A0)
#define CLASS_1_D9E989B298282E16__CTOR_OFFSET UNITYSDK_OFFSET(0x155D1BC0)

inline static constexpr unsigned int Class_1_D9E989B298282E16_TypeDefinitionIndex = 57822;

class Class_1_D9E989B298282E16 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C717D0FC86FCB141*>* BIFMMBFPHIH; // 0x10
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E989B298282E16__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_D9E989B298282E16_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E989B298282E16_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_73F42667112700CE(::System::String* a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_D9E989B298282E16_METHOD_1_73F42667112700CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D27A488A14446267(::System::String* a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_D9E989B298282E16_METHOD_1_D27A488A14446267_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5389068FEB5B4D81(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9E989B298282E16_METHOD_1_5389068FEB5B4D81_OFFSET))(this, a1, a2);
	}

	::Class_1_C717D0FC86FCB141* Method_1_8757EB28F658DE84(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_C717D0FC86FCB141*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9E989B298282E16_METHOD_1_8757EB28F658DE84_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2E9EFD1763526B05(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D9E989B298282E16_METHOD_1_2E9EFD1763526B05_OFFSET))(this, a1);
	}
};
