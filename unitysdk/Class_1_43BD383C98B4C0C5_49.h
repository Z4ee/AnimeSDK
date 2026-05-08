#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_EventCallback;
class AkExternalSourceInfoArray;
class Class_3_01E03BF53558728A;
class Class_3_848BA58F81F05F34;
class Class_3_848BA58F81F05F34_1;
namespace UnityEngine { class GameObject; }

#define CLASS_1_43BD383C98B4C0C5_49_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x14CE9D20)
#define CLASS_1_43BD383C98B4C0C5_49_POLISH_OFFSET UNITYSDK_OFFSET(0x14CE9CB0)
#define CLASS_1_43BD383C98B4C0C5_49_RECYCLE_OFFSET UNITYSDK_OFFSET(0x14CE9BA0)
#define CLASS_1_43BD383C98B4C0C5_49__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE9D10)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_49_TypeDefinitionIndex = 43158;

class Class_1_43BD383C98B4C0C5_49 : public ::System::Object
{
public:
	::Class_3_848BA58F81F05F34_1* Field_1_4; // 0x10
	::AkCallbackManager_EventCallback* Field_1_14; // 0x18
	::UnityEngine::GameObject* Field_1_1; // 0x20
	::Class_3_01E03BF53558728A* Field_1_3; // 0x28
	::AkExternalSourceInfoArray* Field_1_5; // 0x30
	::Class_3_848BA58F81F05F34* Field_1_2; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::System::Boolean Field_1_11; // 0x41
	::System::Boolean Field_1_13; // 0x42
	::System::UInt32 Field_1_12; // 0x44
	::System::Single Field_1_7; // 0x48
	::System::UInt32 Field_1_9; // 0x4C
	::System::Int32 Field_1_8; // 0x50
	::System::UInt32 Field_1_0; // 0x54
	::System::Single Field_1_10; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_49__CTOR_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_49_RECYCLE_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_49_POLISH_OFFSET))(this);
	}

	static ::Class_1_43BD383C98B4C0C5_49* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_43BD383C98B4C0C5_49*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_49_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};
