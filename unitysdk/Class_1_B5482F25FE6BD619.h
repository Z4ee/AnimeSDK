#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsUserType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_B5482F25FE6BD619_METHOD_1_092E633B9CD2BE71_OFFSET UNITYSDK_OFFSET(0x1CEB0960)
#define CLASS_1_B5482F25FE6BD619__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB0B50)

inline static constexpr unsigned int Class_1_B5482F25FE6BD619_TypeDefinitionIndex = 13796;

class Class_1_B5482F25FE6BD619 : public ::System::Object
{
public:
	::System::String* DKCPEGMOAHB; // 0x10
	::RPG::GameCore::LimaoNewsUserType JEJNHIBLJNM; // 0x18
	::System::UInt32 JAKLCIIEDON; // 0x1C
	::RPG::Client::TextID NJPLKACOMMM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5482F25FE6BD619__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_092E633B9CD2BE71(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B5482F25FE6BD619*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B5482F25FE6BD619*&))((::PBYTE)hIl2Cpp + CLASS_1_B5482F25FE6BD619_METHOD_1_092E633B9CD2BE71_OFFSET))(a1, a2);
	}
};
