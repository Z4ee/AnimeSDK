#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MESHBOUND_METHOD_2_13BBD19F92B6C9CF_OFFSET UNITYSDK_OFFSET(0x1D2864E0)
#define RPG_GAMECORE_MESHBOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D286660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MeshBound_TypeDefinitionIndex = 18888;

	class MeshBound : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 BoundType; // 0x10
		::RPG::MVector3 Center; // 0x14
		::RPG::MVector3 Size; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESHBOUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_13BBD19F92B6C9CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MeshBound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MeshBound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESHBOUND_METHOD_2_13BBD19F92B6C9CF_OFFSET))(a1, a2);
		}
	};
}
