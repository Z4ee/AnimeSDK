#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_9EAA18C22BA51AC3_1;
class Class_1_C0F1AE2B19C0044B_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9EAA18C22BA51AC3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x181092C0)
#define CLASS_1_9EAA18C22BA51AC3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18108C20)
#define CLASS_1_9EAA18C22BA51AC3_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x18108CA0)
#define CLASS_1_9EAA18C22BA51AC3_METHOD_1_DF5526BA6D1A4902_OFFSET UNITYSDK_OFFSET(0x18109320)
#define CLASS_1_9EAA18C22BA51AC3__CTOR_OFFSET UNITYSDK_OFFSET(0x18109610)

inline static constexpr unsigned int Class_1_9EAA18C22BA51AC3_TypeDefinitionIndex = 84528;

class Class_1_9EAA18C22BA51AC3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C0F1AE2B19C0044B_2*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_9EAA18C22BA51AC3_1*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_C0F1AE2B19C0044B_2*>* Field_1_0; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAA18C22BA51AC3__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_9EAA18C22BA51AC3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9EAA18C22BA51AC3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF5526BA6D1A4902(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9EAA18C22BA51AC3_METHOD_1_DF5526BA6D1A4902_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_9EAA18C22BA51AC3_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}
};
