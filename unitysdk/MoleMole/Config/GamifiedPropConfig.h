#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_GAMIFIEDPROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E4DF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GamifiedPropConfig_TypeDefinitionIndex = 68125;

	class GamifiedPropConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* movableUIIconPaths; // 0x58
		::System::Single movableMaxSpeed; // 0x60
		::System::Single movableAcc; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMIFIEDPROPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
