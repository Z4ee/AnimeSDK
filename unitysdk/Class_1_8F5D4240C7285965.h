#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionBeginType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8F5D4240C7285965_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8BB0020)
#define CLASS_1_8F5D4240C7285965__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB00D0)
#define CLASS_1_8F5D4240C7285965___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8BB0130)

inline static constexpr unsigned int Class_1_8F5D4240C7285965_TypeDefinitionIndex = 42035;

class Class_1_8F5D4240C7285965 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x10
	::RPG::GameCore::MissionBeginType Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x1C
	::System::Boolean Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F5D4240C7285965__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F5D4240C7285965_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F5D4240C7285965___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
