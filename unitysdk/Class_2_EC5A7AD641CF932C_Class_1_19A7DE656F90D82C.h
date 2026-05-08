#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x116B9330)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x116B9870)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C_METHOD_1_7D5E19B7C7D94D86_OFFSET UNITYSDK_OFFSET(0x116B93F0)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C_METHOD_1_D594CEE61895FE5F_OFFSET UNITYSDK_OFFSET(0x116B9920)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x116B9C90)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C__CTOR_OFFSET UNITYSDK_OFFSET(0x116B9320)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Class_1_19A7DE656F90D82C_TypeDefinitionIndex = 79718;

class Class_2_EC5A7AD641CF932C_Class_1_19A7DE656F90D82C : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_4; // 0x18
	::UnityEngine::GameObject* Field_1_2; // 0x20
	::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204* Field_1_5; // 0x28
	::System::Boolean Field_1_1; // 0x30
	::System::Int32 Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_7D5E19B7C7D94D86(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C_METHOD_1_7D5E19B7C7D94D86_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_D594CEE61895FE5F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C_METHOD_1_D594CEE61895FE5F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_19A7DE656F90D82C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
