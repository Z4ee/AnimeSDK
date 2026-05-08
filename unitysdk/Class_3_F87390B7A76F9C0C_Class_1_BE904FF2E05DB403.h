#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F87390B7A76F9C0C;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_F87390B7A76F9C0C_CLASS_1_BE904FF2E05DB403_METHOD_1_360CD3A1CA8668CE_OFFSET UNITYSDK_OFFSET(0x188ABBD0)
#define CLASS_3_F87390B7A76F9C0C_CLASS_1_BE904FF2E05DB403__CTOR_OFFSET UNITYSDK_OFFSET(0x188ABBC0)

inline static constexpr unsigned int Class_3_F87390B7A76F9C0C_Class_1_BE904FF2E05DB403_TypeDefinitionIndex = 71345;

class Class_3_F87390B7A76F9C0C_Class_1_BE904FF2E05DB403 : public ::System::Object
{
public:
	::Class_3_F87390B7A76F9C0C* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_CLASS_1_BE904FF2E05DB403__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_360CD3A1CA8668CE(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_F87390B7A76F9C0C_CLASS_1_BE904FF2E05DB403_METHOD_1_360CD3A1CA8668CE_OFFSET))(this, a1);
	}
};
