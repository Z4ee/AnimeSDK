#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_C6F81DCE38B0EBC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DBF480)
#define CLASS_2_C6F81DCE38B0EBC4_METHOD_2_019A694B80821E6A_OFFSET UNITYSDK_OFFSET(0x11DBF380)
#define CLASS_2_C6F81DCE38B0EBC4_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11DBF310)
#define CLASS_2_C6F81DCE38B0EBC4_METHOD_2_8919FC8A9BA0FD8F_OFFSET UNITYSDK_OFFSET(0x11DBF1E0)
#define CLASS_2_C6F81DCE38B0EBC4_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x11DBF2C0)
#define CLASS_2_C6F81DCE38B0EBC4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11DBF280)
#define CLASS_2_C6F81DCE38B0EBC4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DBF4F0)
#define CLASS_2_C6F81DCE38B0EBC4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DBF530)
#define CLASS_2_C6F81DCE38B0EBC4_TICK_OFFSET UNITYSDK_OFFSET(0x11DBF050)
#define CLASS_2_C6F81DCE38B0EBC4__CTOR_OFFSET UNITYSDK_OFFSET(0x11DBF040)

inline static constexpr unsigned int Class_2_C6F81DCE38B0EBC4_TypeDefinitionIndex = 50853;

class Class_2_C6F81DCE38B0EBC4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C6F81DCE38B0EBC4_TypeDefinitionIndex)->GetStaticField(0xFA40);
	}
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x20
	::System::Boolean Field_2_1; // 0x28
	::System::Single Field_2_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_C6F81DCE38B0EBC4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C6F81DCE38B0EBC4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8919FC8A9BA0FD8F(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_C6F81DCE38B0EBC4_METHOD_2_8919FC8A9BA0FD8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F81DCE38B0EBC4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F81DCE38B0EBC4_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C6F81DCE38B0EBC4_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_019A694B80821E6A(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_C6F81DCE38B0EBC4_METHOD_2_019A694B80821E6A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F81DCE38B0EBC4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F81DCE38B0EBC4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F81DCE38B0EBC4_ONTASKRESET_OFFSET))(this);
	}
};
