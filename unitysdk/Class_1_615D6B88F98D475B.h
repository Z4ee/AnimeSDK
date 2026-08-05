#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_615D6B88F98D475B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x117CECA0)
#define CLASS_1_615D6B88F98D475B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x117CE7B0)
#define CLASS_1_615D6B88F98D475B_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x117CE830)
#define CLASS_1_615D6B88F98D475B_METHOD_1_D32A5475BAED534D_OFFSET UNITYSDK_OFFSET(0x117CED00)
#define CLASS_1_615D6B88F98D475B__CTOR_OFFSET UNITYSDK_OFFSET(0x117CF0F0)

inline static constexpr unsigned int Class_1_615D6B88F98D475B_TypeDefinitionIndex = 80261;

class Class_1_615D6B88F98D475B : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_615D6B88F98D475B__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_615D6B88F98D475B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_615D6B88F98D475B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D32A5475BAED534D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_615D6B88F98D475B_METHOD_1_D32A5475BAED534D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_615D6B88F98D475B_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
	}
};
