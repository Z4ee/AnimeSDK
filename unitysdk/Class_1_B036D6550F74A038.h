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

#define CLASS_1_B036D6550F74A038_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CAACA0)
#define CLASS_1_B036D6550F74A038_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18CAB600)
#define CLASS_1_B036D6550F74A038_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x18CAB680)
#define CLASS_1_B036D6550F74A038_METHOD_1_24A25E33E8D4A2E6_OFFSET UNITYSDK_OFFSET(0x18CAAD00)
#define CLASS_1_B036D6550F74A038__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAC7C0)

inline static constexpr unsigned int Class_1_B036D6550F74A038_TypeDefinitionIndex = 63887;

class Class_1_B036D6550F74A038 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicFloat*>* Field_1_10; // 0x28
	::System::String* Field_1_11; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x38
	::UnityEngine::Vector3 Field_1_9; // 0x40
	::System::Boolean Field_1_7; // 0x4C
	::System::Boolean Field_1_1; // 0x4D
	::UnityEngine::Vector3 Field_1_8; // 0x50
	::System::Int32 Field_1_2; // 0x5C

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
