#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"
#include "unitysdk/RPG/Client/AssetEventPort.h"
#include "unitysdk/RPG/Client/AssetEventType.h"

class Class_2_293C6AF513403273;
namespace RPG::Client { class IAssetOperation; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_37DA0DE90562E26A_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x17A47980)
#define CLASS_2_37DA0DE90562E26A_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x17A47F70)
#define CLASS_2_37DA0DE90562E26A_METHOD_2_ED8E19FE96307A82_OFFSET UNITYSDK_OFFSET(0x17A47AC0)
#define CLASS_2_37DA0DE90562E26A__CTOR_OFFSET UNITYSDK_OFFSET(0x17A47560)

inline static constexpr unsigned int Class_2_37DA0DE90562E26A_TypeDefinitionIndex = 80900;

class Class_2_37DA0DE90562E26A : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* GKHIHPGCLIK; // 0x20
	::System::Collections::Generic::List_1<::Class_1_FAF146B3D74C3C3F*>* HIMBONECCJK; // 0x28
	::Class_2_293C6AF513403273* FPAHLFBBNMK; // 0x30
	::RPG::Client::AssetEventType GMCNLFICNOB; // 0x38
	::RPG::Client::AssetEventPort IGMPALOKGKF; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_37DA0DE90562E26A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37DA0DE90562E26A_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_2_ED8E19FE96307A82(::RPG::Client::IAssetOperation* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_37DA0DE90562E26A_METHOD_2_ED8E19FE96307A82_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_FAF146B3D74C3C3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAF146B3D74C3C3F*))((::PBYTE)hIl2Cpp + CLASS_2_37DA0DE90562E26A_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}
};
