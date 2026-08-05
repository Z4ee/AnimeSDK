#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2384297FE974F4DC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_27CCD45BA8768483_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F7A45DFC14377B3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11546BE0)
#define CLASS_1_1F7A45DFC14377B3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x115460A0)
#define CLASS_1_1F7A45DFC14377B3_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x11546120)
#define CLASS_1_1F7A45DFC14377B3_METHOD_1_9D3F039E4985BDFB_OFFSET UNITYSDK_OFFSET(0x11546C40)
#define CLASS_1_1F7A45DFC14377B3__CTOR_OFFSET UNITYSDK_OFFSET(0x11547120)

inline static constexpr unsigned int Class_1_1F7A45DFC14377B3_TypeDefinitionIndex = 89647;

class Class_1_1F7A45DFC14377B3 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_27CCD45BA8768483_4*>* Field_1_4; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::UnityEngine::Vector3 Field_1_5; // 0x24
	::System::Single Field_1_6; // 0x30
	::System::Int32 Field_1_7; // 0x34
	::Enum_3_2384297FE974F4DC Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F7A45DFC14377B3__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_1F7A45DFC14377B3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F7A45DFC14377B3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9D3F039E4985BDFB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F7A45DFC14377B3_METHOD_1_9D3F039E4985BDFB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_1F7A45DFC14377B3_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
	}
};
