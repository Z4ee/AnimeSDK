#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_2AD981AB6ACE5E06_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1597DE00)
#define CLASS_1_2AD981AB6ACE5E06_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1597DBE0)
#define CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x1597DC60)
#define CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0x1597E170)
#define CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0x1597E0A0)
#define CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x1597DAC0)
#define CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1597DBD0)
#define CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1597DAD0)
#define CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_F4FDF6DDB7D0ADBB_OFFSET UNITYSDK_OFFSET(0x1597DE60)
#define CLASS_1_2AD981AB6ACE5E06_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1597E090)

inline static constexpr unsigned int Class_1_2AD981AB6ACE5E06_1_TypeDefinitionIndex = 45703;

class Class_1_2AD981AB6ACE5E06_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AD981AB6ACE5E06_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06_1* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_2AD981AB6ACE5E06_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2AD981AB6ACE5E06_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F4FDF6DDB7D0ADBB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_F4FDF6DDB7D0ADBB_OFFSET))(this, a1, a2);
	}

	static ::Class_1_2AD981AB6ACE5E06_1* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_2AD981AB6ACE5E06_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_1_2AD981AB6ACE5E06_1* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_2AD981AB6ACE5E06_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2AD981AB6ACE5E06_1_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}
};
