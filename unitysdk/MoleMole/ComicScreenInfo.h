#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPartInfo; }
namespace MoleMole { class ComicScreenInfo_AnimInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_COMICSCREENINFO_READDATATOUIGO_OFFSET UNITYSDK_OFFSET(0x1DFA5FA0)
#define MOLEMOLE_COMICSCREENINFO_WRITEDATAFROMUIGO_OFFSET UNITYSDK_OFFSET(0x1DFA63A0)
#define MOLEMOLE_COMICSCREENINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA6880)

namespace MoleMole
{
	inline static constexpr unsigned int ComicScreenInfo_TypeDefinitionIndex = 32130;

	class ComicScreenInfo : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>* posInfos; // 0x18
		::MoleMole::ComicScreenInfo_AnimInfo* animInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSCREENINFO__CTOR_OFFSET))(this);
		}

		::System::Void ReadDataToUIGo(::UnityEngine::GameObject* ins)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSCREENINFO_READDATATOUIGO_OFFSET))(this, ins);
		}

		::System::Void WriteDataFromUIGo(::UnityEngine::GameObject* ins)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSCREENINFO_WRITEDATAFROMUIGO_OFFSET))(this, ins);
		}
	};
}
