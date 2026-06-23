#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/MatPropertyData.h"
#include "unitysdk/MoleMole/HollowChessboard/MatPropertyData_Value.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA_APPLY_OFFSET UNITYSDK_OFFSET(0x182F1C80)
#define MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x182F1BE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA_GETVALUE_OFFSET UNITYSDK_OFFSET(0x182F1B60)
#define MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x182F1B10)
#define MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x182F1B20)
#define MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x182F1B30)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ColorPropertyData_TypeDefinitionIndex = 41307;

	class ColorPropertyData : public ::MoleMole::HollowChessboard::MatPropertyData
	{
	public:
		::UnityEngine::Vector4 _Value_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* name, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA__CTOR_OFFSET))(this, name, value);
		}

		::UnityEngine::Vector4 get_Value()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA_SET_VALUE_OFFSET))(this, value);
		}

		::MoleMole::HollowChessboard::MatPropertyData_Value GetValue()
		{
			return ((::MoleMole::HollowChessboard::MatPropertyData_Value(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA_GETVALUE_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::MatPropertyData* Clone()
		{
			return ((::MoleMole::HollowChessboard::MatPropertyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA_CLONE_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::Material* data, ::System::Int32 propertyID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_COLORPROPERTYDATA_APPLY_OFFSET))(this, data, propertyID);
		}
	};
}
