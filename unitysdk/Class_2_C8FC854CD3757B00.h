#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_2_1C9C081C3F4294E9;
class Class_2_2B9847232031B19F;
namespace RPG::GameCore { class HandleMapRotationInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C8FC854CD3757B00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D50F60)
#define CLASS_2_C8FC854CD3757B00_METHOD_2_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0x17D514A0)
#define CLASS_2_C8FC854CD3757B00_METHOD_2_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0x17D51A50)
#define CLASS_2_C8FC854CD3757B00_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D51590)
#define CLASS_2_C8FC854CD3757B00_METHOD_2_DFC11C3DC1DE053B_OFFSET UNITYSDK_OFFSET(0x17D51780)
#define CLASS_2_C8FC854CD3757B00_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D515D0)
#define CLASS_2_C8FC854CD3757B00_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D51040)
#define CLASS_2_C8FC854CD3757B00_TICK_OFFSET UNITYSDK_OFFSET(0x17D51160)
#define CLASS_2_C8FC854CD3757B00__CTOR_OFFSET UNITYSDK_OFFSET(0x17D50B90)

inline static constexpr unsigned int Class_2_C8FC854CD3757B00_TypeDefinitionIndex = 53264;

class Class_2_C8FC854CD3757B00 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Struct_2_D3027B1CDFF61281 EHHDIJMGHGG; // 0x20
	::Class_2_2B9847232031B19F* BAMECAHHEKC; // 0x50
	::Struct_2_D3027B1CDFF61281 EJEDAHOENCD; // 0x58
	::Class_2_1C9C081C3F4294E9* IFEPIOPPBJJ; // 0x88
	::RPG::GameCore::HandleMapRotationInteract* IGHAHBNLIJA; // 0x90
	::System::UInt32 PEEFHNHDBMF; // 0x98
	::System::Boolean AADLKMCFFOL; // 0x9C
	::System::Boolean GMALPHFHLDM; // 0x9D
	::System::UInt32 JGGDKOCIEGH; // 0xA0

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

	::System::Void Method_2_DFC11C3DC1DE053B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00_METHOD_2_DFC11C3DC1DE053B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B37A17B7A3F06D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8FC854CD3757B00_METHOD_2_8B37A17B7A3F06D8_OFFSET))(this);
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
