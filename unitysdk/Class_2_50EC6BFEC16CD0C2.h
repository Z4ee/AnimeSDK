#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMsgType.h"

namespace System { class Object; }

#define CLASS_2_50EC6BFEC16CD0C2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17E28AE0)
#define CLASS_2_50EC6BFEC16CD0C2_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x17E287C0)
#define CLASS_2_50EC6BFEC16CD0C2__CTOR_OFFSET UNITYSDK_OFFSET(0x17E287B0)

inline static constexpr unsigned int Class_2_50EC6BFEC16CD0C2_TypeDefinitionIndex = 38726;

class Class_2_50EC6BFEC16CD0C2 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Il2CppArray<::System::Object*>* Field_2_1; // 0x18
	::RPG::Client::LittleGame::TRFMsgType Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::LittleGame::TRFMsgType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TRFMsgType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_50EC6BFEC16CD0C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50EC6BFEC16CD0C2_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50EC6BFEC16CD0C2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
