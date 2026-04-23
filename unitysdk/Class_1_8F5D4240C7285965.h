#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionBeginType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8F5D4240C7285965_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12A4FD30)
#define CLASS_1_8F5D4240C7285965__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4FDE0)
#define CLASS_1_8F5D4240C7285965___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12A4FE40)

inline static constexpr unsigned int Class_1_8F5D4240C7285965_TypeDefinitionIndex = 48008;

class Class_1_8F5D4240C7285965 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x10
	::System::Boolean Field_1_3; // 0x18
	::RPG::GameCore::MissionBeginType Field_1_1; // 0x1C
	::System::UInt32 Field_1_0; // 0x20

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
