#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_73F802686FB6B1CE.h"
#include "unitysdk/System/Object.h"

class Class_1_C65FEFFCB1D746BA;
class Class_1_CA0BB69AF30EB725;
class Class_1_E7BD46EB43F1A06F;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6561319A94355E86_METHOD_1_9AE3D7E71525625E_OFFSET UNITYSDK_OFFSET(0x16B571F0)
#define CLASS_1_6561319A94355E86_METHOD_1_B75B416E58C743E1_OFFSET UNITYSDK_OFFSET(0x16B573A0)
#define CLASS_1_6561319A94355E86_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x16B56E90)
#define CLASS_1_6561319A94355E86_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x16B56FD0)
#define CLASS_1_6561319A94355E86__CTOR_OFFSET UNITYSDK_OFFSET(0x16B57590)

inline static constexpr unsigned int Class_1_6561319A94355E86_TypeDefinitionIndex = 54322;

class Class_1_6561319A94355E86 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
	::System::Collections::Generic::List_1<::Class_1_C65FEFFCB1D746BA*>* GJPJJJJOHML; // 0x18
	::Class_1_CA0BB69AF30EB725* PJKNMFIDFLF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6561319A94355E86__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_6561319A94355E86_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6561319A94355E86_ONPLUGINUNINIT_OFFSET))(this);
	}

	::Class_1_C65FEFFCB1D746BA* Method_1_9AE3D7E71525625E(::Struct_2_73F802686FB6B1CE a1)
	{
		return ((::Class_1_C65FEFFCB1D746BA*(*)(::PVOID, ::Struct_2_73F802686FB6B1CE))((::PBYTE)hIl2Cpp + CLASS_1_6561319A94355E86_METHOD_1_9AE3D7E71525625E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B75B416E58C743E1(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_6561319A94355E86_METHOD_1_B75B416E58C743E1_OFFSET))(this, a1);
	}
};
