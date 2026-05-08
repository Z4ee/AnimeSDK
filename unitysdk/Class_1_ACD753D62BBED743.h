#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_73954AF3A8FEBBA4.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_27CCD45BA8768483_3;
namespace System { class String; }

#define CLASS_1_ACD753D62BBED743_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x141452F0)
#define CLASS_1_ACD753D62BBED743_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14144770)
#define CLASS_1_ACD753D62BBED743_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x141447F0)
#define CLASS_1_ACD753D62BBED743_METHOD_1_B1ECAEE982D24001_OFFSET UNITYSDK_OFFSET(0x14145350)
#define CLASS_1_ACD753D62BBED743__CTOR_OFFSET UNITYSDK_OFFSET(0x14145710)

inline static constexpr unsigned int Class_1_ACD753D62BBED743_TypeDefinitionIndex = 79175;

class Class_1_ACD753D62BBED743 : public ::System::Object
{
public:
	::Class_1_27CCD45BA8768483_3* Field_1_6; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::String* Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_5; // 0x30
	::Enum_3_73954AF3A8FEBBA4 Field_1_2; // 0x3C
	::UnityEngine::Vector3 Field_1_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACD753D62BBED743__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_ACD753D62BBED743_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACD753D62BBED743_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_ACD753D62BBED743_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B1ECAEE982D24001(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACD753D62BBED743_METHOD_1_B1ECAEE982D24001_OFFSET))(this, a1, a2);
	}
};
