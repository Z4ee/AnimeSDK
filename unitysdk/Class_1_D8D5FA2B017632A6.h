#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IRIFBXLodSizeConfig; }
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D8D5FA2B017632A6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187D33A0)
#define CLASS_1_D8D5FA2B017632A6_METHOD_1_6FED859EE1068B27_OFFSET UNITYSDK_OFFSET(0x187D3560)
#define CLASS_1_D8D5FA2B017632A6_METHOD_1_E003D4507CF56BC1_OFFSET UNITYSDK_OFFSET(0x187D3440)
#define CLASS_1_D8D5FA2B017632A6_METHOD_1_F2B94768004EB1C1_OFFSET UNITYSDK_OFFSET(0x187D3240)
#define CLASS_1_D8D5FA2B017632A6__CTOR_OFFSET UNITYSDK_OFFSET(0x187D3320)

inline static constexpr unsigned int Class_1_D8D5FA2B017632A6_TypeDefinitionIndex = 69468;

class Class_1_D8D5FA2B017632A6 : public ::System::Object
{
public:
	static ::Class_1_D8D5FA2B017632A6** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_D8D5FA2B017632A6**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8D5FA2B017632A6_TypeDefinitionIndex)->GetStaticField(0x37230);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::IRIFBXLodSizeConfig*>* JKEENOKCDGJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8D5FA2B017632A6__CTOR_OFFSET))(this);
	}

	static ::Class_1_D8D5FA2B017632A6* Method_1_F2B94768004EB1C1()
	{
		return ((::Class_1_D8D5FA2B017632A6*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8D5FA2B017632A6_METHOD_1_F2B94768004EB1C1_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8D5FA2B017632A6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E003D4507CF56BC1(::RPG::GameCore::StageAutoGenConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageAutoGenConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D8D5FA2B017632A6_METHOD_1_E003D4507CF56BC1_OFFSET))(this, a1);
	}

	::RPG::GameCore::IRIFBXLodSizeConfig* Method_1_6FED859EE1068B27(::System::String* a1)
	{
		return ((::RPG::GameCore::IRIFBXLodSizeConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D8D5FA2B017632A6_METHOD_1_6FED859EE1068B27_OFFSET))(this, a1);
	}
};
