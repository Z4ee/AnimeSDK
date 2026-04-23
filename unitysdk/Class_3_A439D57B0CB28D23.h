#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"

class Class_1_047E76510D731D92;
class Class_2_F3B643C4D5BD11F2;
class Class_3_AC77597D4FE9B922_1;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A439D57B0CB28D23_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC71D1F0)
#define CLASS_3_A439D57B0CB28D23_METHOD_3_123E983ECABE89A4_OFFSET UNITYSDK_OFFSET(0xC71E530)
#define CLASS_3_A439D57B0CB28D23_METHOD_3_706B05DC5285CB8A_OFFSET UNITYSDK_OFFSET(0xC71EE60)
#define CLASS_3_A439D57B0CB28D23_METHOD_3_C9E23049B822A73D_OFFSET UNITYSDK_OFFSET(0xC71EC40)
#define CLASS_3_A439D57B0CB28D23_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC71D2B0)
#define CLASS_3_A439D57B0CB28D23__CTOR_OFFSET UNITYSDK_OFFSET(0xC71D0A0)
#define CLASS_3_A439D57B0CB28D23___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC71F0B0)

inline static constexpr unsigned int Class_3_A439D57B0CB28D23_TypeDefinitionIndex = 49664;

class Class_3_A439D57B0CB28D23 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_AC77597D4FE9B922_1*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Field_3_3; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_3_2; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_3_1; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_AC77597D4FE9B922_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_AC77597D4FE9B922_1*))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_2_F3B643C4D5BD11F2* Method_3_C9E23049B822A73D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_F3B643C4D5BD11F2*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23_METHOD_3_C9E23049B822A73D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Method_3_123E983ECABE89A4(::Class_1_047E76510D731D92* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*(*)(::PVOID, ::Class_1_047E76510D731D92*))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23_METHOD_3_123E983ECABE89A4_OFFSET))(this, a1);
	}

	::System::Void Method_3_706B05DC5285CB8A(::Class_3_E21F6DE9B7FA4D05* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E21F6DE9B7FA4D05*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23_METHOD_3_706B05DC5285CB8A_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
