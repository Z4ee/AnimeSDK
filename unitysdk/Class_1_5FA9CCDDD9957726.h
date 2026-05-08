#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5FA9CCDDD9957726_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1015C740)
#define CLASS_1_5FA9CCDDD9957726_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1015C350)
#define CLASS_1_5FA9CCDDD9957726_METHOD_1_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1015C7A0)
#define CLASS_1_5FA9CCDDD9957726_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x1015C3D0)
#define CLASS_1_5FA9CCDDD9957726_METHOD_1_9C005D4D9AEA45E2_OFFSET UNITYSDK_OFFSET(0x1015CB90)
#define CLASS_1_5FA9CCDDD9957726_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1015CA80)
#define CLASS_1_5FA9CCDDD9957726__CTOR_OFFSET UNITYSDK_OFFSET(0x1015CB80)

inline static constexpr unsigned int Class_1_5FA9CCDDD9957726_TypeDefinitionIndex = 62123;

class Class_1_5FA9CCDDD9957726 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FA9CCDDD9957726__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_5FA9CCDDD9957726_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5FA9CCDDD9957726_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::Class_1_5FA9CCDDD9957726* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_5FA9CCDDD9957726*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FA9CCDDD9957726_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_5FA9CCDDD9957726_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9C005D4D9AEA45E2(::Class_1_F91ACF27C085FD90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + CLASS_1_5FA9CCDDD9957726_METHOD_1_9C005D4D9AEA45E2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5FA9CCDDD9957726_METHOD_1_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}
};
