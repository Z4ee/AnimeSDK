#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20D6AC2BE4149495;

#define CLASS_1_20D6AC2BE4149495___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A88B320)
#define CLASS_1_20D6AC2BE4149495___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A88B360)
#define CLASS_1_20D6AC2BE4149495___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A88B370)

inline static constexpr unsigned int Class_1_20D6AC2BE4149495___c_TypeDefinitionIndex = 28797;

class Class_1_20D6AC2BE4149495___c : public ::System::Object
{
public:
	static ::Class_1_20D6AC2BE4149495___c** StaticGet___9()
	{
		return (::Class_1_20D6AC2BE4149495___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20D6AC2BE4149495___c_TypeDefinitionIndex)->GetStaticField(0x56730);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495___C__CTOR_OFFSET))(this);
	}

	::Class_1_20D6AC2BE4149495* __cctor_b__28_0()
	{
		return ((::Class_1_20D6AC2BE4149495*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495___C___CCTOR_B__28_0_OFFSET))(this);
	}
};
