#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_DE6E731B8C5A5FB8.h"
#include "unitysdk/System/Object.h"

class Class_3_273F0D1D32194561_Class_1_81CBBEDA2612F7CC_5;
class Class_4_D02C44FA813EDE0B;
namespace UnityEngine { class GameObject; }

#define CLASS_3_273F0D1D32194561_CLASS_1_50D22CD89FFF1E55_METHOD_1_B6F52528B48637CF_OFFSET UNITYSDK_OFFSET(0x1E638040)
#define CLASS_3_273F0D1D32194561_CLASS_1_50D22CD89FFF1E55__CTOR_OFFSET UNITYSDK_OFFSET(0x1E638030)

inline static constexpr unsigned int Class_3_273F0D1D32194561_Class_1_50D22CD89FFF1E55_TypeDefinitionIndex = 93323;

class Class_3_273F0D1D32194561_Class_1_50D22CD89FFF1E55 : public ::System::Object
{
public:
	::Class_3_273F0D1D32194561_Class_1_81CBBEDA2612F7CC_5* Field_1_6; // 0x10
	::Struct_2_DE6E731B8C5A5FB8 Field_1_0; // 0x18
	::Class_4_D02C44FA813EDE0B* Field_1_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_273F0D1D32194561_CLASS_1_50D22CD89FFF1E55__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B6F52528B48637CF(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_273F0D1D32194561_CLASS_1_50D22CD89FFF1E55_METHOD_1_B6F52528B48637CF_OFFSET))(this, a1, a2);
	}
};
