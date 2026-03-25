#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
class Class_3_B39165A94502B74A;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_D31F3CACDFBF58C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B4D130)
#define CLASS_2_D31F3CACDFBF58C8_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x10B4DB00)
#define CLASS_2_D31F3CACDFBF58C8_METHOD_2_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0x10B4DD00)
#define CLASS_2_D31F3CACDFBF58C8_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10B4DE50)
#define CLASS_2_D31F3CACDFBF58C8_METHOD_2_1851BEED4EC7EAA8_OFFSET UNITYSDK_OFFSET(0x10B4D9A0)
#define CLASS_2_D31F3CACDFBF58C8_METHOD_2_7601F22E6FD05853_OFFSET UNITYSDK_OFFSET(0x10B4DDE0)
#define CLASS_2_D31F3CACDFBF58C8_METHOD_2_862A46B7ADA3ADE1_OFFSET UNITYSDK_OFFSET(0x10B4D760)
#define CLASS_2_D31F3CACDFBF58C8_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x10B4DF30)
#define CLASS_2_D31F3CACDFBF58C8_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x10B4DBE0)
#define CLASS_2_D31F3CACDFBF58C8_METHOD_2_FAC1A2CEF0BE5FB4_OFFSET UNITYSDK_OFFSET(0x10B4D570)
#define CLASS_2_D31F3CACDFBF58C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B4D270)
#define CLASS_2_D31F3CACDFBF58C8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B4D0E0)
#define CLASS_2_D31F3CACDFBF58C8_TICK_OFFSET UNITYSDK_OFFSET(0x10B4CFF0)
#define CLASS_2_D31F3CACDFBF58C8__CTOR_OFFSET UNITYSDK_OFFSET(0x10B4CE30)

inline static constexpr unsigned int Class_2_D31F3CACDFBF58C8_TypeDefinitionIndex = 47187;

class Class_2_D31F3CACDFBF58C8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x18
	::RPG::GameCore::PropComponent* Field_2_9; // 0x20
	::RPG::Client::LuaUIController* Field_2_6; // 0x28
	::Class_3_B39165A94502B74A* Field_2_1; // 0x30
	::RPG::GameCore::TaskContext* Field_2_0; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x40
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x48
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x50
	::System::UInt32 Field_2_8; // 0x58
	::System::Boolean Field_2_7; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B39165A94502B74A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B39165A94502B74A*))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_FAC1A2CEF0BE5FB4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_METHOD_2_FAC1A2CEF0BE5FB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_862A46B7ADA3ADE1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_METHOD_2_862A46B7ADA3ADE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_7601F22E6FD05853(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_METHOD_2_7601F22E6FD05853_OFFSET))(this, a1);
	}

	::System::Void Method_2_1851BEED4EC7EAA8(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_METHOD_2_1851BEED4EC7EAA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_METHOD_2_1290EA767C459179_2_OFFSET))(this);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D31F3CACDFBF58C8_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}
};
