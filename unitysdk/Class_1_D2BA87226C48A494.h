#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D2BA87226C48A494_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x128B9E20)
#define CLASS_1_D2BA87226C48A494_FROMFLX_OFFSET UNITYSDK_OFFSET(0x128B9890)
#define CLASS_1_D2BA87226C48A494_METHOD_1_01A38C1C04BF8076_OFFSET UNITYSDK_OFFSET(0x128B9E80)
#define CLASS_1_D2BA87226C48A494_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x128B9910)
#define CLASS_1_D2BA87226C48A494_METHOD_1_F62E96DF0CE4717C_OFFSET UNITYSDK_OFFSET(0x128BA1D0)
#define CLASS_1_D2BA87226C48A494__CTOR_OFFSET UNITYSDK_OFFSET(0x128BA1C0)

inline static constexpr unsigned int Class_1_D2BA87226C48A494_TypeDefinitionIndex = 58693;

class Class_1_D2BA87226C48A494 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDecorBase*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2BA87226C48A494__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D2BA87226C48A494_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D2BA87226C48A494_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_01A38C1C04BF8076(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D2BA87226C48A494_METHOD_1_01A38C1C04BF8076_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F62E96DF0CE4717C(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + CLASS_1_D2BA87226C48A494_METHOD_1_F62E96DF0CE4717C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_D2BA87226C48A494_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
