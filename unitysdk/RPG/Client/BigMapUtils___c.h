#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelNavmapArea; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_BIGMAPUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x91ED170)
#define RPG_CLIENT_BIGMAPUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x91ED1B0)
#define RPG_CLIENT_BIGMAPUTILS___C___OBSOLETEGETPLAYERAREADATA_B__48_0_OFFSET UNITYSDK_OFFSET(0x91ED1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BigMapUtils___c_TypeDefinitionIndex = 51056;

	class BigMapUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::LevelNavmapArea*>** StaticGet___9__48_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::LevelNavmapArea*>**)Il2CppClass::FromTypeDefinitionIndex(BigMapUtils___c_TypeDefinitionIndex)->GetStaticField(0x41250);
		}
		static ::RPG::Client::BigMapUtils___c** StaticGet___9()
		{
			return (::RPG::Client::BigMapUtils___c**)Il2CppClass::FromTypeDefinitionIndex(BigMapUtils___c_TypeDefinitionIndex)->GetStaticField(0x41258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ObsoleteGetPlayerAreaData_b__48_0(::RPG::GameCore::LevelNavmapArea* x, ::RPG::GameCore::LevelNavmapArea* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelNavmapArea*, ::RPG::GameCore::LevelNavmapArea*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS___C___OBSOLETEGETPLAYERAREADATA_B__48_0_OFFSET))(this, x, y);
		}
	};
}
