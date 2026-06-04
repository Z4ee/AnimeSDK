#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcbLoader_Status.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExAcb; }
namespace System { class String; }

#define CRIWARE_CRIATOMCUESHEET_GET_ISERROR_OFFSET UNITYSDK_OFFSET(0x14684F50)
#define CRIWARE_CRIATOMCUESHEET_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x14680B40)
#define CRIWARE_CRIATOMCUESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x14682EA0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomCueSheet_TypeDefinitionIndex = 36978;

	class CriAtomCueSheet : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* acbFile; // 0x18
		::System::String* awbFile; // 0x20
		::CriWare::CriAtomExAcb* acb; // 0x28
		::CriWare::CriAtomExAcbLoader_Status loaderStatus; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCUESHEET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCUESHEET_GET_ISLOADING_OFFSET))(this);
		}

		::System::Boolean get_IsError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCUESHEET_GET_ISERROR_OFFSET))(this);
		}
	};
}
