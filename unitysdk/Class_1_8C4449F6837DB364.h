#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_65FD3404AD490CB1;
class Class_1_D459106EFEFB0716;
class Class_2_82AD06FA18CD21C2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C4449F6837DB364_METHOD_1_34B3BA08380FADBC_OFFSET UNITYSDK_OFFSET(0x14E66A10)
#define CLASS_1_8C4449F6837DB364_METHOD_1_6C8E5491857AD9AE_OFFSET UNITYSDK_OFFSET(0x14E68000)
#define CLASS_1_8C4449F6837DB364_METHOD_1_E342DA4AA07FED06_OFFSET UNITYSDK_OFFSET(0x14E67390)

inline static constexpr unsigned int Class_1_8C4449F6837DB364_TypeDefinitionIndex = 51724;

class Class_1_8C4449F6837DB364 : public ::System::Object
{
public:
	static ::Class_1_65FD3404AD490CB1* Method_1_34B3BA08380FADBC(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::Il2CppArray<::Class_2_82AD06FA18CD21C2*>* a3, ::System::Int32 a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::UnityEngine::Vector3 a9, ::System::String* a10)
	{
		return ((::Class_1_65FD3404AD490CB1*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::Class_2_82AD06FA18CD21C2*>*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8C4449F6837DB364_METHOD_1_34B3BA08380FADBC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::Class_1_D459106EFEFB0716* Method_1_E342DA4AA07FED06(::RPG::GameCore::TaskContext* a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4, ::Class_2_82AD06FA18CD21C2* a5)
	{
		return ((::Class_1_D459106EFEFB0716*(*)(::RPG::GameCore::TaskContext*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::Class_2_82AD06FA18CD21C2*))((::PBYTE)hIl2Cpp + CLASS_1_8C4449F6837DB364_METHOD_1_E342DA4AA07FED06_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::MVector3 Method_1_6C8E5491857AD9AE(::System::Collections::Generic::List_1<::RPG::MVector3>* a1)
	{
		return ((::RPG::MVector3(*)(::System::Collections::Generic::List_1<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + CLASS_1_8C4449F6837DB364_METHOD_1_6C8E5491857AD9AE_OFFSET))(a1);
	}
};
