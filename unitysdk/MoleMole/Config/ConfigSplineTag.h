#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSPLINETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D62980)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSplineTag_TypeDefinitionIndex = 51762;

	class ConfigSplineTag : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* stringList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETAG__CTOR_OFFSET))(this);
		}
	};
}
