#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DAD235E7E82A1F67_GET_CURRENTHEALTH_OFFSET UNITYSDK_OFFSET(0x175EBF50)
#define CLASS_1_DAD235E7E82A1F67_GET_CURRENTSHIELD_OFFSET UNITYSDK_OFFSET(0x175EBFB0)
#define CLASS_1_DAD235E7E82A1F67_GET_ENABLEPREVIEW_OFFSET UNITYSDK_OFFSET(0x175EC010)
#define CLASS_1_DAD235E7E82A1F67_GET_MAXHEALTH_OFFSET UNITYSDK_OFFSET(0x175EBF90)
#define CLASS_1_DAD235E7E82A1F67_GET_PREVIEWEVERMAXSHIELD_OFFSET UNITYSDK_OFFSET(0x175EBFF0)
#define CLASS_1_DAD235E7E82A1F67_GET_PREVIEWHEALTH_OFFSET UNITYSDK_OFFSET(0x175EBF70)
#define CLASS_1_DAD235E7E82A1F67_GET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0x175EBFD0)
#define CLASS_1_DAD235E7E82A1F67_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x175EC030)
#define CLASS_1_DAD235E7E82A1F67_SET_CURRENTHEALTH_OFFSET UNITYSDK_OFFSET(0x175EBF60)
#define CLASS_1_DAD235E7E82A1F67_SET_CURRENTSHIELD_OFFSET UNITYSDK_OFFSET(0x175EBFC0)
#define CLASS_1_DAD235E7E82A1F67_SET_ENABLEPREVIEW_OFFSET UNITYSDK_OFFSET(0x175EC020)
#define CLASS_1_DAD235E7E82A1F67_SET_MAXHEALTH_OFFSET UNITYSDK_OFFSET(0x175EBFA0)
#define CLASS_1_DAD235E7E82A1F67_SET_PREVIEWEVERMAXSHIELD_OFFSET UNITYSDK_OFFSET(0x175EC000)
#define CLASS_1_DAD235E7E82A1F67_SET_PREVIEWHEALTH_OFFSET UNITYSDK_OFFSET(0x175EBF80)
#define CLASS_1_DAD235E7E82A1F67_SET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0x175EBFE0)
#define CLASS_1_DAD235E7E82A1F67__CTOR_OFFSET UNITYSDK_OFFSET(0x175EC090)

inline static constexpr unsigned int Class_1_DAD235E7E82A1F67_TypeDefinitionIndex = 75865;

class Class_1_DAD235E7E82A1F67 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint _MaxHealth_k__BackingField; // 0x10
	::RPG::GameCore::FixPoint _PreviewEverMaxShield_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _CurrentHealth_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _PreviewShield_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint _PreviewHealth_k__BackingField; // 0x30
	::System::Boolean _EnablePreview_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _CurrentShield_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_CurrentHealth()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_GET_CURRENTHEALTH_OFFSET))(this);
	}

	::System::Void set_CurrentHealth(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_SET_CURRENTHEALTH_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_PreviewHealth()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_GET_PREVIEWHEALTH_OFFSET))(this);
	}

	::System::Void set_PreviewHealth(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_SET_PREVIEWHEALTH_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxHealth()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_GET_MAXHEALTH_OFFSET))(this);
	}

	::System::Void set_MaxHealth(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_SET_MAXHEALTH_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurrentShield()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_GET_CURRENTSHIELD_OFFSET))(this);
	}

	::System::Void set_CurrentShield(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_SET_CURRENTSHIELD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_PreviewShield()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_GET_PREVIEWSHIELD_OFFSET))(this);
	}

	::System::Void set_PreviewShield(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_SET_PREVIEWSHIELD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_PreviewEverMaxShield()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_GET_PREVIEWEVERMAXSHIELD_OFFSET))(this);
	}

	::System::Void set_PreviewEverMaxShield(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_SET_PREVIEWEVERMAXSHIELD_OFFSET))(this, a1);
	}

	::System::Boolean get_EnablePreview()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_GET_ENABLEPREVIEW_OFFSET))(this);
	}

	::System::Void set_EnablePreview(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_SET_ENABLEPREVIEW_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD235E7E82A1F67_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
