#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_B767065E66784854;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_E1D49C0308D01F35_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F2FCF0)
#define CLASS_3_E1D49C0308D01F35_METHOD_3_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x15F2F960)
#define CLASS_3_E1D49C0308D01F35_METHOD_3_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x15F2FBC0)
#define CLASS_3_E1D49C0308D01F35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F2F9B0)
#define CLASS_3_E1D49C0308D01F35_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F2FCA0)
#define CLASS_3_E1D49C0308D01F35__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2F880)

inline static constexpr unsigned int Class_3_E1D49C0308D01F35_TypeDefinitionIndex = 50269;

class Class_3_E1D49C0308D01F35 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B767065E66784854*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28
	::System::Int32 Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B767065E66784854* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B767065E66784854*))((::PBYTE)hIl2Cpp + CLASS_3_E1D49C0308D01F35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E1D49C0308D01F35_METHOD_3_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1D49C0308D01F35_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1D49C0308D01F35_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1D49C0308D01F35_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1D49C0308D01F35_METHOD_3_B877181B6123B7F6_OFFSET))(this);
	}
};
