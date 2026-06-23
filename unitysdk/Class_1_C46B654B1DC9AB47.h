#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_BA05407FBFF98D79.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_577E23085FCBCFE7;
class Class_1_73B1093D0FAD2B9E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C46B654B1DC9AB47_METHOD_1_08C74C96992B58B0_1_OFFSET UNITYSDK_OFFSET(0x1CC178C0)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_08C74C96992B58B0_OFFSET UNITYSDK_OFFSET(0x1CC17AA0)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_31060B84A8E791D9_OFFSET UNITYSDK_OFFSET(0x1CC176D0)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_434E7E087C100C72_OFFSET UNITYSDK_OFFSET(0x1CC173E0)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_6A66CAC35E03CD90_OFFSET UNITYSDK_OFFSET(0x1CC17020)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_757D849598A9E8C5_OFFSET UNITYSDK_OFFSET(0x1CC17C80)
#define CLASS_1_C46B654B1DC9AB47_METHOD_1_BE04E4F81474C414_OFFSET UNITYSDK_OFFSET(0x1CC17560)
#define CLASS_1_C46B654B1DC9AB47__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC16E90)

inline static constexpr unsigned int Class_1_C46B654B1DC9AB47_TypeDefinitionIndex = 56464;

class Class_1_C46B654B1DC9AB47 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::Struct_2_BA05407FBFF98D79>* Field_1_4; // 0x10
	::UnityEngine::Quaternion Field_1_2; // 0x18
	::Foundation::Unreal::FTransform3D Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x50
	::UnityEngine::Vector3 Field_1_0; // 0x5C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6A66CAC35E03CD90(::Class_1_577E23085FCBCFE7*& a1, ::Class_1_73B1093D0FAD2B9E* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_577E23085FCBCFE7*&, ::Class_1_73B1093D0FAD2B9E*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_6A66CAC35E03CD90_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_31060B84A8E791D9(::Class_1_73B1093D0FAD2B9E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73B1093D0FAD2B9E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_31060B84A8E791D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BE04E4F81474C414(::UnityEngine::Vector3Int a1, ::Class_1_73B1093D0FAD2B9E* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_1_73B1093D0FAD2B9E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_BE04E4F81474C414_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_08C74C96992B58B0(::Struct_2_BA05407FBFF98D79 a1, ::Class_1_73B1093D0FAD2B9E* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Struct_2_BA05407FBFF98D79, ::Class_1_73B1093D0FAD2B9E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_08C74C96992B58B0_OFFSET))(a1, a2, a3);
	}

	::Foundation::Unreal::FTransform3D Method_1_757D849598A9E8C5(::UnityEngine::Vector3Int a1)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_757D849598A9E8C5_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_08C74C96992B58B0_1(::Struct_2_BA05407FBFF98D79 a1, ::Class_1_73B1093D0FAD2B9E* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Struct_2_BA05407FBFF98D79, ::Class_1_73B1093D0FAD2B9E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_08C74C96992B58B0_1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_434E7E087C100C72(::UnityEngine::Vector3Int a1, ::Class_1_73B1093D0FAD2B9E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_1_73B1093D0FAD2B9E*))((::PBYTE)hIl2Cpp + CLASS_1_C46B654B1DC9AB47_METHOD_1_434E7E087C100C72_OFFSET))(this, a1, a2);
	}
};
