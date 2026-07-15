#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C172BB26D97249F0.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B7385E6F6B5DD8D_CLEAR_OFFSET UNITYSDK_OFFSET(0x17664400)
#define CLASS_1_3B7385E6F6B5DD8D_METHOD_1_99696F6DD02D7602_OFFSET UNITYSDK_OFFSET(0x176645A0)
#define CLASS_1_3B7385E6F6B5DD8D_METHOD_1_DA5B6E7811E60087_OFFSET UNITYSDK_OFFSET(0x17664480)
#define CLASS_1_3B7385E6F6B5DD8D__CTOR_OFFSET UNITYSDK_OFFSET(0x186E5960)

inline static constexpr unsigned int Class_1_3B7385E6F6B5DD8D_TypeDefinitionIndex = 53124;

class Class_1_3B7385E6F6B5DD8D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_C172BB26D97249F0>* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B7385E6F6B5DD8D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B7385E6F6B5DD8D_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_DA5B6E7811E60087(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3B7385E6F6B5DD8D_METHOD_1_DA5B6E7811E60087_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_99696F6DD02D7602(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3B7385E6F6B5DD8D_METHOD_1_99696F6DD02D7602_OFFSET))(this, a1);
	}
};
