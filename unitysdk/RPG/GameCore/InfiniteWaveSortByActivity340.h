#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_METHOD_3_9F4F54C6E5951870_OFFSET UNITYSDK_OFFSET(0x1D1AB620)
#define RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_METHOD_3_C9B45F801F1BCCAD_OFFSET UNITYSDK_OFFSET(0x1D1AB6F0)
#define RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AB6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveSortByActivity340_TypeDefinitionIndex = 22996;

	class InfiniteWaveSortByActivity340 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F4F54C6E5951870(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveSortByActivity340*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveSortByActivity340*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_METHOD_3_9F4F54C6E5951870_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C9B45F801F1BCCAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveSortByActivity340* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveSortByActivity340*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_METHOD_3_C9B45F801F1BCCAD_OFFSET))(a1, a2);
		}
	};
}
