#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_3_01B4CC30216C9ABE_1;
class Class_3_273F0D1D32194561;
class Class_4_D02C44FA813EDE0B;
namespace UnityEngine { class GameObject; }

#define CLASS_3_273F0D1D32194561_CLASS_1_D065DA89A699AC6A_METHOD_1_5557080012D3E214_OFFSET UNITYSDK_OFFSET(0x1F3E2DE0)
#define CLASS_3_273F0D1D32194561_CLASS_1_D065DA89A699AC6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E2DD0)

inline static constexpr unsigned int Class_3_273F0D1D32194561_Class_1_D065DA89A699AC6A_TypeDefinitionIndex = 93322;

class Class_3_273F0D1D32194561_Class_1_D065DA89A699AC6A : public ::System::Object
{
public:
	::Class_4_D02C44FA813EDE0B* Field_1_0; // 0x10
	::Class_3_01B4CC30216C9ABE_1* Field_1_1; // 0x18
	::Class_3_273F0D1D32194561* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_273F0D1D32194561_CLASS_1_D065DA89A699AC6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5557080012D3E214(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_273F0D1D32194561_CLASS_1_D065DA89A699AC6A_METHOD_1_5557080012D3E214_OFFSET))(this, a1, a2);
	}
};
