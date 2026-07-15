#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::ReporterUtil { template <typename T> class Analyzer_1___c; }
namespace System { template <typename T> class Comparison_1; }

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int Analyzer_1___c_TypeDefinitionIndex = 44862;

	template <typename TDataType>
	class Analyzer_1___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ReporterUtil::Analyzer_1___c<TDataType>** StaticGet___9()
		{
			return (::MiHoYo::SDK::ReporterUtil::Analyzer_1___c<TDataType>**)Il2CppClass::FromTypeDefinitionIndex(Analyzer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Comparison_1<TDataType>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<TDataType>**)Il2CppClass::FromTypeDefinitionIndex(Analyzer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
