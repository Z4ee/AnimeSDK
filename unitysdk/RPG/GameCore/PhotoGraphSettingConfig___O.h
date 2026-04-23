#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSettingConfig___O_TypeDefinitionIndex = 18086;

	class PhotoGraphSettingConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphFuncBtnType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::PhotoGraphFuncBtnType>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSettingConfig___O_TypeDefinitionIndex)->GetStaticField(0x43CD0);
		}
	};
}
