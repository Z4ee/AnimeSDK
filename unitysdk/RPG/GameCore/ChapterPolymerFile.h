#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PolymerObj; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHAPTERPOLYMERFILE_METHOD_2_CC2F80B4B240B60D_OFFSET UNITYSDK_OFFSET(0x187C9ED0)
#define RPG_GAMECORE_CHAPTERPOLYMERFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x187C9FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChapterPolymerFile_TypeDefinitionIndex = 18120;

	class ChapterPolymerFile : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PolymerObj*>* Polymer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHAPTERPOLYMERFILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CC2F80B4B240B60D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChapterPolymerFile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChapterPolymerFile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHAPTERPOLYMERFILE_METHOD_2_CC2F80B4B240B60D_OFFSET))(a1, a2);
		}
	};
}
