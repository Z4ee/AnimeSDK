#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_2_1C9C081C3F4294E9;
class Class_2_36C95D73718D07B1;
namespace RPG::GameCore { class HandleMapRotationInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C8FC854CD3757B00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F56100)
#define CLASS_2_C8FC854CD3757B00_METHOD_2_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0x15F56900)
#define CLASS_2_C8FC854CD3757B00_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x15F56620)
#define CLASS_2_C8FC854CD3757B00_METHOD_2_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0x15F56BD0)
#define CLASS_2_C8FC854CD3757B00_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F56710)
#define CLASS_2_C8FC854CD3757B00_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F56750)
#define CLASS_2_C8FC854CD3757B00_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F561D0)
#define CLASS_2_C8FC854CD3757B00_TICK_OFFSET UNITYSDK_OFFSET(0x15F562E0)
#define CLASS_2_C8FC854CD3757B00__CTOR_OFFSET UNITYSDK_OFFSET(0x15F55D20)

inline static constexpr unsigned int Class_2_C8FC854CD3757B00_TypeDefinitionIndex = 50586;

class Class_2_C8FC854CD3757B00 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Struct_2_D3027B1CDFF61281 Field_2_0; // 0x18
	::Class_2_36C95D73718D07B1* Field_2_1; // 0x48
	::Class_2_1C9C081C3F4294E9* Field_2_2; // 0x50
	::Struct_2_D3027B1CDFF61281 Field_2_3; // 0x58
	::RPG::GameCore::HandleMapRotationInteract* Field_2_4; // 0x88
	::RPG::GameCore::TaskContext* Field_2_5; // 0x90
	::System::UInt32 Field_2_6; // 0x98
	::System::UInt32 Field_2_7; // 0x9C
	::System::Boolean Field_2_8; // 0xA0
	::System::Boolean Field_2_9; // 0xA1

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HandleMapRotationInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HandleMapRotationInteract*))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_31B86CF031D1C6B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00_METHOD_2_31B86CF031D1C6B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_8CA56FF24F45C9F3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00_METHOD_2_8CA56FF24F45C9F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
