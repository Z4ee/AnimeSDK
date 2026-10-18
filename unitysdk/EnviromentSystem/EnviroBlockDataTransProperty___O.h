#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneLightVolume;
namespace System { template <typename T> class Comparison_1; }

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroBlockDataTransProperty___O_TypeDefinitionIndex = 49594;

	class EnviroBlockDataTransProperty___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::SceneLightVolume*>** StaticGet__0___CompareForSelection()
		{
			return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroBlockDataTransProperty___O_TypeDefinitionIndex)->GetStaticField(0x47A70);
		}
	};
}
