#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_337A0D7142819EB2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_2_208CC9941471731A_131;
namespace MoleMole::Config { class ItemDropEffectSetting; }

#define CLASS_3_F21C1034B58C5050_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13CADD40)
#define CLASS_3_F21C1034B58C5050_METHOD_3_4AA7827CFB505DDD_OFFSET UNITYSDK_OFFSET(0x13CADFC0)
#define CLASS_3_F21C1034B58C5050_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13CADE60)
#define CLASS_3_F21C1034B58C5050_METHOD_3_E9B1D65E33CF38C2_OFFSET UNITYSDK_OFFSET(0x13CADEF0)
#define CLASS_3_F21C1034B58C5050_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13CADCA0)
#define CLASS_3_F21C1034B58C5050__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CADD90)
#define CLASS_3_F21C1034B58C5050__CTOR_OFFSET UNITYSDK_OFFSET(0x13CADE10)

inline static constexpr unsigned int Class_3_F21C1034B58C5050_TypeDefinitionIndex = 59731;

class Class_3_F21C1034B58C5050 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_10 = 0x46; // 0x0
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_3_0; // 0x48
	::MoleMole::Config::ItemDropEffectSetting* Field_3_5; // 0x50
	::Class_2_208CC9941471731A_131* Field_3_3; // 0x58
	::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C> Field_3_4; // 0x60
	::System::Int32 Field_3_2; // 0x6C
	::System::Int32 Field_3_1; // 0x70
	::System::Boolean Field_3_8; // 0x74
	::System::Boolean Field_3_7; // 0x75
	::Enum_3_337A0D7142819EB2 Field_3_6; // 0x78
	::UnityEngine::Bounds Field_3_9; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_E9B1D65E33CF38C2(::System::Int32 a1, ::System::Int32 a2, ::Enum_3_337A0D7142819EB2 a3, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C> a4, ::Class_2_208CC9941471731A_131* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_337A0D7142819EB2, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C>, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050_METHOD_3_E9B1D65E33CF38C2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_3_F21C1034B58C5050* Method_3_4AA7827CFB505DDD()
	{
		return ((::Class_3_F21C1034B58C5050*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050_METHOD_3_4AA7827CFB505DDD_OFFSET))();
	}
};
