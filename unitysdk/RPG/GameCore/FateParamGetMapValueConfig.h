#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG_METHOD_6_4D1480D58C5D18D4_OFFSET UNITYSDK_OFFSET(0x1C075BD0)
#define RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG_METHOD_6_ED8662264F00DD6A_OFFSET UNITYSDK_OFFSET(0x1C075B70)
#define RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C075BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamGetMapValueConfig_TypeDefinitionIndex = 15991;

	class FateParamGetMapValueConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Key; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ConfigMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_ED8662264F00DD6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamGetMapValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamGetMapValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG_METHOD_6_ED8662264F00DD6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4D1480D58C5D18D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamGetMapValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamGetMapValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG_METHOD_6_4D1480D58C5D18D4_OFFSET))(a1, a2);
		}
	};
}
