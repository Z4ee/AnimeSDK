#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8A50BFB20D9D2482_2;
class Class_1_8C2FCDC1F548D401;
class Class_1_C636F1BC41FFC2F2;
class Class_1_D2BA87226C48A494;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B8726C3723B428F0_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFB82E0)
#define CLASS_1_B8726C3723B428F0_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFB7000)
#define CLASS_1_B8726C3723B428F0_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0xFFB7080)
#define CLASS_1_B8726C3723B428F0_METHOD_1_781CAAF83F096F5E_OFFSET UNITYSDK_OFFSET(0xFFB8C80)
#define CLASS_1_B8726C3723B428F0_METHOD_1_A65E0FAAEAC96E1D_OFFSET UNITYSDK_OFFSET(0xFFB8340)
#define CLASS_1_B8726C3723B428F0_METHOD_1_F62E96DF0CE4717C_OFFSET UNITYSDK_OFFSET(0xFFB8B20)
#define CLASS_1_B8726C3723B428F0__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB8B10)

inline static constexpr unsigned int Class_1_B8726C3723B428F0_TypeDefinitionIndex = 84255;

class Class_1_B8726C3723B428F0 : public ::System::Object
{
public:
	::Class_1_8A50BFB20D9D2482_2* Field_1_4; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDecorBase*>* Field_1_5; // 0x20
	::System::String* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::Class_1_D2BA87226C48A494*>* Field_1_11; // 0x30
	::System::Collections::Generic::List_1<::Class_1_8C2FCDC1F548D401*>* Field_1_8; // 0x38
	::System::String* Field_1_0; // 0x40
	::System::Collections::Generic::List_1<::Class_1_C636F1BC41FFC2F2*>* Field_1_9; // 0x48
	::System::Int32 Field_1_10; // 0x50
	::System::Int32 Field_1_7; // 0x54
	::System::Int32 Field_1_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8726C3723B428F0__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B8726C3723B428F0_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8726C3723B428F0_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F62E96DF0CE4717C(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + CLASS_1_B8726C3723B428F0_METHOD_1_F62E96DF0CE4717C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A65E0FAAEAC96E1D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B8726C3723B428F0_METHOD_1_A65E0FAAEAC96E1D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_781CAAF83F096F5E(::System::Int32 a1, ::Class_1_D2BA87226C48A494*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_D2BA87226C48A494*&))((::PBYTE)hIl2Cpp + CLASS_1_B8726C3723B428F0_METHOD_1_781CAAF83F096F5E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B8726C3723B428F0_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
