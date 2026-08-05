#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }

#define CLASS_1_DAF0D3BB834797B7_METHOD_1_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0xECD0A70)
#define CLASS_1_DAF0D3BB834797B7_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xECD0640)
#define CLASS_1_DAF0D3BB834797B7_METHOD_1_2DA5E14835AEFAD5_OFFSET UNITYSDK_OFFSET(0xECD06A0)
#define CLASS_1_DAF0D3BB834797B7_METHOD_1_538720728A55E4EA_OFFSET UNITYSDK_OFFSET(0xECD0B90)
#define CLASS_1_DAF0D3BB834797B7_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xECD0720)
#define CLASS_1_DAF0D3BB834797B7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xECD0B40)
#define CLASS_1_DAF0D3BB834797B7__CTOR_OFFSET UNITYSDK_OFFSET(0xECD0630)

inline static constexpr unsigned int Class_1_DAF0D3BB834797B7_TypeDefinitionIndex = 44589;

class Class_1_DAF0D3BB834797B7 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigPosRot* Field_1_2; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x1C
	::UnityEngine::Vector3 Field_1_7; // 0x20
	::System::Int32 Field_1_6; // 0x2C
	::System::Boolean Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF0D3BB834797B7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF0D3BB834797B7_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2DA5E14835AEFAD5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF0D3BB834797B7_METHOD_1_2DA5E14835AEFAD5_OFFSET))(this);
	}

	::System::Void Method_1_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF0D3BB834797B7_METHOD_1_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF0D3BB834797B7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF0D3BB834797B7_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_538720728A55E4EA(::MoleMole::Config::ConfigPosRot* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DAF0D3BB834797B7_METHOD_1_538720728A55E4EA_OFFSET))(this, a1, a2, a3);
	}
};
