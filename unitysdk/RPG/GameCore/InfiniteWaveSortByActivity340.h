#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_METHOD_3_4BA5441474302F39_OFFSET UNITYSDK_OFFSET(0x1984F3B0)
#define RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_METHOD_3_C9B45F801F1BCCAD_OFFSET UNITYSDK_OFFSET(0x1984F4C0)
#define RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340__CTOR_OFFSET UNITYSDK_OFFSET(0x1984F490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveSortByActivity340_TypeDefinitionIndex = 21992;

	class InfiniteWaveSortByActivity340 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4BA5441474302F39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveSortByActivity340*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveSortByActivity340*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_METHOD_3_4BA5441474302F39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C9B45F801F1BCCAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveSortByActivity340* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveSortByActivity340*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_METHOD_3_C9B45F801F1BCCAD_OFFSET))(a1, a2);
		}
	};
}
