#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_699787DEDB234668;
class Class_3_50DF580B290D68BE;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_50DF580B290D68BE_CLASS_1_CC32C0767C256D6D_METHOD_1_3C3D62DD421DE782_OFFSET UNITYSDK_OFFSET(0x128C0360)
#define CLASS_3_50DF580B290D68BE_CLASS_1_CC32C0767C256D6D_METHOD_1_937F8473216A3162_1_OFFSET UNITYSDK_OFFSET(0x128C0330)
#define CLASS_3_50DF580B290D68BE_CLASS_1_CC32C0767C256D6D_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x128C0300)
#define CLASS_3_50DF580B290D68BE_CLASS_1_CC32C0767C256D6D__CTOR_OFFSET UNITYSDK_OFFSET(0x128C02F0)

inline static constexpr unsigned int Class_3_50DF580B290D68BE_Class_1_CC32C0767C256D6D_TypeDefinitionIndex = 84785;

class Class_3_50DF580B290D68BE_Class_1_CC32C0767C256D6D : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action* Field_1_3; // 0x18
	::Class_1_699787DEDB234668* Field_1_1; // 0x20
	::Class_3_50DF580B290D68BE* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50DF580B290D68BE_CLASS_1_CC32C0767C256D6D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50DF580B290D68BE_CLASS_1_CC32C0767C256D6D_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50DF580B290D68BE_CLASS_1_CC32C0767C256D6D_METHOD_1_937F8473216A3162_1_OFFSET))(this);
	}

	::System::Void Method_1_3C3D62DD421DE782(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_50DF580B290D68BE_CLASS_1_CC32C0767C256D6D_METHOD_1_3C3D62DD421DE782_OFFSET))(this, a1, a2);
	}
};
