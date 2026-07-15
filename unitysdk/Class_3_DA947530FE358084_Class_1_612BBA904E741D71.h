#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6B68BF08CE41EC5F;
class Class_3_DA947530FE358084_Class_1_612BBA904E741D71_Class_1_392329507188B0AA;
namespace UnityEngine { class Transform; }

#define CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_1851C433B7254E4E_OFFSET UNITYSDK_OFFSET(0x17FB2D10)
#define CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_9B97A7966B23A4A7_OFFSET UNITYSDK_OFFSET(0x17FB26B0)
#define CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB1DD0)

inline static constexpr unsigned int Class_3_DA947530FE358084_Class_1_612BBA904E741D71_TypeDefinitionIndex = 49915;

class Class_3_DA947530FE358084_Class_1_612BBA904E741D71 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::Class_3_DA947530FE358084_Class_1_612BBA904E741D71_Class_1_392329507188B0AA* Field_1_1; // 0x18
	::Class_1_6B68BF08CE41EC5F* Field_1_2; // 0x20
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9B97A7966B23A4A7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_9B97A7966B23A4A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1851C433B7254E4E(::Class_1_6B68BF08CE41EC5F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B68BF08CE41EC5F*))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_1851C433B7254E4E_OFFSET))(this, a1);
	}
};
