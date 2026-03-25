#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class MarbleNpcListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_24F5A630ABBA6FFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x886FEE0)
#define CLASS_2_24F5A630ABBA6FFE_METHOD_2_8282D1563F42937E_OFFSET UNITYSDK_OFFSET(0x8870060)
#define CLASS_2_24F5A630ABBA6FFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x886FDE0)
#define CLASS_2_24F5A630ABBA6FFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x886FE90)
#define CLASS_2_24F5A630ABBA6FFE_TICK_OFFSET UNITYSDK_OFFSET(0x88704D0)
#define CLASS_2_24F5A630ABBA6FFE__CTOR_OFFSET UNITYSDK_OFFSET(0x886FB30)

inline static constexpr unsigned int Class_2_24F5A630ABBA6FFE_TypeDefinitionIndex = 42898;

class Class_2_24F5A630ABBA6FFE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::MarbleNpcListener* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_7; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x40
	::Class_3_5775A4FEC79026BC* Field_2_6; // 0x48
	::Class_3_5775A4FEC79026BC* Field_2_8; // 0x50
	::System::Boolean Field_2_2; // 0x58

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
