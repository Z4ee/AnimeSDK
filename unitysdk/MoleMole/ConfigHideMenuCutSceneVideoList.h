#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGHIDEMENUCUTSCENEVIDEOLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x142599A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigHideMenuCutSceneVideoList_TypeDefinitionIndex = 51432;

	class ConfigHideMenuCutSceneVideoList : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* cutSceneVideoList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHIDEMENUCUTSCENEVIDEOLIST__CTOR_OFFSET))(this);
		}
	};
}
