#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_C75DDA89CCB3A76B;
class Class_3_328E0472F670A472;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_36A33F4B5E9C34C9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EC5DF0)
#define CLASS_3_36A33F4B5E9C34C9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EC5E90)
#define CLASS_3_36A33F4B5E9C34C9__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC5DC0)

inline static constexpr unsigned int Class_3_36A33F4B5E9C34C9_TypeDefinitionIndex = 54118;

class Class_3_36A33F4B5E9C34C9 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_328E0472F670A472*>
{
public:
	::Il2CppArray<::Class_1_C75DDA89CCB3A76B*>* LOOCAOKEODD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_328E0472F670A472* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_328E0472F670A472*))((::PBYTE)hIl2Cpp + CLASS_3_36A33F4B5E9C34C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36A33F4B5E9C34C9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36A33F4B5E9C34C9_ONTASKBEGIN_OFFSET))(this);
	}
};
