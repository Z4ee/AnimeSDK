#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FA4387157CAA6053;
namespace UnityEngine { class Transform; }

#define CLASS_2_FA4387157CAA6053_CLASS_1_5B4C80096537F1D2_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x167522E0)
#define CLASS_2_FA4387157CAA6053_CLASS_1_5B4C80096537F1D2_ONDROP_OFFSET UNITYSDK_OFFSET(0x16752340)
#define CLASS_2_FA4387157CAA6053_CLASS_1_5B4C80096537F1D2__CTOR_OFFSET UNITYSDK_OFFSET(0x167522D0)

inline static constexpr unsigned int Class_2_FA4387157CAA6053_Class_1_5B4C80096537F1D2_TypeDefinitionIndex = 75480;

class Class_2_FA4387157CAA6053_Class_1_5B4C80096537F1D2 : public ::System::Object
{
public:
	::Class_2_FA4387157CAA6053* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_FA4387157CAA6053* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FA4387157CAA6053*))((::PBYTE)hIl2Cpp + CLASS_2_FA4387157CAA6053_CLASS_1_5B4C80096537F1D2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean CanAcceptDrop(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FA4387157CAA6053_CLASS_1_5B4C80096537F1D2_CANACCEPTDROP_OFFSET))(this, a1);
	}

	::System::Void OnDrop(::System::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_FA4387157CAA6053_CLASS_1_5B4C80096537F1D2_ONDROP_OFFSET))(this, a1, a2);
	}
};
