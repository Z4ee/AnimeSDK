#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class PreloadSingleStreaminGameConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADSTREAMINGGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13043050)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadStreamingGameConfig_TypeDefinitionIndex = 68050;

	class PreloadStreamingGameConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::PreloadSingleStreaminGameConfig*>* floorInfos; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* forceWaitMonsterIds; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADSTREAMINGGAMECONFIG__CTOR_OFFSET))(this);
		}
	};
}
