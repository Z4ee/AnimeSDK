#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_5436AF4270279182;
class Class_4_48419B731F2612DE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_48DE0246D86411DB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159267E0)
#define CLASS_3_48DE0246D86411DB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159269B0)
#define CLASS_3_48DE0246D86411DB_TICK_OFFSET UNITYSDK_OFFSET(0x15926A00)
#define CLASS_3_48DE0246D86411DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15926A60)
#define CLASS_3_48DE0246D86411DB__CTOR_OFFSET UNITYSDK_OFFSET(0x159267B0)

inline static constexpr unsigned int Class_3_48DE0246D86411DB_TypeDefinitionIndex = 52430;

class Class_3_48DE0246D86411DB : public ::RPG::GameCore::ST_Task_1<::Class_4_48419B731F2612DE*>
{
public:
	static ::System::Int32* StaticGet_DJFABCJPEHG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_48DE0246D86411DB_TypeDefinitionIndex)->GetStaticField(0x13610);
	}
	::Class_2_5436AF4270279182* DPOJGPNDPMD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_48419B731F2612DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_48419B731F2612DE*))((::PBYTE)hIl2Cpp + CLASS_3_48DE0246D86411DB__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_48DE0246D86411DB__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48DE0246D86411DB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48DE0246D86411DB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_48DE0246D86411DB_TICK_OFFSET))(this, a1);
	}
};
