#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_4_DA19DD65175B97CF;
namespace Share { class CVector2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_17C16694410E7397_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x116C5EF0)
#define CLASS_1_17C16694410E7397_METHOD_1_DA2132B3D655C6CE_OFFSET UNITYSDK_OFFSET(0x116C5F80)
#define CLASS_1_17C16694410E7397__CTOR_OFFSET UNITYSDK_OFFSET(0x116C5F30)

inline static constexpr unsigned int Class_1_17C16694410E7397_TypeDefinitionIndex = 38810;

class Class_1_17C16694410E7397 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C16694410E7397__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C16694410E7397_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Method_1_DA2132B3D655C6CE()
	{
		return ((::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C16694410E7397_METHOD_1_DA2132B3D655C6CE_OFFSET))(this);
	}
};
