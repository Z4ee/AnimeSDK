#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_68F110E8147B24DB_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x110E2C70)
#define CLASS_1_68F110E8147B24DB_METHOD_1_16F329E8131CBCB7_OFFSET UNITYSDK_OFFSET(0x110E30C0)
#define CLASS_1_68F110E8147B24DB_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x110E3050)
#define CLASS_1_68F110E8147B24DB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x110E1E70)
#define CLASS_1_68F110E8147B24DB_METHOD_1_4410D9E37415709C_OFFSET UNITYSDK_OFFSET(0x110E2180)
#define CLASS_1_68F110E8147B24DB_METHOD_1_4C46CDE1A5F0C830_1_OFFSET UNITYSDK_OFFSET(0x110E2080)
#define CLASS_1_68F110E8147B24DB_METHOD_1_4C46CDE1A5F0C830_OFFSET UNITYSDK_OFFSET(0x110E1F90)
#define CLASS_1_68F110E8147B24DB_METHOD_1_5216BF612C600DB6_OFFSET UNITYSDK_OFFSET(0x110E2B70)
#define CLASS_1_68F110E8147B24DB_METHOD_1_6C00C60DA25BB9BE_OFFSET UNITYSDK_OFFSET(0x110E2520)
#define CLASS_1_68F110E8147B24DB_METHOD_1_8874803F9DE2E863_OFFSET UNITYSDK_OFFSET(0x110E2A80)
#define CLASS_1_68F110E8147B24DB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x110E1ED0)
#define CLASS_1_68F110E8147B24DB_METHOD_1_973BEA90E6B3A400_OFFSET UNITYSDK_OFFSET(0x110E2F00)
#define CLASS_1_68F110E8147B24DB_METHOD_1_A3042EE0C88FB010_1_OFFSET UNITYSDK_OFFSET(0x110E2850)
#define CLASS_1_68F110E8147B24DB_METHOD_1_A3042EE0C88FB010_OFFSET UNITYSDK_OFFSET(0x110E2620)
#define CLASS_1_68F110E8147B24DB_METHOD_1_D65D6257FB73E1EC_OFFSET UNITYSDK_OFFSET(0x110E1F20)
#define CLASS_1_68F110E8147B24DB_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x110E2C80)
#define CLASS_1_68F110E8147B24DB__CTOR_OFFSET UNITYSDK_OFFSET(0x110E2C90)

inline static constexpr unsigned int Class_1_68F110E8147B24DB_TypeDefinitionIndex = 38649;

class Class_1_68F110E8147B24DB : public ::System::Object
{
public:
	static ::UnityEngine::Material** StaticGet_Field_1_9()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68F110E8147B24DB_TypeDefinitionIndex)->GetStaticField(0x45640);
	}
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_3; // 0x10
	::Il2CppArray<::UnityEngine::Vector2>* Field_1_7; // 0x18
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_2; // 0x20
	::UnityEngine::Mesh* Field_1_0; // 0x28
	::Il2CppArray<::UnityEngine::Color32>* Field_1_6; // 0x30
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_5; // 0x38
	::Il2CppArray<::UnityEngine::Material*>* _Materials_k__BackingField; // 0x40
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_4; // 0x48
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x50

	::System::Void _ctor(::UnityEngine::Mesh* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_1_D65D6257FB73E1EC()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_D65D6257FB73E1EC_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector3>* Method_1_4C46CDE1A5F0C830()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_4C46CDE1A5F0C830_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector3>* Method_1_4C46CDE1A5F0C830_1()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_4C46CDE1A5F0C830_1_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector3>* Method_1_4410D9E37415709C()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_4410D9E37415709C_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector4>* Method_1_6C00C60DA25BB9BE()
	{
		return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_6C00C60DA25BB9BE_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Color32>* Method_1_8874803F9DE2E863()
	{
		return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_8874803F9DE2E863_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector2>* Method_1_5216BF612C600DB6()
	{
		return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_5216BF612C600DB6_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* get_Materials()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_GET_MATERIALS_OFFSET))(this);
	}

	::System::Void set_Materials(::Il2CppArray<::UnityEngine::Material*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_SET_MATERIALS_OFFSET))(this, value);
	}

	::System::Boolean Method_1_A3042EE0C88FB010()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_A3042EE0C88FB010_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_A3042EE0C88FB010_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_A3042EE0C88FB010_1_OFFSET))(this);
	}

	::System::Boolean Method_1_16F329E8131CBCB7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_16F329E8131CBCB7_OFFSET))(this);
	}

	static ::UnityEngine::Material* Method_1_973BEA90E6B3A400()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_68F110E8147B24DB_METHOD_1_973BEA90E6B3A400_OFFSET))();
	}
};
