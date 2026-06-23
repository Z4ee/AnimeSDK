#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_029B536AEC3836F4_Class_2_2CB68109B13467D8;
class Class_2_029B536AEC3836F4_Class_2_8108AA3D0A18D047;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_029B536AEC3836F4_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x15C85F90)
#define CLASS_2_029B536AEC3836F4_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x15C86150)
#define CLASS_2_029B536AEC3836F4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15C86200)
#define CLASS_2_029B536AEC3836F4__CTOR_OFFSET UNITYSDK_OFFSET(0x15C861F0)

inline static constexpr unsigned int Class_2_029B536AEC3836F4_TypeDefinitionIndex = 41442;

class Class_2_029B536AEC3836F4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_029B536AEC3836F4_Class_2_8108AA3D0A18D047*>* Field_2_3; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_029B536AEC3836F4_Class_2_2CB68109B13467D8*>* Field_2_2; // 0x20
	::UnityEngine::Canvas* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_029B536AEC3836F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_029B536AEC3836F4_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_029B536AEC3836F4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_029B536AEC3836F4_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
