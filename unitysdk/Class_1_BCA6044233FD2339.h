#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_1_BCA6044233FD2339_METHOD_1_8BBAD2F0C69AE863_OFFSET UNITYSDK_OFFSET(0x9866760)
#define CLASS_1_BCA6044233FD2339_METHOD_1_DA5E75C5C463DE87_OFFSET UNITYSDK_OFFSET(0x9866800)
#define CLASS_1_BCA6044233FD2339__CCTOR_OFFSET UNITYSDK_OFFSET(0x98668F0)
#define CLASS_1_BCA6044233FD2339__CTOR_OFFSET UNITYSDK_OFFSET(0x98668E0)

inline static constexpr unsigned int Class_1_BCA6044233FD2339_TypeDefinitionIndex = 52651;

class Class_1_BCA6044233FD2339 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::UnityEngine::AI::NavMeshPath*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Queue_1<::UnityEngine::AI::NavMeshPath*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BCA6044233FD2339_TypeDefinitionIndex)->GetStaticField(0x117E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCA6044233FD2339__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BCA6044233FD2339__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8BBAD2F0C69AE863(::UnityEngine::AI::NavMeshPath* a1)
	{
		return ((::System::Void(*)(::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + CLASS_1_BCA6044233FD2339_METHOD_1_8BBAD2F0C69AE863_OFFSET))(a1);
	}

	static ::UnityEngine::AI::NavMeshPath* Method_1_DA5E75C5C463DE87()
	{
		return ((::UnityEngine::AI::NavMeshPath*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BCA6044233FD2339_METHOD_1_DA5E75C5C463DE87_OFFSET))();
	}
};
