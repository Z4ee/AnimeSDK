#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPartInfo; }
namespace MoleMole { class ComicTweenMoveAnim; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COMICTWEENMOVEANIMSEQ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFA51B0)

namespace MoleMole
{
	inline static constexpr unsigned int ComicTweenMoveAnimSeq_TypeDefinitionIndex = 30589;

	class ComicTweenMoveAnimSeq : public ::System::Object
	{
	public:
		::System::String* animSeqName; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ComicPartInfo*>* animInfo; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::ComicTweenMoveAnim*>* animList; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::ComicImgPart>* imgDisplayPartList; // 0x28
		::System::String* animCurveKey; // 0x30
		::System::Single animationTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICTWEENMOVEANIMSEQ__CTOR_OFFSET))(this);
		}
	};
}
