#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/ScreenPlayer.h"

class Class_1_E9529ED64113E4E9;
class Class_2_2EAAA8212B3AB2EF;
class ScreenPlayData;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Graphic; }

#define CLASS_2_175B5875BC5A4D3B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D3A630)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x14D3A2E0)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_2612FBD266D27A09_OFFSET UNITYSDK_OFFSET(0x14D3A6F0)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_40C747663E741A75_OFFSET UNITYSDK_OFFSET(0x14D3A700)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x14D3A730)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_8807457F6361C8AA_OFFSET UNITYSDK_OFFSET(0x14D39820)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_98A399CC8B751747_OFFSET UNITYSDK_OFFSET(0x14D3A6D0)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_A5570A6940712F82_OFFSET UNITYSDK_OFFSET(0x14D3A0D0)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_B0903388A7C237DB_OFFSET UNITYSDK_OFFSET(0x14D39BC0)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_B25FF39A276813B3_OFFSET UNITYSDK_OFFSET(0x14D3A6E0)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x14D3A280)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x14D3A740)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_FCF5049E960F9E05_OFFSET UNITYSDK_OFFSET(0x14D3A750)
#define CLASS_2_175B5875BC5A4D3B_UPDATE_OFFSET UNITYSDK_OFFSET(0x14D39E70)
#define CLASS_2_175B5875BC5A4D3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D3A680)
#define CLASS_2_175B5875BC5A4D3B__CTOR_OFFSET UNITYSDK_OFFSET(0x14D39750)

inline static constexpr unsigned int Class_2_175B5875BC5A4D3B_TypeDefinitionIndex = 90459;

class Class_2_175B5875BC5A4D3B : public ::MoleMole::ScreenPlayer
{
public:
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_175B5875BC5A4D3B_TypeDefinitionIndex)->GetStaticField(0x11D10);
	}
	static ::System::Int32* StaticGet_Field_2_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_175B5875BC5A4D3B_TypeDefinitionIndex)->GetStaticField(0x11D14);
	}
	::UnityEngine::UI::Graphic* Field_2_1; // 0xB38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* Field_2_10; // 0xB40
	::Foundation::AssetRequestHandle Field_2_5; // 0xB48
	::UnityEngine::Material* Field_2_7; // 0xB68
	::Class_2_2EAAA8212B3AB2EF* Field_2_6; // 0xB70
	::Class_1_E9529ED64113E4E9* Field_2_0; // 0xB78

	::System::Void _ctor(::UnityEngine::UI::Graphic* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B__CCTOR_OFFSET))();
	}

	::System::Void Method_2_8807457F6361C8AA(::ScreenPlayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_8807457F6361C8AA_OFFSET))(this, a1);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5570A6940712F82(::ScreenPlayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_A5570A6940712F82_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_2_B0903388A7C237DB(::ScreenPlayData* a1)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_B0903388A7C237DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_98A399CC8B751747(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_98A399CC8B751747_OFFSET))(this, a1);
	}

	::System::Void Method_2_B25FF39A276813B3(::ScreenPlayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_B25FF39A276813B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_2612FBD266D27A09(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_2612FBD266D27A09_OFFSET))(this, a1);
	}

	::System::Void Method_2_40C747663E741A75(::Class_1_E9529ED64113E4E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_40C747663E741A75_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_FCF5049E960F9E05(::ScreenPlayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_FCF5049E960F9E05_OFFSET))(this, a1);
	}
};
