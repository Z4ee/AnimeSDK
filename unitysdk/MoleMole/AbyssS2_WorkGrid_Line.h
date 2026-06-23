#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_WorkGrid_V2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOLEMOLE_ABYSSS2_WORKGRID_LINE_CREATELINE_OFFSET UNITYSDK_OFFSET(0x13585690)
#define MOLEMOLE_ABYSSS2_WORKGRID_LINE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B2670)
#define MOLEMOLE_ABYSSS2_WORKGRID_LINE_ISPOINTINSIDE_OFFSET UNITYSDK_OFFSET(0x7B2680)
#define MOLEMOLE_ABYSSS2_WORKGRID_LINE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B26B0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_WorkGrid_Line_TypeDefinitionIndex = 85686;

	struct alignas(4) AbyssS2_WorkGrid_Line
	{
		::MoleMole::AbyssS2_WorkGrid_V2 start; // 0x10
		::MoleMole::AbyssS2_WorkGrid_V2 end; // 0x18

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_LINE_EQUALS_OFFSET))(this, obj);
		}

		/*
		static ::MoleMole::AbyssS2_WorkGrid_Line CreateLine(::MoleMole::AbyssS2_GenConfigMeta meta, ::System::Int32 p, ::System::Int32 q)
		{
			return ((::MoleMole::AbyssS2_WorkGrid_Line(*)(::MoleMole::AbyssS2_GenConfigMeta, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_LINE_CREATELINE_OFFSET))(meta, p, q);
		}
		*/

		/*
		::System::Boolean IsPointInside(::MoleMole::AbyssS2_GenConfigMeta meta, ::System::Int32 qID)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_LINE_ISPOINTINSIDE_OFFSET))(this, meta, qID);
		}
		*/

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_WORKGRID_LINE___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
