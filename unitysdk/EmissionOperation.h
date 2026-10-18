#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class FiveDimRenderingItem;

#define EMISSIONOPERATION_METHOD_3_2FE10362D7B73426_OFFSET UNITYSDK_OFFSET(0x155E43D0)
#define EMISSIONOPERATION_METHOD_3_6454AD7212B2C6DE_1_OFFSET UNITYSDK_OFFSET(0x155E4000)
#define EMISSIONOPERATION_METHOD_3_6454AD7212B2C6DE_OFFSET UNITYSDK_OFFSET(0x155E3C20)
#define EMISSIONOPERATION_METHOD_3_7FC1C5EEA9D38187_OFFSET UNITYSDK_OFFSET(0x155E4420)
#define EMISSIONOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x155E4300)
#define EMISSIONOPERATION_METHOD_3_A4A57157C453DC3A_OFFSET UNITYSDK_OFFSET(0x155E3EF0)
#define EMISSIONOPERATION_METHOD_3_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x155E4350)
#define EMISSIONOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x155E4560)
#define EMISSIONOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x155E4540)

inline static constexpr unsigned int EmissionOperation_TypeDefinitionIndex = 47117;

class EmissionOperation : public ::FDRIMatStateOperation
{
public:
	static ::System::Int32* StaticGet__EmissionUseCustomData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EmissionOperation_TypeDefinitionIndex)->GetStaticField(0x13260);
	}
	::UnityEngine::Color EmissionColor; // 0x20
	::System::Single EmissionIntensity; // 0x30
	::System::Int32 TargetMaterialID; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMISSIONOPERATION__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMISSIONOPERATION__CCTOR_OFFSET))();
	}

	::System::Void Method_3_6454AD7212B2C6DE(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_METHOD_3_6454AD7212B2C6DE_OFFSET))(this, a1);
	}

	::System::Void Method_3_A4A57157C453DC3A(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_METHOD_3_A4A57157C453DC3A_OFFSET))(this, a1);
	}

	::System::Void Method_3_6454AD7212B2C6DE_1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_METHOD_3_6454AD7212B2C6DE_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_3_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_METHOD_3_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_3_2FE10362D7B73426(::FiveDimRenderingItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_METHOD_3_2FE10362D7B73426_OFFSET))(this, a1);
	}

	::System::Void Method_3_7FC1C5EEA9D38187(::UnityEngine::Vector4& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_METHOD_3_7FC1C5EEA9D38187_OFFSET))(this, a1);
	}
};
