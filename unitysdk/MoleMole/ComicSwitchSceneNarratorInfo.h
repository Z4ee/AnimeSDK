#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COMICSWITCHSCENENARRATORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD08970)

namespace MoleMole
{
	inline static constexpr unsigned int ComicSwitchSceneNarratorInfo_TypeDefinitionIndex = 32122;

	class ComicSwitchSceneNarratorInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* dialogues; // 0x10
		::System::Single speakSpeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSWITCHSCENENARRATORINFO__CTOR_OFFSET))(this);
		}
	};
}
