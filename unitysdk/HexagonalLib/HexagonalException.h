#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/HexagonalGrid.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace HexagonalLib { class HexagonalException_MessageBuilder; }
namespace System { class Object; }
namespace System { class String; }

#define HEXAGONALLIB_HEXAGONALEXCEPTION_CREATEBUILDER_OFFSET UNITYSDK_OFFSET(0x1BC3F020)
#define HEXAGONALLIB_HEXAGONALEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC3EF10)
#define HEXAGONALLIB_HEXAGONALEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BC3F2C0)
#define HEXAGONALLIB_HEXAGONALEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BC3F4F0)
#define HEXAGONALLIB_HEXAGONALEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3EE90)

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalException_TypeDefinitionIndex = 26354;

	class HexagonalException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION__CTOR_OFFSET))(this, message);
		}

		::System::Void _ctor_1(::System::String* message, ::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Object*>>* fields)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Object*>>*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION__CTOR_1_OFFSET))(this, message, fields);
		}

		::System::Void _ctor_2(::System::String* message, ::HexagonalLib::HexagonalGrid grid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HexagonalLib::HexagonalGrid))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION__CTOR_2_OFFSET))(this, message, grid);
		}

		::System::Void _ctor_3(::System::String* message, ::HexagonalLib::HexagonalGrid grid, ::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Object*>>* fields)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HexagonalLib::HexagonalGrid, ::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Object*>>*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION__CTOR_3_OFFSET))(this, message, grid, fields);
		}

		static ::HexagonalLib::HexagonalException_MessageBuilder* CreateBuilder(::System::String* message)
		{
			return ((::HexagonalLib::HexagonalException_MessageBuilder*(*)(::System::String*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION_CREATEBUILDER_OFFSET))(message);
		}
	};
}
