#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MarbleNpcListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_24F5A630ABBA6FFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19197800)
#define CLASS_2_24F5A630ABBA6FFE_METHOD_2_8282D1563F42937E_OFFSET UNITYSDK_OFFSET(0x19197C30)
#define CLASS_2_24F5A630ABBA6FFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x191976F0)
#define CLASS_2_24F5A630ABBA6FFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x191977B0)
#define CLASS_2_24F5A630ABBA6FFE_TICK_OFFSET UNITYSDK_OFFSET(0x191980A0)
#define CLASS_2_24F5A630ABBA6FFE__CTOR_OFFSET UNITYSDK_OFFSET(0x19197440)

inline static constexpr unsigned int Class_2_24F5A630ABBA6FFE_TypeDefinitionIndex = 53283;

class Class_2_24F5A630ABBA6FFE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MarbleNpcListener* IGHAHBNLIJA; // 0x18
	::Class_3_07C3C4D2990C49EE* FHEGMOCMNLO; // 0x20
	::Class_3_07C3C4D2990C49EE* LJOKDPABLLL; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
	::Class_3_07C3C4D2990C49EE* JIJACLILLBI; // 0x38
	::Class_3_07C3C4D2990C49EE* DBNHKOCFADK; // 0x40
	::Class_3_07C3C4D2990C49EE* NBGFNJOADKB; // 0x48
	::Class_3_07C3C4D2990C49EE* KHFKIGICMCL; // 0x50
	::System::Boolean BHEIANKOOPN; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarbleNpcListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarbleNpcListener*))((::PBYTE)hIl2Cpp + CLASS_2_24F5A630ABBA6FFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24F5A630ABBA6FFE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24F5A630ABBA6FFE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24F5A630ABBA6FFE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8282D1563F42937E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24F5A630ABBA6FFE_METHOD_2_8282D1563F42937E_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_24F5A630ABBA6FFE_TICK_OFFSET))(this, a1);
	}
};
