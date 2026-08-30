#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GrassData; }

#define RPG_GAMECORE_BLOCKGRASSDATA_METHOD_2_F36B148D56C4DAB0_OFFSET UNITYSDK_OFFSET(0x1CE865C0)
#define RPG_GAMECORE_BLOCKGRASSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE86740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockGrassData_TypeDefinitionIndex = 18890;

	class BlockGrassData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 BlockLocalPosition; // 0x10
		::Il2CppArray<::RPG::GameCore::GrassData*>* AllPointGrassData; // 0x20
		::Il2CppArray<::RPG::GameCore::GrassData*>* AllDensityMapGrassData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKGRASSDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F36B148D56C4DAB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockGrassData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockGrassData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKGRASSDATA_METHOD_2_F36B148D56C4DAB0_OFFSET))(a1, a2);
		}
	};
}
