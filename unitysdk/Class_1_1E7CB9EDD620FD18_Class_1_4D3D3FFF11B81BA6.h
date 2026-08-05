#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1E7CB9EDD620FD18;
namespace MoleMole { class UIInLevelNPCNameWidgetController; }

#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_4D3D3FFF11B81BA6_METHOD_1_13A2D6D9F1A53397_OFFSET UNITYSDK_OFFSET(0x1098E3F0)
#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_4D3D3FFF11B81BA6__CTOR_OFFSET UNITYSDK_OFFSET(0x1098E3E0)

inline static constexpr unsigned int Class_1_1E7CB9EDD620FD18_Class_1_4D3D3FFF11B81BA6_TypeDefinitionIndex = 87383;

class Class_1_1E7CB9EDD620FD18_Class_1_4D3D3FFF11B81BA6 : public ::System::Object
{
public:
	::Class_1_1E7CB9EDD620FD18* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_4D3D3FFF11B81BA6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_13A2D6D9F1A53397(::System::UInt32 a1, ::MoleMole::UIInLevelNPCNameWidgetController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_4D3D3FFF11B81BA6_METHOD_1_13A2D6D9F1A53397_OFFSET))(this, a1, a2);
	}
};
