#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class DitherConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_DITHERCONFIGSEPARATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA86530)

namespace MoleMole
{
	inline static constexpr unsigned int DitherConfigSeparate_TypeDefinitionIndex = 60195;

	class DitherConfigSeparate : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DitherConfig*>* DitherConfigDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIGSEPARATE__CTOR_OFFSET))(this);
		}
	};
}
