#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_349FFE7FFEC1E3D1;
class Class_3_DA947530FE358084_Class_1_612BBA904E741D71_Class_1_392329507188B0AA;
namespace UnityEngine { class Transform; }

#define CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_1851C433B7254E4E_OFFSET UNITYSDK_OFFSET(0xA9816E0)
#define CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_58D68FEBA7B5A778_OFFSET UNITYSDK_OFFSET(0xA980FE0)
#define CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71__CTOR_OFFSET UNITYSDK_OFFSET(0xA980730)

inline static constexpr unsigned int Class_3_DA947530FE358084_Class_1_612BBA904E741D71_TypeDefinitionIndex = 48902;

class Class_3_DA947530FE358084_Class_1_612BBA904E741D71 : public ::System::Object
{
public:
	::Class_3_DA947530FE358084_Class_1_612BBA904E741D71_Class_1_392329507188B0AA* Field_1_0; // 0x10
	::Class_1_349FFE7FFEC1E3D1* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58D68FEBA7B5A778(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_58D68FEBA7B5A778_OFFSET))(this, a1);
	}

	::System::Void Method_1_1851C433B7254E4E(::Class_1_349FFE7FFEC1E3D1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_349FFE7FFEC1E3D1*))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_1851C433B7254E4E_OFFSET))(this, a1);
	}
};
