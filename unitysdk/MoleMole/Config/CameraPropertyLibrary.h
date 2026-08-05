#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

class Class_1_30B5FE4AA7ABAB8C_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CAMERAPROPERTYLIBRARY__CTOR_OFFSET UNITYSDK_OFFSET(0x14858630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraPropertyLibrary_TypeDefinitionIndex = 83140;

	class CameraPropertyLibrary : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_30B5FE4AA7ABAB8C_1*>* StandardLibrary; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERAPROPERTYLIBRARY__CTOR_OFFSET))(this);
		}
	};
}
