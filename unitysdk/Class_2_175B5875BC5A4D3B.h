#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/ScreenPlayer.h"

class Class_1_E9529ED64113E4E9;
class Class_2_CE524E0BB2F7DB94;
class ScreenPlayData;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Graphic; }

#define CLASS_2_175B5875BC5A4D3B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138657C0)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x13865470)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_2612FBD266D27A09_OFFSET UNITYSDK_OFFSET(0x13865880)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_279F16698CBFE4EB_OFFSET UNITYSDK_OFFSET(0x13865890)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x13865870)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_8807457F6361C8AA_OFFSET UNITYSDK_OFFSET(0x138649B0)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_8B5D9BE407CABB96_OFFSET UNITYSDK_OFFSET(0x138658C0)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_98A399CC8B751747_OFFSET UNITYSDK_OFFSET(0x138658D0)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_A5570A6940712F82_OFFSET UNITYSDK_OFFSET(0x13865260)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_B0903388A7C237DB_OFFSET UNITYSDK_OFFSET(0x13864D50)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_B25FF39A276813B3_OFFSET UNITYSDK_OFFSET(0x13865860)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x13865410)
#define CLASS_2_175B5875BC5A4D3B_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x138658E0)
#define CLASS_2_175B5875BC5A4D3B_UPDATE_OFFSET UNITYSDK_OFFSET(0x13865000)
#define CLASS_2_175B5875BC5A4D3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x13865810)
#define CLASS_2_175B5875BC5A4D3B__CTOR_OFFSET UNITYSDK_OFFSET(0x138648E0)

inline static constexpr unsigned int Class_2_175B5875BC5A4D3B_TypeDefinitionIndex = 56326;

class Class_2_175B5875BC5A4D3B : public ::MoleMole::ScreenPlayer
{
public:
	static ::System::Int32* StaticGet_Field_2_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_175B5875BC5A4D3B_TypeDefinitionIndex)->GetStaticField(0x12900);
	}
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_175B5875BC5A4D3B_TypeDefinitionIndex)->GetStaticField(0x12904);
	}
	::Foundation::AssetRequestHandle Field_2_4; // 0xB38
	::UnityEngine::Material* Field_2_2; // 0xB58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* Field_2_7; // 0xB60
	::UnityEngine::UI::Graphic* Field_2_0; // 0xB68
	::Class_2_CE524E0BB2F7DB94* Field_2_3; // 0xB70
	::Class_1_E9529ED64113E4E9* Field_2_1; // 0xB78

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

	::System::Void Method_2_B25FF39A276813B3(::ScreenPlayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_B25FF39A276813B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_2612FBD266D27A09(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_2612FBD266D27A09_OFFSET))(this, a1);
	}

	::UnityEngine::Texture2D* Method_2_B0903388A7C237DB(::ScreenPlayData* a1)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_B0903388A7C237DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_279F16698CBFE4EB(::Class_1_E9529ED64113E4E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_279F16698CBFE4EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B5D9BE407CABB96(::ScreenPlayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_8B5D9BE407CABB96_OFFSET))(this, a1);
	}

	::System::Void Method_2_98A399CC8B751747(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_98A399CC8B751747_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_175B5875BC5A4D3B_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}
};
