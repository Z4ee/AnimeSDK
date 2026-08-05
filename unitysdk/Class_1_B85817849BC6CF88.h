#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B85817849BC6CF88_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x150B8250)
#define CLASS_1_B85817849BC6CF88_FROMFLX_OFFSET UNITYSDK_OFFSET(0x150B7CE0)
#define CLASS_1_B85817849BC6CF88_METHOD_1_6339C5B3AC50C45C_OFFSET UNITYSDK_OFFSET(0x150B82B0)
#define CLASS_1_B85817849BC6CF88_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x150B7D60)
#define CLASS_1_B85817849BC6CF88_METHOD_1_C04404CE1C0CAF37_OFFSET UNITYSDK_OFFSET(0x150B87E0)
#define CLASS_1_B85817849BC6CF88_METHOD_1_C84DD2DC304B1600_OFFSET UNITYSDK_OFFSET(0x150B8990)
#define CLASS_1_B85817849BC6CF88_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x150B86D0)
#define CLASS_1_B85817849BC6CF88__CTOR_OFFSET UNITYSDK_OFFSET(0x150B87D0)

inline static constexpr unsigned int Class_1_B85817849BC6CF88_TypeDefinitionIndex = 55385;

class Class_1_B85817849BC6CF88 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B85817849BC6CF88__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B85817849BC6CF88_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B85817849BC6CF88_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::Class_1_B85817849BC6CF88* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_B85817849BC6CF88*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B85817849BC6CF88_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Boolean Method_1_C04404CE1C0CAF37(::Class_1_BE29B49AC03370B6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + CLASS_1_B85817849BC6CF88_METHOD_1_C04404CE1C0CAF37_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B85817849BC6CF88_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
	}

	::Class_1_B85817849BC6CF88* Method_1_C84DD2DC304B1600(::Class_1_BE29B49AC03370B6* a1)
	{
		return ((::Class_1_B85817849BC6CF88*(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + CLASS_1_B85817849BC6CF88_METHOD_1_C84DD2DC304B1600_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6339C5B3AC50C45C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B85817849BC6CF88_METHOD_1_6339C5B3AC50C45C_OFFSET))(this, a1, a2);
	}
};
