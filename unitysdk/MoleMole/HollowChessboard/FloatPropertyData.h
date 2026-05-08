#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/MatPropertyData.h"
#include "unitysdk/MoleMole/HollowChessboard/MatPropertyData_Value.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA_APPLY_OFFSET UNITYSDK_OFFSET(0x1233D850)
#define MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1233D930)
#define MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1233D8C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1233D810)
#define MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1233D820)
#define MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1233D830)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int FloatPropertyData_TypeDefinitionIndex = 67391;

	class FloatPropertyData : public ::MoleMole::HollowChessboard::MatPropertyData
	{
	public:
		::System::Single _Value_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA__CTOR_OFFSET))(this, name, value);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Apply(::UnityEngine::Material* data, ::System::Int32 propertyID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA_APPLY_OFFSET))(this, data, propertyID);
		}

		::MoleMole::HollowChessboard::MatPropertyData_Value GetValue()
		{
			return ((::MoleMole::HollowChessboard::MatPropertyData_Value(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA_GETVALUE_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::MatPropertyData* Clone()
		{
			return ((::MoleMole::HollowChessboard::MatPropertyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_FLOATPROPERTYDATA_CLONE_OFFSET))(this);
		}
	};
}
