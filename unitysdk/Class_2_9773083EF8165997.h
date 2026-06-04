#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_2_1C9C081C3F4294E9;
class Class_2_36C95D73718D07B1;
namespace RPG::GameCore { class HandleMapRotationInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_9773083EF8165997_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACDF5C0)
#define CLASS_2_9773083EF8165997_METHOD_2_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0xACDFD70)
#define CLASS_2_9773083EF8165997_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0xACDFAF0)
#define CLASS_2_9773083EF8165997_METHOD_2_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0xACE0040)
#define CLASS_2_9773083EF8165997_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xACDFBE0)
#define CLASS_2_9773083EF8165997_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xACDFC20)
#define CLASS_2_9773083EF8165997_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xACDF6A0)
#define CLASS_2_9773083EF8165997_TICK_OFFSET UNITYSDK_OFFSET(0xACDF7B0)
#define CLASS_2_9773083EF8165997__CTOR_OFFSET UNITYSDK_OFFSET(0xACDF2C0)

inline static constexpr unsigned int Class_2_9773083EF8165997_TypeDefinitionIndex = 49532;

class Class_2_9773083EF8165997 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_1C9C081C3F4294E9* Field_2_0; // 0x18
	::Class_2_36C95D73718D07B1* Field_2_1; // 0x20
	::Struct_2_D3027B1CDFF61281 Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x58
	::Struct_2_D3027B1CDFF61281 Field_2_4; // 0x60
	::RPG::GameCore::HandleMapRotationInteract* Field_2_5; // 0x90
	::System::Boolean Field_2_6; // 0x98
	::System::Boolean Field_2_7; // 0x99
	::System::UInt32 Field_2_8; // 0x9C
	::System::UInt32 Field_2_9; // 0xA0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HandleMapRotationInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HandleMapRotationInteract*))((::PBYTE)hIl2Cpp + CLASS_2_9773083EF8165997__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9773083EF8165997_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9773083EF8165997_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9773083EF8165997_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9773083EF8165997_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_31B86CF031D1C6B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9773083EF8165997_METHOD_2_31B86CF031D1C6B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9773083EF8165997_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_8CA56FF24F45C9F3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9773083EF8165997_METHOD_2_8CA56FF24F45C9F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9773083EF8165997_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
