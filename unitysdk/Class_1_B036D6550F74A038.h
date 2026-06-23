#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B036D6550F74A038_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD581050)
#define CLASS_1_B036D6550F74A038_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD5819B0)
#define CLASS_1_B036D6550F74A038_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0xD581A30)
#define CLASS_1_B036D6550F74A038_METHOD_1_24A25E33E8D4A2E6_OFFSET UNITYSDK_OFFSET(0xD5810B0)
#define CLASS_1_B036D6550F74A038__CTOR_OFFSET UNITYSDK_OFFSET(0xD582B30)

inline static constexpr unsigned int Class_1_B036D6550F74A038_TypeDefinitionIndex = 41346;

class Class_1_B036D6550F74A038 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x20
	::System::String* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicFloat*>* Field_1_8; // 0x38
	::System::Boolean Field_1_3; // 0x40
	::System::Boolean Field_1_1; // 0x41
	::System::Int32 Field_1_0; // 0x44
	::UnityEngine::Vector3 Field_1_10; // 0x48
	::UnityEngine::Vector3 Field_1_9; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B036D6550F74A038__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B036D6550F74A038_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B036D6550F74A038_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B036D6550F74A038_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_24A25E33E8D4A2E6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B036D6550F74A038_METHOD_1_24A25E33E8D4A2E6_OFFSET))(this, a1, a2);
	}
};
