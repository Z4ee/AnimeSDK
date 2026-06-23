#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_EventCallback;
class AkExternalSourceInfoArray;
class Class_3_01E03BF53558728A;
class Class_3_848BA58F81F05F34;
class Class_3_848BA58F81F05F34_1;
namespace UnityEngine { class GameObject; }

#define CLASS_1_43BD383C98B4C0C5_64_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x1962DBB0)
#define CLASS_1_43BD383C98B4C0C5_64_POLISH_OFFSET UNITYSDK_OFFSET(0x1962DB40)
#define CLASS_1_43BD383C98B4C0C5_64_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1962DA30)
#define CLASS_1_43BD383C98B4C0C5_64__CTOR_OFFSET UNITYSDK_OFFSET(0x1962DBA0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_64_TypeDefinitionIndex = 48696;

class Class_1_43BD383C98B4C0C5_64 : public ::System::Object
{
public:
	::AkExternalSourceInfoArray* Field_1_5; // 0x10
	::Class_3_848BA58F81F05F34* Field_1_4; // 0x18
	::AkCallbackManager_EventCallback* Field_1_14; // 0x20
	::UnityEngine::GameObject* Field_1_1; // 0x28
	::Class_3_848BA58F81F05F34_1* Field_1_2; // 0x30
	::Class_3_01E03BF53558728A* Field_1_3; // 0x38
	::System::Int32 Field_1_8; // 0x40
	::System::Boolean Field_1_6; // 0x44
	::System::Boolean Field_1_11; // 0x45
	::System::Boolean Field_1_13; // 0x46
	::System::Single Field_1_10; // 0x48
	::System::Single Field_1_7; // 0x4C
	::System::UInt32 Field_1_9; // 0x50
	::System::UInt32 Field_1_12; // 0x54
	::System::UInt32 Field_1_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_64__CTOR_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_64_RECYCLE_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_64_POLISH_OFFSET))(this);
	}

	static ::Class_1_43BD383C98B4C0C5_64* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_43BD383C98B4C0C5_64*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_64_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};
