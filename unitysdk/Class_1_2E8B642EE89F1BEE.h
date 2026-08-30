#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define CLASS_1_2E8B642EE89F1BEE_METHOD_1_387EA1BE4F9FC1D2_OFFSET UNITYSDK_OFFSET(0x1524CE70)
#define CLASS_1_2E8B642EE89F1BEE_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x1524D1A0)
#define CLASS_1_2E8B642EE89F1BEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1524D2C0)
#define CLASS_1_2E8B642EE89F1BEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1524CE60)

inline static constexpr unsigned int Class_1_2E8B642EE89F1BEE_TypeDefinitionIndex = 59413;

class Class_1_2E8B642EE89F1BEE : public ::System::Object
{
public:
	::RPG::Client::IAssetOperation* NHDIHIPANIG; // 0x10

	::System::Void _ctor(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_2E8B642EE89F1BEE__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_387EA1BE4F9FC1D2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E8B642EE89F1BEE_METHOD_1_387EA1BE4F9FC1D2_OFFSET))(this);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E8B642EE89F1BEE_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E8B642EE89F1BEE_TOSTRING_OFFSET))(this);
	}
};
