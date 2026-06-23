#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_F547720DDC402041_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1793ADA0)
#define CLASS_1_F547720DDC402041_EQUALS_OFFSET UNITYSDK_OFFSET(0x1793AD40)
#define CLASS_1_F547720DDC402041_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1793AE50)
#define CLASS_1_F547720DDC402041_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1793AE90)
#define CLASS_1_F547720DDC402041_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1793AEC0)
#define CLASS_1_F547720DDC402041_METHOD_1_A04F8B5A3866011D_OFFSET UNITYSDK_OFFSET(0x1793AEB0)
#define CLASS_1_F547720DDC402041_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1793AF10)
#define CLASS_1_F547720DDC402041_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1793AEA0)
#define CLASS_1_F547720DDC402041_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x1793AF00)
#define CLASS_1_F547720DDC402041_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1793AC80)
#define CLASS_1_F547720DDC402041__CTOR_OFFSET UNITYSDK_OFFSET(0x1793ABE0)

inline static constexpr unsigned int Class_1_F547720DDC402041_TypeDefinitionIndex = 43729;

class Class_1_F547720DDC402041 : public ::System::Object
{
public:
	::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_F547720DDC402041* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F547720DDC402041*))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041_GETHASHCODE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>* Method_1_A04F8B5A3866011D()
	{
		return ((::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041_METHOD_1_A04F8B5A3866011D_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F547720DDC402041_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}
};
