#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_C2455D2A8DFF67CD_CLASS_1_3B5B62D7A0DF1659_METHOD_1_7A8167531F37F4C4_OFFSET UNITYSDK_OFFSET(0x1C11FB60)
#define CLASS_3_C2455D2A8DFF67CD_CLASS_1_3B5B62D7A0DF1659__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11FB50)

inline static constexpr unsigned int Class_3_C2455D2A8DFF67CD_Class_1_3B5B62D7A0DF1659_TypeDefinitionIndex = 85185;

class Class_3_C2455D2A8DFF67CD_Class_1_3B5B62D7A0DF1659 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD_CLASS_1_3B5B62D7A0DF1659__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7A8167531F37F4C4(::System::Collections::Generic::List_1<::Foundation::AssetPath>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD_CLASS_1_3B5B62D7A0DF1659_METHOD_1_7A8167531F37F4C4_OFFSET))(this, a1);
	}
};
