#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"

class Class_1_047E76510D731D92;
class Class_2_F3B643C4D5BD11F2;
class Class_3_07C3C4D2990C49EE;
class Class_3_85ED59CBFA50321C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A439D57B0CB28D23_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A2C090)
#define CLASS_3_A439D57B0CB28D23_METHOD_3_158635B985A9D21E_OFFSET UNITYSDK_OFFSET(0x13A2D070)
#define CLASS_3_A439D57B0CB28D23_METHOD_3_706B05DC5285CB8A_OFFSET UNITYSDK_OFFSET(0x13A2D8C0)
#define CLASS_3_A439D57B0CB28D23_METHOD_3_A19A593502C653B7_OFFSET UNITYSDK_OFFSET(0x13A2D6A0)
#define CLASS_3_A439D57B0CB28D23_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A2C150)
#define CLASS_3_A439D57B0CB28D23__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2BF40)
#define CLASS_3_A439D57B0CB28D23___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A2DB00)

inline static constexpr unsigned int Class_3_A439D57B0CB28D23_TypeDefinitionIndex = 50331;

class Class_3_A439D57B0CB28D23 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85ED59CBFA50321C*>
{
public:
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_3_2; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_3_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85ED59CBFA50321C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85ED59CBFA50321C*))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_2_F3B643C4D5BD11F2* Method_3_A19A593502C653B7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_F3B643C4D5BD11F2*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23_METHOD_3_A19A593502C653B7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Method_3_158635B985A9D21E(::Class_1_047E76510D731D92* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*(*)(::PVOID, ::Class_1_047E76510D731D92*))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23_METHOD_3_158635B985A9D21E_OFFSET))(this, a1);
	}

	::System::Void Method_3_706B05DC5285CB8A(::Class_3_07C3C4D2990C49EE* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23_METHOD_3_706B05DC5285CB8A_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A439D57B0CB28D23___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
