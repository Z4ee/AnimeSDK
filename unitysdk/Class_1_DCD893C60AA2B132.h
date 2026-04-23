#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_73F802686FB6B1CE.h"
#include "unitysdk/System/Object.h"

class Class_1_8AD101AC5797B2CA;
class Class_1_CA0BB69AF30EB725;
class Class_1_E7BD46EB43F1A06F;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DCD893C60AA2B132_METHOD_1_1627AE6BCDE89B9B_OFFSET UNITYSDK_OFFSET(0x11DECC70)
#define CLASS_1_DCD893C60AA2B132_METHOD_1_A4E90525A25E1B07_OFFSET UNITYSDK_OFFSET(0x11DECDD0)
#define CLASS_1_DCD893C60AA2B132_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x11DEC970)
#define CLASS_1_DCD893C60AA2B132_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x11DECAB0)
#define CLASS_1_DCD893C60AA2B132__CTOR_OFFSET UNITYSDK_OFFSET(0x11DECF90)

inline static constexpr unsigned int Class_1_DCD893C60AA2B132_TypeDefinitionIndex = 49889;

class Class_1_DCD893C60AA2B132 : public ::System::Object
{
public:
	::Class_1_CA0BB69AF30EB725* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_8AD101AC5797B2CA*>* Field_1_1; // 0x18
	::RPG::GameCore::GameWorld* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCD893C60AA2B132__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_DCD893C60AA2B132_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCD893C60AA2B132_ONPLUGINUNINIT_OFFSET))(this);
	}

	::Class_1_8AD101AC5797B2CA* Method_1_1627AE6BCDE89B9B(::Struct_2_73F802686FB6B1CE a1)
	{
		return ((::Class_1_8AD101AC5797B2CA*(*)(::PVOID, ::Struct_2_73F802686FB6B1CE))((::PBYTE)hIl2Cpp + CLASS_1_DCD893C60AA2B132_METHOD_1_1627AE6BCDE89B9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4E90525A25E1B07(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_DCD893C60AA2B132_METHOD_1_A4E90525A25E1B07_OFFSET))(this, a1);
	}
};
