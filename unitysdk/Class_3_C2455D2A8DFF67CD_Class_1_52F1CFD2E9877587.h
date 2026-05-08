#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_C2455D2A8DFF67CD_CLASS_1_52F1CFD2E9877587_METHOD_1_8D71820CD52FE830_OFFSET UNITYSDK_OFFSET(0xA942A70)
#define CLASS_3_C2455D2A8DFF67CD_CLASS_1_52F1CFD2E9877587__CTOR_OFFSET UNITYSDK_OFFSET(0xA942A60)

inline static constexpr unsigned int Class_3_C2455D2A8DFF67CD_Class_1_52F1CFD2E9877587_TypeDefinitionIndex = 45323;

class Class_3_C2455D2A8DFF67CD_Class_1_52F1CFD2E9877587 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD_CLASS_1_52F1CFD2E9877587__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8D71820CD52FE830(::System::Collections::Generic::List_1<::Foundation::AssetPath>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD_CLASS_1_52F1CFD2E9877587_METHOD_1_8D71820CD52FE830_OFFSET))(this, a1);
	}
};
