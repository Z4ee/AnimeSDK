#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_C307CE4961698540_CLASS_1_482502C266376951_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x14411020)
#define CLASS_1_C307CE4961698540_CLASS_1_482502C266376951_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x144111F0)
#define CLASS_1_C307CE4961698540_CLASS_1_482502C266376951_METHOD_1_E2FB61652DB89C18_OFFSET UNITYSDK_OFFSET(0x14411160)
#define CLASS_1_C307CE4961698540_CLASS_1_482502C266376951__CTOR_OFFSET UNITYSDK_OFFSET(0x14411010)

inline static constexpr unsigned int Class_1_C307CE4961698540_Class_1_482502C266376951_TypeDefinitionIndex = 48980;

class Class_1_C307CE4961698540_Class_1_482502C266376951 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::MoleMole::EUILayoutPlatform Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_CLASS_1_482502C266376951__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_CLASS_1_482502C266376951_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_E2FB61652DB89C18()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_CLASS_1_482502C266376951_METHOD_1_E2FB61652DB89C18_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_CLASS_1_482502C266376951_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}
};
