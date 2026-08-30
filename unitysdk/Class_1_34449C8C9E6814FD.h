#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_34449C8C9E6814FD_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1CB7CF80)
#define CLASS_1_34449C8C9E6814FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7D2A0)

inline static constexpr unsigned int Class_1_34449C8C9E6814FD_TypeDefinitionIndex = 11482;

class Class_1_34449C8C9E6814FD : public ::System::Object
{
public:
	::System::String* HOGDKNENKMB; // 0x10
	::System::String* KILFKBDMJGI; // 0x18
	::System::String* FLLGGNAPJOI; // 0x20
	::System::UInt32 EMFGEFNHOIB; // 0x28
	::RPG::GameCore::FateClazzType BKKAOIBLCJG; // 0x2C
	::System::UInt32 DOBKKDIECDO; // 0x30
	::System::UInt32 KJKMDFEJIJJ; // 0x34
	::RPG::Client::TextID PMGABBELKNG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34449C8C9E6814FD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_34449C8C9E6814FD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_34449C8C9E6814FD*&))((::PBYTE)hIl2Cpp + CLASS_1_34449C8C9E6814FD_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
