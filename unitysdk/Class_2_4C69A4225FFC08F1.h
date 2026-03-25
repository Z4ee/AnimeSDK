#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueDLC1Dot3PictureFrameDisappear; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_4C69A4225FFC08F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11814A40)
#define CLASS_2_4C69A4225FFC08F1_METHOD_2_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x11814D60)
#define CLASS_2_4C69A4225FFC08F1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11814B10)
#define CLASS_2_4C69A4225FFC08F1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11814CE0)
#define CLASS_2_4C69A4225FFC08F1_TICK_OFFSET UNITYSDK_OFFSET(0x11814AB0)
#define CLASS_2_4C69A4225FFC08F1__CTOR_OFFSET UNITYSDK_OFFSET(0x11814A30)

inline static constexpr unsigned int Class_2_4C69A4225FFC08F1_TypeDefinitionIndex = 47159;

class Class_2_4C69A4225FFC08F1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear*))((::PBYTE)hIl2Cpp + CLASS_2_4C69A4225FFC08F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C69A4225FFC08F1_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C69A4225FFC08F1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C69A4225FFC08F1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C69A4225FFC08F1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4C69A4225FFC08F1_METHOD_2_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
	}
};
