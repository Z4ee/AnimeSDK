#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SerializedScriptableObjectBase.h"

namespace MoleMole { class ConfigChessEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGCHESSENTITYMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94A210)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigChessEntityMap_TypeDefinitionIndex = 70426;

	class ConfigChessEntityMap : public ::MoleMole::SerializedScriptableObjectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigChessEntity*>* configChessEntities; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCHESSENTITYMAP__CTOR_OFFSET))(this);
		}
	};
}
