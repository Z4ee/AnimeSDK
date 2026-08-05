#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOLEMOLE_ABYSSS2_WORKGRID_V2_EQUALS_OFFSET UNITYSDK_OFFSET(0x856C30)
#define MOLEMOLE_ABYSSS2_WORKGRID_V2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x856D20)
#define MOLEMOLE_ABYSSS2_WORKGRID_V2__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)
#define MOLEMOLE_ABYSSS2_WORKGRID_V2___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x856D70)
#define MOLEMOLE_ABYSSS2_WORKGRID_V2___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x856DD0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_WorkGrid_V2_TypeDefinitionIndex = 87611;

	struct alignas(4) AbyssS2_WorkGrid_V2
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_V2__CTOR_OFFSET))(this, x, y);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_V2_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_V2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_V2___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_V2___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
