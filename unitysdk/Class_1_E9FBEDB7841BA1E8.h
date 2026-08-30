#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E9FBEDB7841BA1E8__CTOR_OFFSET UNITYSDK_OFFSET(0x15222000)

inline static constexpr unsigned int Class_1_E9FBEDB7841BA1E8_TypeDefinitionIndex = 75094;

class Class_1_E9FBEDB7841BA1E8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* FLFEMHDPNEO; // 0x10
	::RPG::Client::TextID ONBFILEPHPC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FBEDB7841BA1E8__CTOR_OFFSET))(this);
	}
};
