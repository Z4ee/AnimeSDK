#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropState.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraPropType.h"

class Class_1_9D53176EF8570D3B;
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_FC8832E22E5D1C07_METHOD_2_00B029BA6E4FB42F_OFFSET UNITYSDK_OFFSET(0x14AFFF00)
#define CLASS_2_FC8832E22E5D1C07_METHOD_2_97BC79BDB09179A3_OFFSET UNITYSDK_OFFSET(0x14AFFE90)
#define CLASS_2_FC8832E22E5D1C07_METHOD_2_E9A5F20A5A25C0EA_OFFSET UNITYSDK_OFFSET(0x14B000C0)
#define CLASS_2_FC8832E22E5D1C07_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x14B00230)
#define CLASS_2_FC8832E22E5D1C07__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B002D0)
#define CLASS_2_FC8832E22E5D1C07__CTOR_OFFSET UNITYSDK_OFFSET(0x14B002A0)
#define CLASS_2_FC8832E22E5D1C07__ONBIND_OFFSET UNITYSDK_OFFSET(0x14AFFDF0)

inline static constexpr unsigned int Class_2_FC8832E22E5D1C07_TypeDefinitionIndex = 68235;

class Class_2_FC8832E22E5D1C07 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropType, ::System::String*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FC8832E22E5D1C07_TypeDefinitionIndex)->GetStaticField(0x60840);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropState, ::System::String*>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraPropState, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FC8832E22E5D1C07_TypeDefinitionIndex)->GetStaticField(0x60848);
	}
	::RPG::Client::UIStateCtrl* Field_2_2; // 0x60
	::UnityEngine::UI::Image* Field_2_3; // 0x68
	::UnityEngine::RectTransform* Field_2_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC8832E22E5D1C07__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FC8832E22E5D1C07__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC8832E22E5D1C07__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_97BC79BDB09179A3(::Class_1_9D53176EF8570D3B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D53176EF8570D3B*))((::PBYTE)hIl2Cpp + CLASS_2_FC8832E22E5D1C07_METHOD_2_97BC79BDB09179A3_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC8832E22E5D1C07_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_00B029BA6E4FB42F(::RPG::GameCore::SilverWolf999UltraPropState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SilverWolf999UltraPropState))((::PBYTE)hIl2Cpp + CLASS_2_FC8832E22E5D1C07_METHOD_2_00B029BA6E4FB42F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A5F20A5A25C0EA(::RPG::GameCore::SilverWolf999UltraPropType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SilverWolf999UltraPropType))((::PBYTE)hIl2Cpp + CLASS_2_FC8832E22E5D1C07_METHOD_2_E9A5F20A5A25C0EA_OFFSET))(this, a1);
	}
};
