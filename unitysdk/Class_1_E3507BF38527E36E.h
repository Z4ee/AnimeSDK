#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FEFDEB6CE938031E;
namespace RPG::GameCore { class GameComponentBase; }

#define CLASS_1_E3507BF38527E36E_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x117D65C0)
#define CLASS_1_E3507BF38527E36E_METHOD_1_02FE91DC3075CF8D_OFFSET UNITYSDK_OFFSET(0x117D65E0)
#define CLASS_1_E3507BF38527E36E_METHOD_1_26042D9D9C2F739E_OFFSET UNITYSDK_OFFSET(0x117D66C0)
#define CLASS_1_E3507BF38527E36E_METHOD_1_83AAC0786ABD788A_OFFSET UNITYSDK_OFFSET(0x117D67F0)
#define CLASS_1_E3507BF38527E36E_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x117D65D0)
#define CLASS_1_E3507BF38527E36E__CTOR_OFFSET UNITYSDK_OFFSET(0x117D6900)

inline static constexpr unsigned int Class_1_E3507BF38527E36E_TypeDefinitionIndex = 53069;

class Class_1_E3507BF38527E36E : public ::System::Object
{
public:
	::Class_1_FEFDEB6CE938031E* Field_1_1; // 0x10
	::Class_1_FEFDEB6CE938031E* Field_1_0; // 0x18
	::System::Int32 _Count_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3507BF38527E36E__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3507BF38527E36E_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3507BF38527E36E_SET_COUNT_OFFSET))(this, value);
	}

	::System::Void Method_1_02FE91DC3075CF8D(::RPG::GameCore::GameComponentBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameComponentBase*))((::PBYTE)hIl2Cpp + CLASS_1_E3507BF38527E36E_METHOD_1_02FE91DC3075CF8D_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameComponentBase* Method_1_26042D9D9C2F739E()
	{
		return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3507BF38527E36E_METHOD_1_26042D9D9C2F739E_OFFSET))(this);
	}

	::System::Int32 Method_1_83AAC0786ABD788A(::Class_1_E3507BF38527E36E* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_E3507BF38527E36E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3507BF38527E36E_METHOD_1_83AAC0786ABD788A_OFFSET))(this, a1, a2);
	}
};
