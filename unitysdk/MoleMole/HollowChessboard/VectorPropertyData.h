#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/MatPropertyData.h"
#include "unitysdk/MoleMole/HollowChessboard/MatPropertyData_Value.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA_APPLY_OFFSET UNITYSDK_OFFSET(0x136BA260)
#define MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x136BA1B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA_GETVALUE_OFFSET UNITYSDK_OFFSET(0x136BA130)
#define MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x136BA0E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x136BA100)
#define MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x136BA110)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int VectorPropertyData_TypeDefinitionIndex = 47083;

	class VectorPropertyData : public ::MoleMole::HollowChessboard::MatPropertyData
	{
	public:
		::UnityEngine::Vector3 _Value_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* name, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA__CTOR_OFFSET))(this, name, value);
		}

		::UnityEngine::Vector3 get_Value()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA_SET_VALUE_OFFSET))(this, value);
		}

		::MoleMole::HollowChessboard::MatPropertyData_Value GetValue()
		{
			return ((::MoleMole::HollowChessboard::MatPropertyData_Value(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA_GETVALUE_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::MatPropertyData* Clone()
		{
			return ((::MoleMole::HollowChessboard::MatPropertyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA_CLONE_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::Material* data, ::System::Int32 propertyID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VECTORPROPERTYDATA_APPLY_OFFSET))(this, data, propertyID);
		}
	};
}
