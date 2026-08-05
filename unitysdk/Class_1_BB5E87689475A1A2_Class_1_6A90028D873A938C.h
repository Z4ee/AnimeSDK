#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_816D4E2238E8C24A;
class Class_2_A2809E685EB92269;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB5E87689475A1A2_CLASS_1_6A90028D873A938C__CTOR_OFFSET UNITYSDK_OFFSET(0x175375C0)

inline static constexpr unsigned int Class_1_BB5E87689475A1A2_Class_1_6A90028D873A938C_TypeDefinitionIndex = 85955;

class Class_1_BB5E87689475A1A2_Class_1_6A90028D873A938C : public ::System::Object
{
public:
	::System::Action* Field_1_4; // 0x10
	::System::String* Field_1_15; // 0x18
	::System::Action_4<::System::UInt32, ::System::UInt32, ::System::String*, ::System::Object*>* Field_1_11; // 0x20
	::System::String* Field_1_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_7; // 0x38
	::Class_1_816D4E2238E8C24A* Field_1_13; // 0x40
	::System::Action* Field_1_5; // 0x48
	::System::String* Field_1_10; // 0x50
	::Class_2_A2809E685EB92269* Field_1_14; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* Field_1_12; // 0x60
	::System::Nullable_1<::System::Int32> Field_1_0; // 0x68
	::System::Single Field_1_1; // 0x70
	::System::Boolean Field_1_8; // 0x74
	::System::Int32 Field_1_9; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB5E87689475A1A2_CLASS_1_6A90028D873A938C__CTOR_OFFSET))(this);
	}
};
