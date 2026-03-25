#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DC9F4E5CB6004C9C_METHOD_1_46DD4AF19BE9A8FE_OFFSET UNITYSDK_OFFSET(0x87AED50)
#define CLASS_1_DC9F4E5CB6004C9C_METHOD_1_4D81D208C97186B2_OFFSET UNITYSDK_OFFSET(0x87AEC30)
#define CLASS_1_DC9F4E5CB6004C9C_METHOD_1_7CE2E7FC709DD43F_OFFSET UNITYSDK_OFFSET(0x87AEDE0)
#define CLASS_1_DC9F4E5CB6004C9C_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x87AEBD0)
#define CLASS_1_DC9F4E5CB6004C9C_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x87AF050)
#define CLASS_1_DC9F4E5CB6004C9C_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x87AEC20)
#define CLASS_1_DC9F4E5CB6004C9C_METHOD_1_FE540C76BF3FF7D5_OFFSET UNITYSDK_OFFSET(0x87AEF40)
#define CLASS_1_DC9F4E5CB6004C9C__CTOR_OFFSET UNITYSDK_OFFSET(0x87AF0C0)

inline static constexpr unsigned int Class_1_DC9F4E5CB6004C9C_TypeDefinitionIndex = 57266;

class Class_1_DC9F4E5CB6004C9C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC9F4E5CB6004C9C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC9F4E5CB6004C9C_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC9F4E5CB6004C9C_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_1_4D81D208C97186B2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_DC9F4E5CB6004C9C_METHOD_1_4D81D208C97186B2_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_46DD4AF19BE9A8FE(::System::Int32 a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC9F4E5CB6004C9C_METHOD_1_46DD4AF19BE9A8FE_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_7CE2E7FC709DD43F(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC9F4E5CB6004C9C_METHOD_1_7CE2E7FC709DD43F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FE540C76BF3FF7D5(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DC9F4E5CB6004C9C_METHOD_1_FE540C76BF3FF7D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC9F4E5CB6004C9C_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
