#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_426;
class Class_1_F91AD0C5A85E4AFA_17;
namespace RPG::GameCore { class FinishPerformanceMission; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_2E09BD3C0F2A6421_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16AB4320)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0x16AB5E50)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_24CD76F051D94429_OFFSET UNITYSDK_OFFSET(0x16AB5B30)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x16AB61F0)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_6B4A3A1B5816B81E_1_OFFSET UNITYSDK_OFFSET(0x16AB43A0)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x16AB4C00)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_7F6BC0E1A156D72B_OFFSET UNITYSDK_OFFSET(0x16AB6390)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_88AE33360A2E2D2A_OFFSET UNITYSDK_OFFSET(0x16AB4D20)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x16AB62D0)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x16AB5C20)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16AB44C0)
#define CLASS_2_2E09BD3C0F2A6421_METHOD_2_EE27BA5388FE7451_OFFSET UNITYSDK_OFFSET(0x16AB6710)
#define CLASS_2_2E09BD3C0F2A6421_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16AB45C0)
#define CLASS_2_2E09BD3C0F2A6421_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16AB5A20)
#define CLASS_2_2E09BD3C0F2A6421_TICK_OFFSET UNITYSDK_OFFSET(0x16AB5AD0)
#define CLASS_2_2E09BD3C0F2A6421__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AB6B40)
#define CLASS_2_2E09BD3C0F2A6421__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB4310)

inline static constexpr unsigned int Class_2_2E09BD3C0F2A6421_TypeDefinitionIndex = 50426;

class Class_2_2E09BD3C0F2A6421 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E09BD3C0F2A6421_TypeDefinitionIndex)->GetStaticField(0x133C0);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E09BD3C0F2A6421_TypeDefinitionIndex)->GetStaticField(0x133C4);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F91AD0C5A85E4AFA_17*>* Field_2_2; // 0x18
	::RPG::GameCore::FinishPerformanceMission* Field_2_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F91AD0C5A85E4AFA_17*>* Field_2_4; // 0x28
	::RPG::GameCore::TaskContext* Field_2_5; // 0x30
	::Class_0_16E4307DCC419505_426* Field_2_6; // 0x38
	::System::UInt32 Field_2_7; // 0x40
	::System::UInt32 Field_2_8; // 0x44
	::System::Boolean Field_2_9; // 0x48
	::System::UInt32 Field_2_10; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishPerformanceMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishPerformanceMission*))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_2_6B4A3A1B5816B81E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_6B4A3A1B5816B81E_1_OFFSET))(this);
	}

	::System::Void Method_2_24CD76F051D94429(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_24CD76F051D94429_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_88AE33360A2E2D2A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_88AE33360A2E2D2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F6BC0E1A156D72B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_7F6BC0E1A156D72B_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE27BA5388FE7451(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_EE27BA5388FE7451_OFFSET))(this, a1);
	}

	::System::Void Method_2_106289055FB804CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_106289055FB804CE_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E09BD3C0F2A6421_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}
};
