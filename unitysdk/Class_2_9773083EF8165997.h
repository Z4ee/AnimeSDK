#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_2_1C9C081C3F4294E9;
class Class_2_36C95D73718D07B1;
namespace RPG::GameCore { class HandleMapRotationInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_9773083EF8165997_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11E68920)
#define CLASS_2_9773083EF8165997_METHOD_2_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0x11E690B0)
#define CLASS_2_9773083EF8165997_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x11E68E50)
#define CLASS_2_9773083EF8165997_METHOD_2_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0x11E69390)
#define CLASS_2_9773083EF8165997_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11E68F40)
#define CLASS_2_9773083EF8165997_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11E68F80)
#define CLASS_2_9773083EF8165997_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11E68A00)
#define CLASS_2_9773083EF8165997_TICK_OFFSET UNITYSDK_OFFSET(0x11E68B00)
#define CLASS_2_9773083EF8165997__CTOR_OFFSET UNITYSDK_OFFSET(0x11E68610)

inline static constexpr unsigned int Class_2_9773083EF8165997_TypeDefinitionIndex = 48866;

class Class_2_9773083EF8165997 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::HandleMapRotationInteract* Field_2_2; // 0x18
	::Struct_2_D3027B1CDFF61281 Field_2_7; // 0x20
	::Struct_2_D3027B1CDFF61281 Field_2_8; // 0x50
	::Class_2_36C95D73718D07B1* Field_2_4; // 0x80
	::Class_2_1C9C081C3F4294E9* Field_2_9; // 0x88
	::RPG::GameCore::TaskContext* Field_2_3; // 0x90
	::System::UInt32 Field_2_1; // 0x98
	::System::UInt32 Field_2_0; // 0x9C
	::System::Boolean Field_2_5; // 0xA0
	::System::Boolean Field_2_6; // 0xA1

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
