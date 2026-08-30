#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimFogOfWarConfig; }
namespace RPG::GameCore { class FiveDimMapSurfaceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMAPFACECONFIG_METHOD_2_232299F1C454B31A_OFFSET UNITYSDK_OFFSET(0x1D0F0020)
#define RPG_GAMECORE_FIVEDIMMAPFACECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F0330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMapFaceConfig_TypeDefinitionIndex = 18308;

	class FiveDimMapFaceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FaceIndex; // 0x10
		::System::String* Comment; // 0x18
		::System::Boolean IsShowEmptyMap; // 0x20
		::RPG::MVector2 Size; // 0x24
		::System::String* Path; // 0x30
		::System::String* ShowLevelVarName; // 0x38
		::Il2CppArray<::System::Int16>* ShowLevelVarValues; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimMapSurfaceConfig*>* SurfaceList; // 0x48
		::RPG::GameCore::FiveDimFogOfWarConfig* FogOfWarConfig; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPFACECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_232299F1C454B31A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMapFaceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMapFaceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPFACECONFIG_METHOD_2_232299F1C454B31A_OFFSET))(a1, a2);
		}
	};
}
