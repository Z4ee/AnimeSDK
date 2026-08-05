#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_CONTAINER_CELLLOCATION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC0B6C0)
#define FOUNDATION_CONTAINER_CELLLOCATION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC0B6E0)
#define FOUNDATION_CONTAINER_CELLLOCATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC0B760)

namespace Foundation::Container
{
	inline static constexpr unsigned int CellLocation_TypeDefinitionIndex = 8771;

	struct alignas(4) CellLocation
	{
		static ::Foundation::Container::CellLocation* StaticGet_Null()
		{
			return (::Foundation::Container::CellLocation*)Il2CppClass::FromTypeDefinitionIndex(CellLocation_TypeDefinitionIndex)->GetStaticField(0x3B90);
		}
		::System::Int32 X; // 0x10
		::System::Int32 Z; // 0x14
		::System::Int32 Level; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELLLOCATION__CCTOR_OFFSET))();
		}

		static ::System::Boolean op_Equality(::Foundation::Container::CellLocation left, ::Foundation::Container::CellLocation right)
		{
			return ((::System::Boolean(*)(::Foundation::Container::CellLocation, ::Foundation::Container::CellLocation))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELLLOCATION_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::Container::CellLocation left, ::Foundation::Container::CellLocation right)
		{
			return ((::System::Boolean(*)(::Foundation::Container::CellLocation, ::Foundation::Container::CellLocation))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELLLOCATION_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
