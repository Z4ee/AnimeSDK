#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_011AF2E14064C658_CLASS_1_A3FB2FEE0EA6393F_METHOD_1_5D52379F6FF16D24_OFFSET UNITYSDK_OFFSET(0x107DD250)
#define CLASS_1_011AF2E14064C658_CLASS_1_A3FB2FEE0EA6393F__CTOR_OFFSET UNITYSDK_OFFSET(0x107DD240)

inline static constexpr unsigned int Class_1_011AF2E14064C658_Class_1_A3FB2FEE0EA6393F_TypeDefinitionIndex = 47052;

class Class_1_011AF2E14064C658_Class_1_A3FB2FEE0EA6393F : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_A3FB2FEE0EA6393F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_5D52379F6FF16D24()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_A3FB2FEE0EA6393F_METHOD_1_5D52379F6FF16D24_OFFSET))(this);
	}
};
