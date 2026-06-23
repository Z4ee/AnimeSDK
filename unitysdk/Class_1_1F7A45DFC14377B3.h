#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2384297FE974F4DC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_27CCD45BA8768483_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F7A45DFC14377B3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13BCAE50)
#define CLASS_1_1F7A45DFC14377B3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13BCA2D0)
#define CLASS_1_1F7A45DFC14377B3_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x13BCA350)
#define CLASS_1_1F7A45DFC14377B3_METHOD_1_9D3F039E4985BDFB_OFFSET UNITYSDK_OFFSET(0x13BCAEB0)
#define CLASS_1_1F7A45DFC14377B3__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCB390)

inline static constexpr unsigned int Class_1_1F7A45DFC14377B3_TypeDefinitionIndex = 68051;

class Class_1_1F7A45DFC14377B3 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_27CCD45BA8768483_2*>* Field_1_6; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::Enum_3_2384297FE974F4DC Field_1_1; // 0x24
	::UnityEngine::Vector3 Field_1_5; // 0x28
	::System::Single Field_1_4; // 0x34
	::System::Int32 Field_1_2; // 0x38

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

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_1F7A45DFC14377B3_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
