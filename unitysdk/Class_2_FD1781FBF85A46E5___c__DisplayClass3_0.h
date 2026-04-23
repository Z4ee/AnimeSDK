#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C0BD047803C8E44F;
class Class_2_FD1781FBF85A46E5;
namespace RPG::Client { class BaseLobby; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AFE980)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x10B03C20)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x10B03D80)

inline static constexpr unsigned int Class_2_FD1781FBF85A46E5___c__DisplayClass3_0_TypeDefinitionIndex = 62950;

class Class_2_FD1781FBF85A46E5___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_2_FD1781FBF85A46E5* __4__this; // 0x10
	::Class_1_C0BD047803C8E44F* session; // 0x18
	::System::Action_1<::System::Exception*>* __9__1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::BaseLobby* __DoCreateLobby_b__0(::System::Exception* ex)
	{
		return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__0_OFFSET))(this, ex);
	}

	::System::Void __DoCreateLobby_b__1(::System::Exception* cleanupEx)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__1_OFFSET))(this, cleanupEx);
	}
};
