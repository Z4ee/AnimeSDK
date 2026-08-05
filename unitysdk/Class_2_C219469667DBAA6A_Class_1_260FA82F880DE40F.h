#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A_Class_1_42788263D0E1130D;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_260FA82F880DE40F_METHOD_1_70C53C44D861ADA9_OFFSET UNITYSDK_OFFSET(0x1778EB10)
#define CLASS_2_C219469667DBAA6A_CLASS_1_260FA82F880DE40F__CTOR_OFFSET UNITYSDK_OFFSET(0x1778EB00)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_260FA82F880DE40F_TypeDefinitionIndex = 65649;

class Class_2_C219469667DBAA6A_Class_1_260FA82F880DE40F : public ::System::Object
{
public:
	::Class_2_C219469667DBAA6A_Class_1_42788263D0E1130D* Field_1_1; // 0x10
	::System::Action_3<::Foundation::AssetPath, ::System::Int32, ::System::Int32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_260FA82F880DE40F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_70C53C44D861ADA9(::Foundation::AssetPath a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_260FA82F880DE40F_METHOD_1_70C53C44D861ADA9_OFFSET))(this, a1, a2, a3);
	}
};
