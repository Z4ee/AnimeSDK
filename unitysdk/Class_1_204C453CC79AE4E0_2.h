#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_201B1BB977AC07F5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_204C453CC79AE4E0_2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x130FE1A0)
#define CLASS_1_204C453CC79AE4E0_2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x130FDD80)
#define CLASS_1_204C453CC79AE4E0_2_METHOD_1_020D79381203C043_OFFSET UNITYSDK_OFFSET(0x130FE200)
#define CLASS_1_204C453CC79AE4E0_2_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x130FE430)
#define CLASS_1_204C453CC79AE4E0_2_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x130FE410)
#define CLASS_1_204C453CC79AE4E0_2_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x130FDE00)
#define CLASS_1_204C453CC79AE4E0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x130FE400)

inline static constexpr unsigned int Class_1_204C453CC79AE4E0_2_TypeDefinitionIndex = 59079;

class Class_1_204C453CC79AE4E0_2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Struct_2_201B1BB977AC07F5 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_2__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_020D79381203C043(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_2_METHOD_1_020D79381203C043_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_2_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_2_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_2_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}
};
