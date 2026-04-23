#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CurveData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_START_OFFSET UNITYSDK_OFFSET(0xA5DBD50)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA5DBED0)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5DC110)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5DC100)

namespace RPG::Client
{
	inline static constexpr unsigned int HDRPaperWhiteReferenceImage_TypeDefinitionIndex = 67068;

	class HDRPaperWhiteReferenceImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x7700);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x7704);
		}
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x7708);
		}
		static ::System::Int32* StaticGet_Field_5_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x770C);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x7710);
		}
		static ::System::Int32* StaticGet_Field_5_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x7714);
		}
		static ::System::Int32* StaticGet_Field_5_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x7718);
		}
		static ::System::Int32* StaticGet_Field_5_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x771C);
		}
		::UnityEngine::UI::Image* Field_5_0; // 0x18
		::UnityEngine::Material* Field_5_1; // 0x20
		::UnityEngine::TextAsset* curveParamsJson; // 0x28
		::RPG::CustomRP::CurveData Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_UPDATE_OFFSET))(this);
		}
	};
}
